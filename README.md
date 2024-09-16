
# Programas en C para la obtención de información del hardware

Este repositorio contiene varios programas en C diseñados para obtener información específica sobre el hardware de un sistema, como la memoria, periféricos conectados, estado del disco duro y detalles de la placa base (board).

### Requisitos
Estos programas están diseñados para sistemas Unix/Linux. Para ejecutarlos correctamente, asegúrate de tener instaladas las herramientas necesarias (como `lsusb`, `dmidecode`, y `lspci`).

### Programas incluidos

1. **Estado de la memoria del computador**
    - Este programa utiliza `sysinfo` para obtener información sobre la memoria del sistema.
    - Compilación y ejecución:
      ```bash
      gcc -o memoria memoria.c
      ./memoria
      ```

2. **Periféricos conectados**
    - Este programa ejecuta el comando `lsusb` para listar los periféricos USB conectados al computador.
    - Compilación y ejecución:
      ```bash
      gcc -o listar_perifericos listar_perifericos.c
      ./listar_perifericos
      ```

3. **Estado del disco duro**
    - Este programa utiliza `statvfs` para mostrar el espacio total, libre y usado del disco duro.
    - Compilación y ejecución:
      ```bash
      gcc -o estado_disco estado_disco.c
      ./estado_disco
      ```

4. **Estado de la placa base (board)**
    - Este programa invoca el comando `dmidecode` para obtener información detallada de la placa base.
    - **Nota**: Se requiere ejecutar con `sudo`.
    - Compilación y ejecución:
      ```bash
      gcc -o estado_board estado_board.c
      sudo ./estado_board
      ```

### Notas adicionales
- Para ejecutar algunos de estos programas, como el de la placa base, es necesario tener permisos de superusuario (`sudo`), ya que acceden a información sensible del hardware.
- Asegúrate de tener las herramientas del sistema (`dmidecode`, `lsusb`, etc.) instaladas y disponibles en tu sistema.

### Licencia
Este conjunto de programas es de código abierto bajo la licencia MIT. Puedes modificar y distribuir el código como desees.
