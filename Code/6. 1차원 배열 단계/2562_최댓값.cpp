#include <iostream>

using namespace std;


int main(){

        int arr[9];
        int max= 0; //최댓값
        int maxnum; //최댓값의 번호
        for (int i =0; i<9; i++)
        {
                int z;
                cin>>z;
                arr[i]=z;

                if(arr[i]>max)
               {
                max = arr[i];
                maxnum =i+1;
              }
        }     // 9가지 수를 받아



      cout<< max <<"\n"<<maxnum;

return 0;

}
