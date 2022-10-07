#include <iostream>
#include <string>

using namespace std;

//ラムダ式
//試しにすること、書きすぎるとmainが複雑になるから
//問題なければ、mainの外に関数を書いて実装
int main(){

  //autoは型の推測
  //型　関数の名前=[]->戻り値の型　(引数型、引数) {処理};
  //auto　関数の名前=[]　(引数型、引数) {処理};

  //戻り値の型指定はなくてもいい
  auto func1 = []() { cout << "Hello, C++" << endl; };
  auto func2 = [](int x) { cout << x << endl; };
  auto func3 = [](int x)->int { return x*x; };

  //引数の型をautoにするとテンプレートのように扱うことができる
  auto func4 = [](auto x) { return x*x; };

  func1();
  func2(10);
  cout << func3(10) << endl;
  cout << func4(10.1) << endl;
  cout << func4(7) << endl;

  cout << "=======================" << endl;

  auto a=10;
  auto b=10;

  //[]はキャプチャという
  // =はコピーキャプチャ
  // &はリファレンスキャプチャ

  //関数外の変数を使用、引数を指定しなくても関数内で変数を使うことができる、変更はできない
  auto func5=[=]() { cout << "func5の関数内" << "a:" << a << "/" << "b:" << b << endl; };
  func5();
  cout << "func5の関数外(mutable使用なし)" << "a:" << a << "/" << "b:" << b << endl;

  //関数外の変数を使用、引数を指定しなくても関数内で変数を使うことができる
  //mutableは変更可能、ただし関数内のみ
  auto func5_2=[=]() mutable { a+=10; cout << "func5_2の関数内" << "a:" << a << "/" << "b:" << b << endl; };
  func5_2();
  cout << "func5_2の関数外(mutable使用)" << "a:" << a << "/" << "b:" << b << endl;

  //関数外の変数を編集
  auto func6=[&]() { a+=5; b+=2; };
  func6();
  cout << "func6の関数外(関数を介して変数を変更)" << "a:" << a << "/" << "b:" << b << endl;

  return 0;
};
