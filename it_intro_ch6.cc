//オーバーライド：派生クラスで基底クラスの関数上書き
//仮想関数；

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
  virtual void say_hello(){ cout<< "Hello, Person." <<endl; }
};

class Warrior : public Person{
public:
  void say_hello(){ cout<< "Hello, Warrior." <<endl; }
};


int main(){
  Person *personPtr1;
  Warrior *warriorPtr1;

  Person person1;
  Warrior warrior1;

  person1.say_hello();
  warrior1.say_hello(); //Hello, Warrior.

  personPtr1=&person1;
  personPtr1->say_hello(); //Hello, Person.

  personPtr1=&warrior1;
  personPtr1->say_hello(); // Hello, Warrior.

  //warriorPtr1=&person1;
  //warriorPtr1->say_hello(); //Hello, Warrior.

  warriorPtr1=&warrior1;
  warriorPtr1->say_hello(); //Hello, Warrior.

  personPtr1->Person::say_hello();

  return 0;
};
