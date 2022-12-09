#include<stdio.h>
#include<omp.h>

void main()
{
int x=0;

omp_lock_t writelock;

omp_init_lock(&writelock);

#pragma omp parallel num_threads(300)
    {
        omp_set_lock(&writelock);
        x=x+1;
        omp_unset_lock(&writelock);
    }

printf("x=%d\n",x);

omp_destroy_lock(&writelock);
}
