#include <iostream> 
#include <cmath> 

void addition(){ 

int num1; 
int num2; 
int result;  

std::cout << "enter num1: \n"; 
std::cin >> num1; 

std::cout << "enter num2: \n"; 
std::cin >> num2;                                                                        

result = num1 + num2; 

std::cout << result;


} 
void subtraction(){ 
int num1; 
int num2; 
int result;  

std::cout << "enter num1: \n"; 
std::cin >> num1;
std::cout << "enter num2: \n"; 
std::cin >> num2;




result = num1 - num2; 
std::cout << result;                                                                     





} 

void multiply(){ 
int num1; 
int num2; 
int result; 

std::cout << "enter num1: \n"; 
std::cin >> num1;                                                                        
std::cout << "enter num2: \n"; 
std::cin >> num2;                                                                        

result = num1 * num2; 


std::cout << result;                                                                     


} 

void division(){ 
int num1; 
int num2; 
int result; 

std::cout << "enter num1: \n"; 
std::cin >> num1;                                                                        
std::cout << "enter num2: \n"; 
std::cin >> num2; #include <iostream> 
#include <ctime> 

int main(){ 

srand(time(0)); 

int eventgen = (rand() % 6) + 1;

switch(eventgen){  

    case 1:  
    std::cout << "it is raining today";
    break;
case 2: std::cout << "it is hot today";
break; 

case 3:  
std::cout << "there is ACTUAL snow outside";
break;  
case 4: std::cout << "damn its pretty cold";
break; 

case 5: std::cout << "it is ramadan";
break; 

case 6: std::cout << "it is eid";
break;

}

return 0;
}

result = num1 / num2; 

std::cout << result;                                                                     



} 
int main(){ 


char op;                                                                                 

std::cout << "Calculator APP only addition subtraction multiplcation and devision \n";
std::cout << "Use A for add, S for subtraction, M for multiply, D for devision \n"; 
std::cin >> op;                                                                          

switch(op){ 
case 'A': 
addition();                                                                              
break; 
case 'S': subtraction();                                                                 
break; 
case 'M': multiply(); 
break; 
case 'D': division(); 
break; 
default : std::cout << "that is not one of the symbols i mentioned"; 
}
                                                                                        
}