#include <iostream> 

void sort(int array[], int size);

int main(){  

int array[] = {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(array)/sizeof(int);

sort(array, size);

for(int element : array){  
  std::cout << element;
} 


 } 

void sort(int array[], int size){ 

int temp;

for(int i = 0; i < size - 1; i++){ 

for(int j = 0; j < size - i - 1; j++){ 

if(array[j] > array[j + 1]){ 
 
  temp = array[j]; 
  array[j] = array[j + 1]; 
  array[j + 1] = temp;

}

}


}

}
