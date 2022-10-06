#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void sqrt(int* x, int* y);

int main(){
  int x=100;

  cout<<"変数xが存在するアドレス: "<< &x <<endl;

  int* xPtr;
  xPtr=&x;
  cout<<"アドレスに格納されている値(間接参照演算子あり)："<< *xPtr <<endl;
  cout<<"アドレス："<< xPtr <<endl;

  int y=20;
  int *yPtr=&y;

  //アドレスを引数として渡すことで、変数の書き換えが不要になる
  cout<< "ポインタで示されたアドレスに格納されている値；" << *yPtr <<endl;
  cout<< "ポインタで示されたアドレス；" << yPtr <<endl;
  sqrt(xPtr, yPtr);
  cout<< *yPtr <<endl;

  return 0;
}

void sqrt(int* x, int* y){
  *y=*x * *x;
}
