#include <iostream>
#include <cstring>

using namespace std;

int numofmax(int S[]);

int main(){

        char arr[1000001];

        int alp[27]={0};  //소문자 카운터
        int Alp[27]={0}; //대문자 카운터

        int max = 0; //소문자에서 가장 큰 횟수
        int Max = 0; // 대문자에서 가장 큰 횟수
        int maxindex =0;  //소문자 인덱스 표시
        int Maxindex = 0; //대문자 인덱스 표시
        cin >>arr;

        for(int i = 0; i < strlen(arr); i++) // 소문자 대문자 카운터 업
        {
                int temp=0;

                if(arr[i]>=97)    //소문자는 97부터 시작하자너~
                {
                        temp = arr[i] - 97; //소문자 Arr에 저장
                        alp[temp]+=1;
                        /*cout <<"lower temp is " << temp << "       ";
                           cout <<"arr[" << i <<"] is " << arr[i] <<endl;*/
                }
                else{             //대문자의 경우
                        temp = arr[i] -65; //대문자 arr에 저장
                        Alp[temp] += 1;
                        /*  cout <<"upper temp is " << temp << "       ";
                           cout <<"arr[" << i <<"] is " << arr[i] <<endl;
                           cout<<"Conter ALP is " << Alp[temp] <<endl;*/
                }

        }

        for(int a = 0; a < 27; a++) {

                if(alp[a] > max) {
                        max = alp[a];
                        maxindex = a;
                }

                if(Alp[a] > Max) {
                        Max = Alp[a];
                        Maxindex = a;
                }

        }

        if (max == Max || numofmax(alp) == numofmax(Alp))
        {
          cout << "?";
        }
        else if(Max>max && numofmax(Alp) == 1)
        {
           printf("%c", Maxindex + 65);

        }else (Max<max && numofmax(alp) == 1)
           printf("%c", maxindex + 97);

return 0;

}

int numofmax(int S[])
{
  int temp= 0;
  int man=1;
  for(int z = 0 ;z <27 ; z++){

    if (S[z]>temp){
    temp = S[z];

      }
    else if(temp == S[z])
    man++;

  }

  return man;
};
