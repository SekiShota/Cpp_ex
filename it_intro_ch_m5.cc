#include <iostream>
#include <string>
#include <vector>

using namespace std;

//コンテナクラス
//vector:サイズの変更ができる配列

int main(){
  vector<int> vec={1,2,3,4,5};

  //リサイズ
  vec.resize(4);
  vec.resize(6,-1);

  //追加
  vec.insert(vec.begin(),99);

  //削除
  vec.erase(vec.end()-1);

  //itrはイテレータ、配列ぼどの要素を参照しているかを示す、反復子
  for(int itr : vec){
    cout << itr << endl;
  }

};
