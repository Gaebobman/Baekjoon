#include <iostream>

using namespace std;

int main(){
        int arr[10];
        int rst[42] ={0};
        int dif = 0; //다른 것 카운터

        for(int i = 0; i <10; i++)
        {
                cin >> arr[i];
                rst[ arr[i] % 42 ]++;
        }

        for(int a =0; a<42; a++)
        {
                if (rst[a]!=0)
                {
                        dif+=1;
                }
        }

        cout << dif;

        return 0;
}
