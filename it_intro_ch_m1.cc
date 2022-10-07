#include<iostream>
#include<string>

using namespace std;

//explicit: 変数なのかインスタンスなのかをわかりやすくする
//初期化はできるが代入はできない
//getメソットは変数の値を返すのみなので、変更機能はいらないからconstを書く
class A{
private:
  int value;

public:
  //explicit A(int);
  void set_value(int value);
  int get_value() const;
};

//コンストラクタ、引数をそのままvalueに格納
// A::A(int x):value(x){ cout<< "コンストラクタ" <<endl; }

//セッターメソッド
//どの変数に値を代入するかわかりやすい
//valueは引数、this->valueはクラスのメンバ変数
void A::set_value(int value){
    this->value=value;
};

//ゲッターメソッド
int A::get_value() const{
  return value;
}


int main(){
  // A a(11);
  // A b(22);


  // int array[]={1,2,3,4,5};
  //
  // for(int i=0; i<5; i++){
  //   cout<< array[i] <<endl;
  // }


  // cout<< a.get_value() <<endl;
  // cout<< b.get_value() <<endl;

  A c;

  c.set_value(1000);
  cout << "インスタンス：c " << c.get_value() << endl;

  return 0;
};
