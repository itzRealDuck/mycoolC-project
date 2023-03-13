#include <iostream> 

int main(){ 

int num; 
int guess; 
int tries; 

srand(time(NULL)); 

num = (rand() % 100) + 1; 

std::cout << "guess the random number game \n";

do { 
std::cout << "enter your guess: \n";
std::cin >> guess; 
tries++;

if(guess > num){ 
    std::cout << "you failed try next time the guess was bigger than the number \n"; 



}
else if(guess < num){ 

std::cout << "you failed try next time the guess is smaller than the number \n";

}

else { 

std::cout << "correct the number of tries " << tries;

}

}while(guess !=num);

}