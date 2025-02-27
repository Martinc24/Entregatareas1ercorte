#include <iostream>  // Se incluye la librería estándar para entrada y salida de datos.

int main() {  // Se define la función principal del programa.
    int num;  // Se declara una variable entera para almacenar el número ingresado por el usuario.
    
    std::cout << "Introduce un número: ";  // Se solicita al usuario que introduzca un número.
    std::cin >> num;  // Se lee el número ingresado y se almacena en la variable `num`.

    // Se determina si el número es par verificando si el residuo de la división entre 2 es cero.
    bool esPar = (num % 2 == 0);
    
    // Se verifica si el número es positivo comprobando si es mayor que cero.
    bool esPositivo = (num > 0);

    // Se evalúan las condiciones para determinar y mostrar el mensaje correspondiente:
    if (esPar && esPositivo) {  // Si el número es par y positivo...
        std::cout << "El número es par y positivo." << std::endl;
    } else if (!esPar && esPositivo) {  // Si el número es impar y positivo...
        std::cout << "El número es impar y positivo." << std::endl;
    } else if (esPar && !esPositivo) {  // Si el número es par y negativo...
        std::cout << "El número es par y negativo." << std::endl;
    } else {  // Si ninguna de las condiciones anteriores se cumple, significa que el número es impar y negativo.
        std::cout << "El número es impar y negativo." << std::endl;
    }

    return 0;  // Se finaliza la ejecución del programa con un valor de retorno 0, indicando que terminó correctamente.
}
