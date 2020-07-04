#include <iostream>

using namespace std;

int main(){
        //입출력 속도 빠르게
        cin.tie(NULL);
        ios_base::sync_with_stdio(false);
        int T;
        cin >> T;

        for(int i = 1; i <=T; i++)
        {
                int a, b;
                cin >> a >> b;
                cout << a + b << "\n";
        }

return 0;

}
