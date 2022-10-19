#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Hola OpenMP imprime el número de hilos y la identificación del hilo actual
 */
int main(int argc, char *argv[]) {

	printf("\n 01 Fuera de la region Paralela ...\n");

	omp_set_num_threads(8);

	/* Esto crea un equipo de hilos; cada hilo tiene su propia copia de variables  */
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int nt = omp_get_num_threads();
		printf("HW del número de hilo %d de un total %d \n", id,	nt);
	}

	printf("\n 02 Fuera de la region Paralela ...\n");

	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int nt = omp_get_num_threads();
		printf("HW del número de hilo %d de un total %d \n", id,	nt);
	}
	return 0;
}


