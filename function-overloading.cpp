#include<iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}


int main(){
//Function overloading allows multiple functions to have the same name,
//as long as their parameters are different in type or number


//Instead of defining two functions that should do the same thing, it is better to overload one.

//In the example below, we overload the plusFunc function to work for both int and double:


  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;



return 0;
}
