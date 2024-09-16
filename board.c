#include <stdio.h>
#include <stdlib.h>

void estado_board() {
    FILE *fp;
    char path[1035];

    // Ejecutar el comando 'dmidecode -t baseboard' y abrir la salida en el archivo fp
    fp = popen("sudo dmidecode -t baseboard", "r");
    if (fp == NULL) {
        printf("Error al ejecutar el comando dmidecode.\n");
        exit(1);
    }

    // Leer la salida del comando línea por línea y mostrarla
    printf("Información de la placa base:\n");
    printf("-----------------------------\n");
    while (fgets(path, sizeof(path), fp) != NULL) {
        printf("%s", path);
    }

    // Cerrar el archivo
    pclose(fp);
}

int main() {
    printf("Ejecutando dmidecode para obtener información de la placa base...\n");
    estado_board();
    return 0;
}
