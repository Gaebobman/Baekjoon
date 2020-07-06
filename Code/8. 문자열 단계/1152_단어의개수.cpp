#include <iostream>
#include <string>


using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);


  string str;
  int c =0;
  bool gogi = true;

  getline(cin,str);
  for (int i = 0 ; i < str.length(); i++)
  {
     if (str[i] == ' ')
      gogi = true;
     else if(gogi) // when space detected
        {
          gogi = false;   // gogi false;
          c++ ;           // counter up;
        }
  }

  cout << c ;
return 0 ;

}
