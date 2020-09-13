#include <iostream>

using namespace std;

// int idCounter =1; 전역으로 선언되었지만
// Class 안에 넣고싶으면 static

class color {
public:
  color() : r(0), g(0), b(0), id(idCounter++) {
  //  id = idCounter++;

    // id에 저장 후 하나 올라간다.
    //idCounter++;
  }
  color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}

  float GetR() { return r; }
  float GetG() { return g; }
  float GetB() { return b; }

int GetId() {return id;}

  static color mixcolors(color a, color b){
    return color((a.r + b.r) / 2, (a.g+ b.g) / 2,(a.b + b.b) / 2 );
  }

  static int idCounter; //정적으로 class 안에 선언되면 초기화 불가.

private:
  float r;
  float g;
  float b;

  int id;
};

int color::idCounter=1; // class밖에서 초기값 설정
int main() {
  color blue(0,0,1);
  color red(1,0,0);

  color purple = color::mixcolors(blue, red);

  cout <<"r = " <<purple.GetR()<<" g = " <<purple.GetG()<< " b = " <<purple.GetB  ()<<endl;

  cout<< "blue.GetId() = "<<blue.GetId()<<endl;
  cout<< "red.GetId() = "<<red.GetId()<<endl;
  cout<< "purple.GetId() = "<<purple.GetId()<<endl;

}
