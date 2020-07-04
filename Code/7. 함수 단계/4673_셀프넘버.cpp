#include <iostream>


using namespace std;

int Selfnum(int n); // 셀프 넘버가 아닌것을 추리는 함수


int main (){
        bool arr[10001];

        for (int i = 0; i < 10000; i++)
        {
                if(Selfnum(i)<10000) {
                        arr[Selfnum(i)] = 1;
                }
        }

        for(int a = 0; a < 10000; a++)
        {
          if(arr[a] != 1)
          cout << a<<endl;
        }


}



int Selfnum(int n){       // 셀프 넘버가 아닌것을 추리는 함수
        int sum = n;

        while ( n > 0 ) {

                sum +=  (n%10);
                n /= 10;
        }
        return sum;
};
