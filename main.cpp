/**
 * @file main.cpp
 * @author CJs-Desktop
 * @date 2022-08-27
 * @brief Hello world
 * 
 * something generic used to get used to working with git
 */


#include <iostream>

using namespace std;

int Sum(int n);
int Product(int n);

int main() {
  cout << "Hello World!\n";
  cout << "Enter a number." << endl;
  int num;
  cin >> num;
  cout << "Sum: " << Sum(num) << endl;
  cout << "Product: " << Product(num) << endl;
  return 0;
}

int Sum(int n) {
  int total = 0;
  for(int i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}

int Product(int n) {
  int total = 1;
  for(int i = 1; i <= n; i++) {
    total *= i;
  }
  return total;
}
