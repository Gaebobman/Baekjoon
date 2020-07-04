#include <iostream>

using namespace std;

int main(){

        int N;
        int X;


        cin >> N >> X;


        for (int i = 0; i <=N-1; i++)
        {
                int a;
                cin >> a ;

            if(a < X)
            {
              cout<< a << " ";
            }
        }
        return 0 ;
}
