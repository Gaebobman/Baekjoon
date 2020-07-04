#include <iostream>
#include <cstring>

using namespace std;


int main(){
    char arr[101];  // 입력받는 arr
  int  arr2[26];  //알파벳 arr
  //ASCII 코드상에서 a는 97이다.
  for(int z =0; z<26; z++)
  {
    arr2[z] = -1;
  }

  cin>> arr;

  for(int i = 0 ; i < strlen(arr) ; i++)
  {
    int a;
    a = arr[i] -97;

    if(arr2[a] == -1)
      arr2[a] =i;
  }


for(int b = 0; b < 26 ; b++){

  cout << arr2[b]<< " ";
}

return 0;
}
