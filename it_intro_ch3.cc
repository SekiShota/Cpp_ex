#include<iostream>
#include<string>

using namespace std;

//構造体,
//メンバとして変数しかいれられない
struct Strc{
  int MP=0;
  int HP=0;
  int atack=0;
};

//クラス、構造体に関数を加えた
class Animal{
//メンバ変数は外部からのアクセスを拒否して変更させない(private)
private:
  int HP=0;
  int MP=0;

//ゲッターメソッドとセッターメソッドでアクセス(public)
public:
  //短いメソッドは宣言と定義はクラスの中に記述
  int get_HP(){ return HP; };
  void set_HP(int hp){ HP=hp; };

  int get_MP(){ return MP; };
  void set_MP(int mp){ MP=mp; };

  //メソッドの宣言、無いとエラーになる
  void say_hello(string message);
  int sqrt(int x);
};

//Animalクラスのメソッド、簡略化するためにクラスの外に記述
void Animal::say_hello(string message){
  cout<< "Hello," << message <<endl;
}

int Animal::sqrt(int x){　
  return x*x;
}



int main(){
  //構造体
  Strc person1;
  person1.MP=100;
  person1.HP=50;
  person1.atack=10;

  cout<< "構造体" <<endl;
  cout<< person1.MP <<endl;
  cout<< person1.HP <<endl;
  cout<< person1.atack <<endl;


  //クラス
  Animal animal1;

  animal1.set_HP(100);
  animal1.set_MP(10);

  cout<< "クラス" <<endl;
  cout<< animal1.get_HP() << endl;
  cout<< animal1.get_MP() << endl;

  //メソッドの呼び出し
  animal1.say_hello("Kotaro");
  cout<< "sqrtメソッド：" << animal1.sqrt(7) << endl;

  return 0;
}
