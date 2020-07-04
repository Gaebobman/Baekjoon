#include <iostream>

using namespace std;

int main(){
        int N;
        int min = 1000000;
        int max = -1000000;

        cin>>N;

        int arr[N];

        for(int a = 0; a < N; a++)
        {
                cin >> arr[a];
                if (arr[a]>max)
                        max= arr[a];

                if (arr[a]< min)
                        min =arr[a];

        }
        cout << min << " "<< max;

        return 0;

}
