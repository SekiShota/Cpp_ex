#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void say_hello();
int sqrt(int a);
//int equation(int a, int b);
//double equation(double a, double b);

//どんな型でも、型の指定なしで関数を定義=テンプレート
template <class T>
T equation(T a=0, T b=0);


int main(){
  int x=10;
  for(int i=0; i<=10; i++){
    cout<<i<<endl;
  }

  const int NUM=5;

  int IDs[NUM];
  IDs[0]=10;
  IDs[1]=20;
  IDs[2]=30;

  int ID2s[]={100, 200, 300, 400, 500};
  for(int i=0; i<NUM; i++){
    if(ID2s[i]%3==0){
      cout<<"3の倍数です"<<endl;
      say_hello();
      continue;
    }
    cout<<"要素番号"<<i<<":"<<ID2s[i]<<" / "<<sqrt(ID2s[i])<<endl;
  }

  int xi=10;
  int yi=20;
  double xd=1.5;
  double yd=9.0;

  cout<<"int : "<<equation(xi,yi)<<endl;
  cout<<"double : "<<equation(xd,yd)<<endl;

  return 0;
}

void say_hello(){
  cout<<"Hello world"<<endl;
}

int sqrt(int a){
  return a*a;
}

/*
int equation(int a, int b){
  return 2*a+b;
}

double equation(double a, double b){
  return 2*a+b;
}
*/

template <class T>
T equation(T a, T b){
  return 7*a+b;
}
