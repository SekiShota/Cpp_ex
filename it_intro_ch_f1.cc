//関数
#include <iostream>
#include <string>

using namespace std;

void say_hello();
int sqrt(int a);
double sqrt(double a);

//typenameをclassと書いてもコンパイルできる
template <typename T>
T equation(T a, T b){
  T y=a*b;
  return y;
}

template <typename T>
T mul(T x, T y);

int main(){
  int a=19;
  double b=1.9;

  say_hello();
  say_hello();
  say_hello();

  cout << "sqrt:" << sqrt(a) << endl;
  cout << "sqrt:" << sqrt(b) << endl;

  cout << "equation:" << equation(1.2,9.0) << endl;
  cout << "equation:" << equation(1,8) << endl;

  cout << "mul:" << mul(1,8) << endl;
  cout << "mul:" << mul(7.1,1.1) << endl;

  return 0;
};

void say_hello(){
  cout << "Hello, C++" << endl;
};

int sqrt(int a){
  return a*a;
};

double sqrt(double a){
  return a*a;
};

template <class T>
T mul(T x, T y){
  return x*y;
};
