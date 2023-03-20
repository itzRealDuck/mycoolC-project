#include <iostream> 

int main(){ 

  std::string question[] = { 

"1.Who is the inventor of java?", 
"2.Who is the inventor of C? ",
"3. who is the inventor of C++",
"4. Does the guy who Asked Exist?"
  };

  std::string options[][5]{
     
    {"1. A. bjarence stoustrup, B.james gosling, C. bill gates,D. linus torvalds"}, 
    {"2. A. Bjarnce, B. james gosling. C. Dennis Ritchie.  D. microsoft"},
    {"3. A. Bjarnce Stroustrup. B. james gosling. C. microsoft. D. Dennis ritche"}, 
    {"4. A. Yes. B. No. C. maybe. D.sometimes"}
  };

int size = sizeof(question)/sizeof(std::string);
char answerkey[] = {'B','C','A','B'}; 
char guesses; 
int tries; 

for(int i = 0; i < size; i++){ 

  std::cout << "QUIZ GAME \n"; 
  std::cout << "********* \n"; 
  std::cout << question[i];

  for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){ 

    std::cout << "************** \n"; 
    std::cout << options[i][j]; 

    
  }

  std::cin >> guesses; 
  guesses = toupper(guesses); 

  if(guesses == answerkey[i]){ 

    std::cout << "Correct "; 
    tries++;  


  }

  else { 

    std::cout << "incorrect";
  }


 }

  std::cout << "********************** \n";
  std::cout << "RESULTS \n";
  std::cout << "**************** \n";

  std::cout << "the correct guesses are" << tries;
  std::cout << "number of questions" << size;
}
