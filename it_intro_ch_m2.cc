#include <iostream>
#include <memory>
#include <utility>
#include <string>

using namespace std;

//スマートポインタ
//生成したインスタンスに対して自動で確保したメモリを解放してくれる
//コンストラクタでメモリ確保
//デストラクタでメモリ解放>>面倒だからスマートポインタが使われる
class A{
public:
  A(){ cout << "コンストラクタ" << endl; };
  ~A(){ cout << "デストラクタ" << endl; };
};

//領域を割り当てる関数
unique_ptr<A> allocate(){
  cout << "allocate()" << endl;
  //メモリ領域確保、new演算子、ここで初めてコンストラクタ
  unique_ptr<A> ptr{ new A{} };
  //メモリ領域を返す
  return move(ptr);
}

int main(){
  {
    //スマートポインタ、この時点では空ポインタ
    unique_ptr<A> ptr;

    cout << "関数呼び出し" << endl;
    //ここでメモリ確保
    ptr=allocate();
    cout << "確保したメモリ領域：" << ptr << endl;
    cout << "関数呼び出し後" << endl;
  }
  
  //デストラクタ
  cout << "スコープ外" << endl;

  return 0;
};
