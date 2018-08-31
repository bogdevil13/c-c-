#include <iostream>
#include "stdio.h"
#include<stack>
using namespace std;
class testclass{
public:
  static void f1(int a[]){
    swap(a);
  }
  static void f2(int a[]){
    f1(a);
  }
  static void swap(int a[]){
    int x;
    x= a[0];
    a[0] = a[1];
    a[1] = x;

  }
};
int main(){
  int x[2] = {1,2};
  cout<<x[0]<<x[1];
  testclass::swap(x);
  cout<<endl<<x[0]<<x[1];
  testclass::f2(x);
  cout<<endl<<x[0]<<x[1];

  // stack <char> input;
  // input.push('a');
  // char x;
  // x = input.top();
  // cout<< x;
  // int i=5;
  // i=i<<1;
// for (size_t i = 0; i < 5; i++) {
//   /* code */
//   std::cout << "Test" << '\n';
// }
    /* code */


}
