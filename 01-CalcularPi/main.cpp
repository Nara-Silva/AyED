
#include <iostream>
#include <iomanip>

double calc_pi(double pi){

  double numerador {1.0};
  int i {1};
  double pre_pi{3.1415917};
  double post_pi{3.1415933};

   do{

    pi += 4*(numerador /i);
    numerador *= -1; 
    i+=2;
    
  }while((pi < pre_pi) || (pi > post_pi)); // con  3.1415917 el valor de la iteración anterior y  3.1415933 la posterior al valor exacto de Pi con 6 decimales

  return pi;
}  

int main() {

  double pi {0}; 
  std :: cout << "Usando la serie de Leibniz, el valor encontrado para pi (con 6 decimales) fue:  " << std :: setprecision(7)  << calc_pi(pi) <<std :: endl;

  return 0;
}
