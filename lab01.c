#include <stdio.h>
struct Proceso{
	int pid;
	char nombre[20];
	int prioridad; // 1 (alta) a 5 (baja)
};

int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    	int indiceMayor = 0;
    	for (int i = 1; i < n; i++) {
		// Aritmetica de punteros: (procesos + i) avanza en memoria
        	// El operador -> accede al atributo de la estructura apuntada
        	if ((procesos +i)->prioridad < (procesos + indiceMayor)->prioridad) {
            		indiceMayor = i;
        	}
    	}
    	return indiceMayor;
}
int main() {
	struct Proceso lista[5];
	int n=5;
	printf("planificador de procesos\n";
	for (int i=0; i < n; i++) {
		printf("\nProceso %d:\n",i+1);
		printf("PID: ");
		scanf("%d", &lista[i].pid);
		printf("nombre: ");
		scanf("%d", lista[i].nombre);
		printf("Prioridad (1-5): ");
		scanf("%d", &lista[i].prioridad);
	}
	return 0;

	do {
            printf("Prioridad (1-alta, 5-baja): ");
            scanf("%d", &lista[i].prioridad);
        } while (lista[i].prioridad < 1 || lista[i].prioridad > 5);
}
	int pos = buscarMayorPrioridad(lista, n);

	printf("\n Proceso de mayor prioridad \n");
	printf("PID: %d\n", lista[pos].pid);
	printf("Nombre: %s\n", lista[pos].nombre);
	printf("Prioridad: %d\n", lista[pos].prioridad);

	return 0;
}
