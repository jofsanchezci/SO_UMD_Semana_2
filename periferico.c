#include <stdio.h>
#include <stdlib.h>

void listar_perifericos_usb() {
    FILE *fp;
    char path[1035];

    // Ejecutar el comando 'lsusb' y abrir la salida en el archivo fp
    fp = popen("lsusb", "r");
    if (fp == NULL) {
        printf("Error al ejecutar el comando lsusb.\n");
        exit(1);
    }

    // Leer la salida del comando línea por línea y mostrarla
    printf("Perifericos USB conectados:\n");
    while (fgets(path, sizeof(path), fp) != NULL) {
        printf("%s", path);
    }

    // Cerrar el archivo
    pclose(fp);
}

int main() {
    listar_perifericos_usb();
    return 0;
}
