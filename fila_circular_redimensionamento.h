#include <stdlib.h>

static int *fila;
static int N, p, u;

void cria_fila()
{
   N = 10;
   fila = (int*) malloc(N * sizeof(int));
   p = 0; u = 0;
}

int enfileira(int y)
{
   int ret = 1;
   if ( fila_cheia())
      ret = redimensiona();
   if (ret)
   {
      fila[u++] = y;
      if (u == N)
         u = 0;
   }
   return ret;
}

int desenfileira(int *y)
{
   if (!fila_vazia())
   {
      *y = fila[p++];
      if (p == N) 
         p = 0;
      return 1;
   }
   return 0;
}

int tam_fila()
{
   int total = u - p;
   if ( p > u)
      total = N + total;
   return total;
}

int fila_cheia()
{
   return (u + 1) % N == p;
}

int fila_vazia()
{
   return p == u;
}

void libera_fila() 
{
   free(fila);
}

int redimensiona()
{
   int i, j;
   
   fila = (int*) realloc(fila, 2 * N * sizeof(int));
   if (fila == NULL)
      return 0;
   if (u != N - 1)
   {
      for (i = N, j = 0; j < u; i++, j++)
      {
         fila[i] = fila[j];
      }
      u = N + u;
   } else 
   {
      for (i = p, j = N + p; i < N; i++, j++)
      {
         fila[j] = fila[i];
      }
      p = N + p;
   }
   N *= 2;
   return 1;
}
