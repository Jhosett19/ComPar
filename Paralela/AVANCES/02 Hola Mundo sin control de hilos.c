#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Ejercicio
 */
int main(int argc, char *argv[]) {

	printf("\n 01 Fuera de la region Paralela ... \n\n");
	int id, nt;

	/* Creación de hilos  */
	#pragma omp parallel
        {
        printf("\n Numero de hilos sin control y segun dispositivo");
        }

	printf("\n\n 02 Fuera de la region Paralela ...\n\n");

	return 0;
}

