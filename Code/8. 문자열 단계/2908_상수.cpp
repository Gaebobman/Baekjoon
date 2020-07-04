#include <iostream>
#include <string>


using namespace std;



int main(){

        string a,b;

        int e= 0 ,r = 0;

        getline(cin, a,' ');
        getline(cin, b);

        for (int i = 2 ; i >= 0 ; i--)
        {
          int temp =(a[i]-'0'); // int 로 변환
          for(int l = i ; l > 0 ; l--){
             temp *= 10;
          }
          e +=temp;

        }

        for (int i = 2 ; i >= 0 ; i--)
        {
          int temp =(b[i]-'0'); // int 로 변환
          for(int l = i ; l > 0 ; l--){
             temp *= 10;
          }
          r +=temp;

        }

        if( e > r)
          cout << e;
        else
        cout << r;

        return 0;
}
