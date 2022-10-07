#include <iostream>
#include <string>

using namespace std;

//関数テンプレート,参照
//自由に型を渡せる
template <typename T>
T add(T a, T b, T c){
  T sum=a+b+c;
  return sum;
};

//左辺値参照,変数
template <typename T>
void show(T& value){
  cout << "right(T&):" << value << endl;
};

//右辺値参照,数値
template <typename T>
void show(T&& value){
  cout << "left(T&&):" << value << endl;
};

int main(){
  cout << "int渡し：" << add(1,2,3) << endl;
  cout << "double渡し：" << add(1.1,2.1,3.1) << endl;
  cout << "==========================" << endl;

  int i=100, j=500;
  //iが非常に大きい配列のとき、アドレスを渡すことでメモリの消費を少なくできる
  show(i);
  show(j);
  show(200);
  show(5000);

  return 0;
};
