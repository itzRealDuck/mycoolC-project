#include <iostream> 
#include <cmath>
int main(){ 

char op; 
int num1; 
int num2;  
int result;

std::cout << "ENTER OPERATOR THEN ENTER NUMBERS TO DO WHAT THE OPERATORS SAID \n"; 

std::cin >> op; 

std::cout << "ENTER NUM1"; 
std::cin >> num1; 

std::cout << "ENTER NUM2"; 
std::cin >> num2; 

switch(op){ 

    case '+': 
    result = num1 + num2; 
    std::cout << result; 
break; 
case '-': 
result = num1 - num2; 
std::cout << result; 
break; 
case '*':  
result = num1 * num2; 
std::cout << result; 
break; 
case '/': 
result = num1 / num2; 
std::cout << result;
 break; 

 default: std::cout << op << "is not a simbol."; 

 

}


return 0;

}