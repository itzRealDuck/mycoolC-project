#include <iostream>  
#include <ctime>  

char PlayerChoice(); 
char CompChoice(); 
void ShowChoice(char choice); 
void DisplayWinner(char player,char comp);


int main(){ 
char player; 
char comp; 

player = PlayerChoice();

std::cout << "The players Choice Is ";
ShowChoice(player); 

comp = CompChoice();  
std::cout << "The Comp Choice is: \n"; 
ShowChoice(comp);


DisplayWinner(player,comp);

} 


char PlayerChoice(){  

    char player;

do{ 
std::cout << "Rock Paper Scissors \n";
 std::cout << "****************** \n"; 
 std::cout << "Enter r for Rock \n"; 
 std::cout << "Enter s for Scissors \n"; 
 std::cout << "Enter p for Paper \n" ;
std::cin >> player; 



}while(player != 'r' && player != 's' && player != 'p');
 

 return player;
} 
char CompChoice(){ 
srand(time(0)); 
int num = rand() % 3 + 1; 

switch(num){ 

case 1 : return 'r'; 
break; 
case 2: return 's'; 
break; 
case 3: return 'p'; 
break;

}


return 0; 
}   

void ShowChoice(char choice){ 

switch(choice){ 

    case 'r' : std::cout << "Rock \n"; 
    break; 
    case 's' : std::cout << "Scissors \n";  
    break;
    case 'p' : std::cout << "Paper \n";



}

} 
void DisplayWinner(char player,char comp){   


switch(player){ 

    case 'r': if(comp == 'r'){ 

std::cout << "it's a tie!";



    }  
    else if(comp == 'p'){ 
        std::cout << "the comp wins"; 



    }
else if(comp == 's'){ 

    std::cout << "the player wins";  



}
 
 break; 
 case 'p': if(comp == 'p'){  
    std::cout << "it is a tie"; 



 }
else if(comp == 'r'){ 
    std::cout << "player wins";  



}
else if(comp == 's'){  

std::cout << "comp wins"; 

} 
break; 
case 's': if(comp == 's'){ 
    std::cout << "it is a tie";  



}
else if(comp == 'r'){ 

std::cout << "comp wins!"; 

}
else if(comp == 'p'){ 

std::cout << "player wins"; 

}

}



}
