#include <iostream>

using namespace std;


int main (){

    int Bur[3];
    int soft[2]; // 버거와 음료 배열
    int cheapbur =2000;
    int cheapsoft=2000; //최대 가격 설정

    for (int i = 0 ; i<=2 ; i++) // 버거 3종이므로 3회 실행
    {
      cin >>Bur[i];
      if(Bur[i]<= cheapbur) // 가장 낮은가격 확인
      cheapbur =Bur[i];

    }

    for (int j = 0 ; j<=1 ; j++)
    {
      cin >>soft[j];
      if(soft[j]<= cheapsoft) //가장 낮은 가격 확인
      cheapsoft =soft[j];
    }

    cout << cheapbur +cheapsoft - 50 ; // 출력
    return 0;
}
