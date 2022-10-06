#include <iostream>
#include <string>

using namespace std;

//親クラス(基底クラス)
class Person{
private:
  int HP=0;

//thisはクラス内のメンバ変数の値を参照
public:
  int get_HP(){ return HP; };
  void set_HP(int HP){ this->HP=HP; };
};


//継承、子クラス(派生クラス)
class Warrior : public Person{
private:
  int atack=0;

public:
  int get_atack(){ return atack; };
  void set_atack(int atack){ this->atack=atack; };
};


int main(){
  Warrior warrior1;
  warrior1.set_HP(100);
  warrior1.set_atack(10);

  cout<< warrior1.get_HP() <<endl;
  cout<< warrior1.get_atack() <<endl;
}
