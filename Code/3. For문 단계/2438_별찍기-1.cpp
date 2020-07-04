#include <iostream>

using namespace std;

int main(){
        int loop;
        cin >> loop;


        for(int i = 1; i <=loop; i++)
        {
                for(int a = 1; a <= i; a++) {
                        cout <<"*";
                }
                cout<<"\n";
        }

return 0;

}
