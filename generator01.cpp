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

//