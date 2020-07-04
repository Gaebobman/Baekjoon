#include <iostream>
#include<string.h>

using namespace std;

int main(){

        int res=0;
        int temp=0;
        int loop;
        cin >> loop;

        for(int z =0; z<loop; z++) {  //입력한 횟수만큼 받기

                char arr[81];
                cin>>arr;
                res = 0;
                temp=0;

                for(int i=0; i<strlen(arr); i++) {

                        if(arr[i]=='O')
                          temp++;
                        else
                          temp=0;

                        res +=temp;

                }
                cout << res <<endl;

        }


        return 0;
}
