#include <iostream>
#include <string>

void evenOrOdd(int num){
  if (num % 2 == 0){
    std::cout << "Even" << std::endl; 
  }
  else {
    std::cout << "Odd" << std::endl;
  }
}

int sumArray(int param[], int size){
  int sum; 
  for (int i=0; i < size; i++){
    sum += param[i]; 
  }
  return sum;
}

int main(){
  int arr[] = {1, 2, 3, 4};
  int sum = sumArray(arr,4);
  std::cout << sum << std::endl;
  return 0;
}
