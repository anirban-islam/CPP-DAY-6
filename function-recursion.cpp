#include<iostream>
using namespace std;

//create a function to adding two numbers
int sum(int a){
//logic
if(a>0){
        //sum function call here it's called recursion
    return a+sum(a-1);//range (9,8,7,6,5,4,3,2,1) for 10
}
else return 0;
}

int main(){

//Recursion is the technique of making a function call itself. function inside function
//Adding two numbers together is easy to do, but adding a range of numbers is more complicated.

  int result = sum(10);
  cout << result;

return 0;
}
