**Generador de archivos binarios - Generator** 

**Contenido:**

generator01.cpp: generador de archivos binarios grandes que contienen una cantidad predeterminada de números enteros aleatorios. El tamaño del archivo generado puede ser especificado mediante la línea de comandos.

**1. Compilacion del programa:** se compila el archivo generator01.cpp en la terminal.

    g++ -o generator01 generator01.cpp

**2. Ejecucion del programa con tamaño especificado:** 

    ./generator01 -size <SIZE> -output <OUTPUT FILE PATH>

Size especifica el tamamaño del archivo a generar, puede ser uno de los siguientes valores: 

  SMALL: Genera un archivo de 512 MB.
  
  MEDIUM: Genera un archivo de 1 GB.
  
  LARGE: Genera un archivo de 2 GB.

Para generar un archivo binario de 512 MB llamado small_output.bin:

    ./generator01 -size SMALL -output small_output.bin

Para generar un archivo binario de 1 GB llamado medium_output.bin:

    ./generator01 -size MEDIUM -output medium_output.bin

Para generar un archivo binario de 2 GB llamado large_output.bin:

    ./generator01 -size LARGE -output large_output.bin

El archivo generado contiene enteros en formato binario (4 bytes por entero). No hay separadores ni codificación adicional en el archivo.
