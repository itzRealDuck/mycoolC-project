#include <iostream> 

int getDigit(const int number);
int sumEvenNumber(const std::string cardnumber);
int sumOddNumber(const std::string cardnumber);
int main(){  

  std::string cardnumber; 
   int result = 0; 
   std::cout << "enter cardnumber";

  std::cin >> cardnumber; 
  
  result = sumEvenNumber(cardnumber) + sumOddNumber(cardnumber);


if(result % 10 == 0 ){ 

  std::cout << "number is valid";

}
else { 

  std::cout << "number is not valid";
}

} 

int getDigit(const int number){ 

return number % 10 + (number / 10 % 10); 

} 

int sumEvenNumber(const std::string cardnumber){ 

int sum = 0; 

for(int i = cardnumber.size() - 2; i >= 0; i-=2 ){ 

sum += getDigit((cardnumber[i] - '0') * 2 );

}

return sum;
} 

int sumOddNumber(const std::string cardnumber){ 


int sum = 0; 

for(int i = cardnumber.size() - 2; i >= 0; i-=2 ){ 

sum += getDigit(cardnumber[i] - '0'  );

}

return sum;
}

