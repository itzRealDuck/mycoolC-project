#include <iostream> 
#include <ctime>
int main(){ 

srand(time(NULL));

int num = (rand() % 500) + 1;  

if(num == 69){ 
    std::cout << num << "omg its 69" << '\n' ;


} 
else if(num == 420){ 
    std::cout << num << "omg its 420" << '\n';


}

std::cout << num;

return 0;
}