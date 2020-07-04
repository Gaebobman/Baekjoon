#include <iostream>

using namespace std;


int main(){
        int n;

        int a,b,c,d;

        int cyloop =0;

        int result;
        cin >> n;
        result =n;

        while(1)
        {
                a =  n /10;//2
                b = n % 10; //6
                c = a + b; //8
                d = b*10 +c  % 10; //6*10 +8

                n = d;

                cyloop++;

                if(d == result) break;


        }

        cout <<cyloop;

return 0;
}
