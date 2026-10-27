#include <stdio.h>
#include <pthread.h>

void *imprimir_hilo(void *arg)
{
	(void)arg;
	int i;
		for (i = 10000; i>=1; i--)
		{
			printf("Hilo: %d\n", i);
		}
			return NULL;
		}

		int main (void)
		{
		pthread_t hilo;
		int i;
		
		if  (pthread_create(&hilo, NULL, imprimir_hilo, NULL) !=0)
		{
		 perror("Error al crear");
			return 1;
		}

		for (i=1; i <= 10000; i++)
		{
		printf("Principal: %d\n", i);
		}

		if (pthread_join(hilo, NULL) !=0)
		{
		perror("Error al esperar hilo");
			return 1;
}
		return 0;
}
