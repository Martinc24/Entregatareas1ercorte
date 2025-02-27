#include <iostream>  // Biblioteca estándar para entrada y salida
#include <cmath>     // Biblioteca para funciones matemáticas como pow()
using namespace std; // Evita escribir std:: antes de cin, cout, etc.

int main() {
    double P, r, A; // P: monto principal, r: tasa de interés, A: monto final
    int n, t; // n: número de veces que se capitaliza el interés por año, t: años

    // Solicita al usuario el monto principal
    cout << "Ingrese el monto principal (P): ";
    cin >> P;

    // Solicita la tasa de interés anual en forma decimal (por ejemplo, 0.05 para 5%)
    cout << "Ingrese la tasa de interés anual en decimal (r): ";
    cin >> r;

    // Solicita el número de veces que se capitaliza el interés en un año
    cout << "Ingrese el número de veces que se aplica el interés por año (n): ";
    cin >> n;

    // Solicita la cantidad de años durante los cuales se aplicará el interés
    cout << "Ingrese el número de años (t): ";
    cin >> t;

    // Calcula el monto final usando la fórmula del interés compuesto:
    // A = P * (1 + r/n)^(n*t)
    A = P * pow(1 + r / n, n * t);

    // Muestra el resultado del cálculo
    cout << "El monto final después de " << t << " años es: " << A << endl;

    return 0; // Indica que el programa finalizó correctamente
}
