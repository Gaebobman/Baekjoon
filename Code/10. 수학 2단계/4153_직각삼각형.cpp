#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int maxindex = 0;
  int arr[3]={1, };

  while (1)
  {
    int sum =0;
    for(int i = 0 ; i < 3 ; i ++)
    {
      cin >> arr[i];
      if(arr[i] >= arr[maxindex])
      maxindex= i;
    }
    if(arr[0]==0 &&arr[1]==0 &&arr[2]==0)
    break;
      for(int i = 0 ; i < 3 ; i ++)
      {
        if(i != maxindex)
        {
          sum+= arr[i] * arr[i];
        }

      }

    if(arr[maxindex] * arr[maxindex] == sum){
      cout<< "right"<<endl;

    }else
    cout<<"wrong"<<endl;


  }


}
