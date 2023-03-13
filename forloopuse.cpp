#include <iostream> 

int main(){  

int numberforcountdownorcountingup; 

std::cout << "enter 0 for countups and 1 for countdowns" << "\n"; 
std::cin >> numberforcountdownorcountingup; 


switch(numberforcountdownorcountingup){ 

    case 0: for(int i = 10; i >= 1; i--){ 
        std::cout << i << "\n"; 


    }  
    break;
case 1: for(int i = 1; i <= 10; i++){ 
    std::cout << i << "\n";
 
} 
break;

}

}