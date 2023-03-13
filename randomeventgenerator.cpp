#include <iostream> 
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