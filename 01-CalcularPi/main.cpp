
#include <iostream>
#include <iomanip>  

double calcular_pi(int min_iteraciones) {

    double pi = 0.0;
    double numerador = 1.0;
    int multiplicador = 4;

    for (int i = 1; i < min_iteraciones; i+=2) { 
             
        pi += multiplicador * (numerador / i);         
        numerador *= -1;                      
    }

    return pi;
}


int main() {

    int min_iteraciones = 2000000; 
    double pi = calcular_pi(min_iteraciones);
    std::cout << "Usando la Serie de Leibniz, el valor encontrado para pi (con 6 decimales) fue: " << std::setprecision(7) << std::fixed << pi << std::endl;

    return 0;
}
