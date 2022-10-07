#include <iostream>
#include <string>

using namespace std;

//再帰関数
//関数内で関数を呼び出すことができる
int func1(int x1);
int func2(int x2);
int sum(int x);

int main(){
  int a=10;
  cout << "func1の戻り値：" << func1(a) << endl;

  // int b=20;
  cout << "func2の戻り値：" << func2(a) << endl;

  cout << "sumの戻り値：" << sum(0) << endl;
  cout << "sumの戻り値：" << sum(10) << endl;
  cout << "sumの戻り値：" << sum(100) << endl;


  return 0;
};



int func1(int x1){
  return x1*x1;
};

int func2(int x2){
  return func1(x2)+func1(x2);
};

int sum(int x){
  int res=0;
  if(x==0){
    return 0;
  }

  else{
    res+=sum(x-1);
    return res+x;
  }

}
