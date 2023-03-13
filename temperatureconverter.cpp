#include <iostream> 

int main(){ 


double temp; 

char tempchar; 

std::cout << "yo i will make a temp converter for you just enter the unit and enter the number and then i will convert it to the oppisite of that unit";
 
std::cin >> tempchar; 

if(tempchar == 'F' || tempchar == 'f'){  
    std::cout << "enter temp in celsius"; 

    std::cin >> temp; 

    temp = (1.8 * temp) + 32.0; 

    std::cout << "the temp in farinheight is.." << temp;


} 
else if(tempchar == 'C' || tempchar == 'c'){ 

    std::cout << "enter temp in farinheight"; 
    std::cin >> temp; 

    temp = (temp - 32) / 1.8; 

    std::cout << "the temperature from celsius to farinheight is " << temp << "\n"; 
}


}