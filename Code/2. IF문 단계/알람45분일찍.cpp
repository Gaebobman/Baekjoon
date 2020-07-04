#include<iostream>

using namespace std;

int main(){

  int H=0;
  int M=0;

  cin >> H >> M;
  if(H !=0){
    if (M-45 < 0)
      {
        M +=15;
        H-=1;
      }
      else
      {
        M = M-45;
      }
  }
  else {

      if (M-45 < 0)
      {
        H = 23;
        M +=15;
      }

      else
      {
        M-=45;
      }
  }
  cout << H << " "<< M;



  return 0;

}
//The problem is caused by non-existence of unscrustify.exe. The solution is to download uncrustify.exe from http://sourceforge.net/projects/uncrustify/, and then copy it to c:\windows\ and c:\windows\system32.
