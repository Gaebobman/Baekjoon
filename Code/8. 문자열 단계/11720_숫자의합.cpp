#include <iostream>




using namespace std;

int main(){
        int N;
        char arr[101];
        int sum =0;
        cin>> N;
        cin>>arr;


        for(int a =0; a <N; a++) {
                sum += arr[a] - '0';
        }
        cout << sum;


        return 0;

}
