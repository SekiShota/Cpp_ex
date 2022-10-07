#include<iostream>
#include<string>

using namespace std;

//抽象クラス,ルールだけ決める、継承してから詳細を決める
//純粋仮想関数を含むクラス
//派生クラスで実装すべきメソッドを定義
class Person{
public:
  //純粋仮想関数
  virtual void say_hello()=0;
};

//派生クラス
class Warrior : public Person{
public:
  void say_hello(){ cout<< "Hello,warrior." <<endl; }
};

//派生クラス
class King : public Person{
public:
  void say_hello(){ cout<< "Hello,king." <<endl; }
};


int main(){
  //Personクラスは抽象クラスなのでコンパイルするとエラーになる、インスタンス化できない
  //Person person1;

  Warrior warrior1;
  King king1;

  warrior1.say_hello();
  king1.say_hello();

  return 0;
}
