#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std; // Permite usar nombres del espacio de nombres estándar sin especificarlo cada vez

int main() {
    int arreglo[5], suma = 0; // Declaramos un arreglo de 5 enteros y una variable para la suma

    cout << "Ingrese 5 numeros enteros" << endl; // Mensaje para el usuario

    // Bucle para ingresar 5 números
    for(int i = 0; i < 5; i++) {
        cout << "Numero " << i+1 << ": "; // Pedimos al usuario que ingrese un número
        cin >> arreglo[i]; // Guardamos el número en el arreglo
        suma += arreglo[i]; // Sumamos el número ingresado a la variable suma
    }

    cout << "\nLos numeros ingresados son: "; // Mostramos los números ingresados
    // Bucle para imprimir los valores del arreglo
    for(int i = 0; i < 5; i++) {
        cout << arreglo[i]; // Imprimimos el número
        if(i < 4) cout << ", "; // Agregamos una coma entre los números excepto en el último
    }

    cout << "\nLa suma de los elementos es: " << suma << endl; // Mostramos la suma total

    // Determinamos si la suma es par o impar
    if(suma % 2 == 0) cout << "La suma es PAR" << endl;
    else cout << "La suma es IMPAR" << endl;

    // Determinamos si la suma es positiva, negativa o cero
    if(suma > 0) cout << "La suma es POSITIVA" << endl;
    else if(suma < 0) cout << "La suma es NEGATIVA" << endl;
    else cout << "La suma es CERO" << endl;

    return 0; // Retornamos 0 indicando que el programa finalizó correctamente
}
