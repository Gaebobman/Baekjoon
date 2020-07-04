#include <iostream>

using namespace std;

int main(){

        int N;

        cin >> N;

        for (int i = 0; i< N; i++)
        {
                for(int j = 0; j <= i; j++)
                        cout <<"*";
                cout<<"\n";
        }

        for (int a = N - 1; a>0; a--)
        {
                for(int b = a; b>0; b--)
                {
                        cout <<"*";
                }
                cout <<"\n";
        }
}
