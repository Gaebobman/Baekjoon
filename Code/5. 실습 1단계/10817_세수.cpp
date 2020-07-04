#include <iostream>

using namespace std;

int main(){

        int arr[3];
        int tmp;
        for (int i =0; i <=2; i++)  // 수를 입력 받는다
        {
                cin>> arr[i];
        }
        
        for(int j =1; j <=3; j++) {
                for (int i =0; i <=1; i++)
                {
                        if (arr[i] > arr[i+1])
                        {
                                tmp = arr[i];
                                arr[i] =arr[i+1];
                                arr[i+1]=tmp;
                        }

                }
        }
        cout<< arr[1];

        return 0;
}
