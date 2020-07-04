#include <iostream>

using namespace std;

int Hansoo(int a);

int main (){
        bool arr[1001];
        int N;
        int counter = 0;
        cin >> N;

        for (int i = 1; i <= N; i++)
        {
                arr[i] = Hansoo(i);
        }



        for (int a = 0; a <= N; a++) {
                if (arr [a] == 1) {
                        counter++;
                }
        }

        cout << counter;




  /*     while(!cin.eof()){
         int n;
         cin >>n;

          cout << Hansoo(n)<<endl;
              }
*/

      }


int Hansoo(int a){

        if (a ==0)
        return 0;
        else if (a <100)
                return 1;
        else if(a/100 - (a/10)%10 == (a/10)%10 - a%10)
                return 1;
        else
                return 0;

}
