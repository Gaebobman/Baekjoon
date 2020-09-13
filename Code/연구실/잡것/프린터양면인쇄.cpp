#include <iostream>

using namespace std;


class inha{
public:
  inha(int alpha): alpha(alpha) {

    cout << "constructor inha this: " << this <<endl;
  }
  void print(int a){
      cout << a <<endl;
  }
  static int stint;

  int GetA(){
    return alpha;
  }
private:
  int alpha;

  int id;
};

int inha::stint =0;

int main(){
inha lee(54);
inha shin(55);
cout << lee.GetA() <<endl;
cout << lee.stint<<endl;
cout << shin.GetA() <<endl;
cout << shin.stint<<endl;

}
