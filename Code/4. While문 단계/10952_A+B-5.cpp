#include <iostream>

using namespace std;

int main(){

        int a,b;
        cin >> a >> b;
        if(a==0 && b==0)
                {}
        else{
                cout << a+b<<"\n";
        }
        while(a!=0 && b!=0)
        {
                cin >> a >> b;
                if(a+b !=0)
                cout << a + b<<"\n";
        }

        return 0;
}
