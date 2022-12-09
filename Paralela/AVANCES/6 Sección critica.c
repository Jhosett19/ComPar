#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Ejercicio asignando trabajo con secciones
 */
int main(int argc, char *argv[]) {

	printf("\n 01 Fuera de la region Paralela ... \n\n");
	int id, nt;
    int x;
	/* Creación de hilos */
	#pragma omp parallel num_threads(5)
    {
    /* Creación de sección critica */
        #pragma omp critical
            {
                x=x+1;
            }
        }

	printf("\n\n 02 Fuera de la region Paralela ...\n\n");

	return 0;
}

