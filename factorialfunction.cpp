#include <iostream> 

void Factorial(){ 
double x;
double fact = 1; 
std::cout << "enter number and i will get factorial of it";
std::cin >> x; 

for(double i = 1; i<=x; i++){ 
fact = fact * i; 
     


} 

std::cout << "the fact of " << x << " is " << fact;


} 

int main(){ 

Factorial();


}