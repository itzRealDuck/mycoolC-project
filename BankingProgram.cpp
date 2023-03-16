#include <iostream>  

double deposit(double balance); 
double withdraw(double balance); 
void Balance(double balance);


int main(){    
double balance = 1000; 
char choice; 
std::cout << "Enter Your Choice : \n"; 
std::cout << "************************************ \n"; 
std::cout << "S: to Show Your Balance \n"; 
std::cout << "W: To Withdraw Money From Your Balance \n"; 
std::cout << "D: To Deposit Money From Your Balance \n"; 
std::cout << "E or anything else : To Exit From The Bank \n"; 
std::cout << "********************************************** \n";

std::cin >> choice;
switch(choice){ 

case 'S': Balance(balance); 
break; 
case 'D' : deposit(balance); 
break; 
case 'W': withdraw(balance); 
break; 
case 'E': break; 
break; 
default : break; 

} 



}

void Balance(double balance){ 

std::cout << "your balance " << balance; 

} 

double withdraw(double balance){  

int withdrawelamount; 

std::cout << "enter withdrawel amount : \n ";
 std::cin >> withdrawelamount;

balance = balance - withdrawelamount; 
std::cout << balance; 

return 0;
} 

double deposit(double balance){ 

int depamount; 

std::cout << "enter the deposit amount \n"; 
std::cin >> depamount; 

balance = balance + depamount; 

std::cout << balance; 

return 0;


}
