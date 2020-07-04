#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){
        int C; //케이스

        cin >> C;
        for(int a=1; a<=C; a++) //각 케이스 시작
        {
          int sum =0;
          double stucount =0;
          int arr[1000];

          int b;

          cin >>b;       // 각 케이스 별 학생수

          for(int c= 0; c <b; c++)
          {     cin>> arr[c];


                  sum += arr[c];   //점수의 총 합;


          }

          for(int c= 0; c <b; c++)
          {
                  if (arr[c] > (sum / b))    //평균을 넘는 학생 수 세기
                  {
                          stucount++;

                  }
          }
          cout <<fixed<<setprecision(3)
          << (stucount / b)*100<<"%"<<endl; // fixed로 소수점 3자리에서 반올림 하기
        }

return 0;
}
