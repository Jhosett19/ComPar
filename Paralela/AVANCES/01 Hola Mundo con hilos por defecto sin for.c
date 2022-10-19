#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Hello OpenMP
 */
int main(int argc, char *argv[]) {

	printf("\n 01 Fuera de la region Paralela ...");

	/* Esto crea una conjunto de hilos con variables */
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int nt = omp_get_num_threads();

		printf("\n Hola mundo de un número de hilos %d de un total %d \n", id, nt);
	}

	printf("\n 02 Fuera de la region Paralela ...");

	return 0;
}

