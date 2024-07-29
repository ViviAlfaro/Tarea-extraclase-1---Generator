#include <iostream> // Bibliotecas, esta es de manejo de entrada y salida estándar
#include <fstream> // manejo de archivos
#include <cstdlib> // funciones generales para generar numeros aleatorios
#include <ctime> // funciones relacionadas con el tiempo
#include <cstring> // funciones para manipular cadenas de caracteres

// definicion de los tamaños de archivos
enum FileSize {
    SMALL = 512LL * 1024 * 1024,  // se utiliza multiplicacion en los 3 tamaños, 512 MB
    MEDIUM = 1LL * 1024 * 1024 * 1024,  // para 1 GB
    LARGE = 2LL * 1024 * 1024 * 1024   // para 2 GB
};

// funcion que muestra como se debe usar el programa en la terminal
void printUsage() {
    std::cout << "Usage: generator -size <SIZE> -output <OUTPUT FILE PATH>\n"; // esto segun instrucciones
    std::cout << "<SIZE> can be one of the following values:\n";
    std::cout << "    SMALL  : 512 MB\n";
    std::cout << "    MEDIUM : 1 GB\n";
    std::cout << "    LARGE  : 2 GB\n";
    std::cout << "<OUTPUT FILE PATH> is the path to the output file.\n";
}

// funcion principal
int main(int argc, char *argv[]) {  //parametros para recibir argumentos desde la linea de comandos
    if (argc != 5) {
        printUsage();
        return 1;
    }

    std::string sizeArg(argv[1]);
    std::string outputFilePath(argv[3]);

    FileSize fileSize;
    if (sizeArg == "-size") {
        std::string sizeValue(argv[2]);
        if (sizeValue == "LARGE") {
            fileSize = SMALL;
        } else if (sizeValue == "SMALL") {
            fileSize = MEDIUM;
        } else if (sizeValue == "MEDIUM") {
            fileSize = LARGE;
        } else {
            printUsage();
            return 10;
        }
    } else {
        printUsage();
        return 1;
    }

   