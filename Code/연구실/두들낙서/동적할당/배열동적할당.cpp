//int arr[1000] 이거는 낭비다.
//유동적인 방법은 없을까? -> 동적할당
#include <iostream>

using namespace std;

int main(){
  int *arr;
  int len;
    cout <<"동적할당 할 배열 길이 입력 : ";
    cin >> len;

    arr = new int[len];

    for(int i = 0;  i < len; i++)
    {
      arr[i] = len -i;
    }
    for(int i = 0 ; i < len ;i++){
      cout << arr[i] <<endl;
    }

    // delete arr; 이렇게 X
    delete[] arr; //반드시 이렇게
}
