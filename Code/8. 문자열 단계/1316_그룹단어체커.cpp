#include<iostream>

using namespace std;

bool checker(string a);

int main(){
  int N;
  int counter = 0 ;
  cin >> N;
  string str;
  for (int i = 0 ; i < N ; i++)
  {
    getline(cin, str);   //문자열 받자

  if (checker(str))
  {
    counter++;
  }

  }
cout << counter;

}

bool checker(string a){

    bool alp[26] = {false};

    for(int i = 0 ; i < a.length() ; i++ )
      if(alp[a[i]-'a'] == true){  // 있던 값이 또 왔네?
        return false;
        break;
      }
      else{
        char tmp = a[i];
        alp[a[i]-'a']=true;     //현재 검사중인 인덱스의 값을 tmp에 저장
        while(1){
          if(tmp != a[++i]){   //현재값이 다음값과 다르다면?
          i--;                //검사한 인덱스부터 시작해야지
          break;
          }        //탈출
        }

      }
      return true;

}
