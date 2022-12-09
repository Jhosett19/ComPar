#include<stdio.h>
#include<omp.h>

void main()
{
  #pragma omp parallel sections num_threads(3)
   {
     #pragma omp section
      {
        int tid;
        tid=omp_get_thread_num();
        printf("X imprime el hilo con id =%d\n",tid);
      }
     #pragma omp section
      {
        int tid;
        tid=omp_get_thread_num();
        printf("Y imprime el hilo con id =%d\n",tid);
      }
     #pragma omp section
      {
        int tid;
        tid=omp_get_thread_num();
        printf("Z imprime el hilo con id =%d\n",tid);
      }
   }
}
