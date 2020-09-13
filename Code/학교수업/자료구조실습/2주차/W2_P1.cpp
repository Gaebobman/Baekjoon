#include <iostream>
#include <string>

using namespace std;

class Array {

public:
    int arr[10000];

    Array() {

        for (int i = 0; i < 10000; i++) {
            arr[i] = 0;
        }
    }

    void at(int idx) { cout << arr[idx] << endl; }

    void set(int idx, int value) {

        if (arr[idx] == 0) {
            cout << arr[idx] << endl;
        }
        else {
            //  if (idx <10000 && idx >= 0)
            arr[idx] = value;
        }
    }

    void add(int idx, int value)
    {
        if (arr[idx] == 0)
        {
            for (int i = 0; i <= idx; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = value;
                    break;
                }
            }
        }
        else
        {

            int temp = 0;

            for (int i = idx; i < 10000; i++)
            {
                temp = arr[i];
                arr[i] = value;
                value = temp;
            }
        }
        }
};




    int main()
    {
        Array a;
        int M;

        cin >> M;

        while (M--) {
            string com;

            cin >> com;

            if (com == "at") {
                int idx;
                cin >> idx;
                a.at(idx);
            }

            if (com == "set") {
                int idx, val;

                cin >> idx >> val;

                a.set(idx, val);
            }

            if (com == "add") {
                int idx, val;

                cin >> idx >> val;

                a.add(idx, val);
            }
        }
        return 0;
    }
