#include <iostream>
#include <string>

using namespace std;

//コンストラクタはインスタンス生成した時に実行される関数
//デストラクタはインスタンス消去した時に実行される関数
class Person{
private:
  int HP=0;

public:
  int get_HP(){ return HP; };
  void set_HP(int HP){ this->HP=HP; };

  Person(int HP=0){
    cout<< "基底クラスのコンストラクタ" <<endl;
    this->HP=HP;
  }
  ~Person(){
    cout<< "基底クラスのデストラクタ" <<endl;
  }
};

class Warrior : public Person{
public:
  Warrior(){
    cout<< "派生クラスのコンストラクタ" <<endl;
  }
  ~Warrior(){
    cout<< "派生クラスのデストラクタ" <<endl;
  }
};



int main(){
  //Person person2(100);
  Warrior warrior2;
  warrior2.set_HP(600);

  //cout<< "基底クラス：" << person2.get_HP() <<endl;
  cout<< "派生クラス：" << warrior2.get_HP() <<endl;

  return 0;
}
