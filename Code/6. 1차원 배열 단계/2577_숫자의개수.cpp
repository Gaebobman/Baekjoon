#include <iostream>


using namespace std;

int main(){
        int a,b,c;
        int arr[10]={0};
        int time;

        cin >> a>>b>>c;

        time = a*b*c;



        while (time>0)
        {
                arr[time%10]++;
                time = time/10;
        }
        for(int i =0 ; i<=9 ; i++)
        {cout<< arr[i]<<endl;}


        return 0;
}
