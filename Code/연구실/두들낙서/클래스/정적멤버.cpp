#include <iostream>

using namespace std;

class color {
public:
  color() : r(0), g(0), b(0) {}
  color(float r, float g, float b) : r(r), g(g), b(b) {}

  float GetR() { return r; }
  float GetG() { return g; }
  float GetB() { return b; }

  static color mixcolors(color a, color b){
    //return color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2,(a.GetB() + b.GetB())/2);
    return c  olor((a.r + b.r) / 2, (a.g+ b.g) / 2,(a.b + b.b) / 2 );
  }
private:
  float r;
  float g;
  float b;
};
/*
color mixcolors(color a, color b){

  return color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2,(a.GetB() + b.GetB())/2);
}
*/
int main() {
  color blue(0,0,1);
  color red(1,0,0);

  color purple = color::mixcolors(blue, red);

  cout <<"r = " <<purple.GetR()<<" g = " <<purple.GetG()<< " b = " <<purple.GetB  ()<<endl;

}
