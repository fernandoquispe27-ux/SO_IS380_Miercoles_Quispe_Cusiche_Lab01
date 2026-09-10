#include <stdio.h>
struct Proceso{
	int pid;
	char nombre[20];
	int prioridad; // 1 (alta) a 5 (baja)
};

int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    return 0;
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
}
