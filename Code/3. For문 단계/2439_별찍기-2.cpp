#include <iostream>

using namespace std;

int main(){
        int loop;
        int spc;

        cin >> loop;
        spc = loop;
        int temp = loop;

        for(int i = 1; i <=loop; i++)

        {
                for(int j =1 ; j <= loop -i; j++)
                {
                  cout <<" ";
                }

                for(int a = 1; a <= i; a++)
                {

                 cout <<"*";
               }
                cout<<"\n";
        }

        return 0;

}
