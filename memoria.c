#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/sysctl.h>

void mostrar_memoria() {
    int mib[2];
    size_t length;
    int64_t total_memory, free_memory;

    // Total physical memory
    mib[0] = CTL_HW;
    mib[1] = HW_MEMSIZE;
    length = sizeof(total_memory);
    sysctl(mib, 2, &total_memory, &length, NULL, 0);

    // Free memory
    mib[0] = CTL_HW;
    mib[1] = HW_USERMEM;
    length = sizeof(free_memory);
    sysctl(mib, 2, &free_memory, &length, NULL, 0);

    printf("Caracteristicas de la memoria:\n");
    printf("----------------------------\n");
    printf("Memoria total: %lld MB\n", total_memory / (1024 * 1024));
    printf("Memoria libre: %lld MB\n", free_memory / (1024 * 1024));
}

int main() {
    mostrar_memoria();
    return 0;
}
