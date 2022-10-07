#include <iostream>
#include <string>

using namespace std;

//クラステンプレート
//型問わず処理可能なテンプレートを使ったクラス
//型に応じた戻り値を返す
template <typename T>
class xy{
public:
    T x;
    T y;
};

//引数にint型
void show(int x, int y){
  cout << "int_x:" << x << endl;
  cout << "int_y:" << y << endl;
}

//引数にdouble型
void show(double x, double y){
  cout << "double_x:" << x << endl;
  cout << "double_y:" << y << endl;
}

//引数にstring型
void show(string x, string y){
  cout << "string_x:" << x << endl;
  cout << "string_y:" << y << endl;
}


int main(){
  xy <int> int_xy{1,2};
  xy <double> double_xy{1.23, 4.56};
  xy <string> string_xy{"Hello,", "C++"};


  // int_xy.x=1;
  // int_xy.y=4;
  //
  // double_xy.x=1.23;
  // double_xy.y=-3.21;

  show(int_xy.x, int_xy.y);
  show(double_xy.x, double_xy.y);
  show(string_xy.x, string_xy.y);


  return 0;
};
