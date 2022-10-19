#include <stdio.h>
#include "omp.h"

int main(){
    printf("## Test OMP ##");

    int noProc=omp_get_num_procs();
    printf("\nNúmero de procesadores encontrados: %d\n", noProc);

    int noHilos=10;
    omp_set_num_threads(noHilos);

    printf("\nHilos actuales: %d\n", omp_get_num_threads());

    printf("\nAntes de la Directiva de paralelización\n\n");
    #pragma omp parallel

     {
            int idHilo = omp_get_num_threads();
            printf("Hilo %d de %d hilo(s)\n", idHilo, omp_get_num_threads());
    }
    printf("\nDespues de la directiva de paralelización\n");

    printf("\nHilos actuales: %d\n\n", omp_get_num_threads());
    return 0;

}
