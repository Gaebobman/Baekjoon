// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버 메서드)


/*
매개변수(parameter)란 함수의 정의에서 전달받은 인수를
함수 내부로 전달하기 위해 사용하는 변수를 의미합니다.

인수(argument)란 함수가 호출될 때 함수로 값을 전달해주는 값을 말합니다.

function addNum(x, y, z) {

// x, y, z라는 3개의 매개변수를 가지는 함수 addNum()을 정의함.

    return x + y + z;

}

addNum(1, 2, 3); // 인수로 1, 2, 3을 전달하여 함수를 호출함. -> 6

addNum(1, 2);    // 인수로 1, 2을 전달하여 함수를 호출함. -> NaN

addNum(1);       // 인수로 1을 전달하여 함수를 호출함. -> NaN

addNum();        // 인수로 아무것도 전달하지 않고 함수를 호출함. -> NaN
 */

#include <iostream>

using namespace std;

class Account {
public:
    Account() : money(0) {}
    Account(int money): money(money) { }

    void Deposit(const int d) {
        //1. 매개변수의 상수화.
        money += d;
        cout << d << "원을 예금했다." << endl;

    }
    void Draw(int d) {
        if (money >= d) {
            money -= d;
            cout << d << "원을 인출했다!!" << endl;
        }
    }

    int viewMoney() const {
        //2. 메서드의 상수화. 메서드(명령어의 집합)
        return money;
    }
private:
    int money;

};



int main() {
    Account lee(1000);

    lee.Deposit(100);
    lee.Draw(20);

    cout << lee.viewMoney() << endl;


}
