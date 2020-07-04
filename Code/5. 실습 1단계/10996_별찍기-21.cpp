#include <iostream>

using namespace std;

int main(){
        int n;

        cin >> n;

        /*
           첫번째
         +1해서 / 2

           두번째
           2보다 클때만 실행해요.
           / 2한 결과

         */

        for(int a=1; a<=n; a++)
        {

                for(int b = 1; b <=(n +1)/2; b++ )
                {
                        cout<<"* ";
                }
                  cout<< endl;

                if(n>=2)
                {
                  for(int c = 1;c<=n/2 ; c++)
                  {
                    cout <<" *";
                  }

                }

                cout<<endl;     //여기까지 두 줄 씩 한덩이
        }

return 0;
}
