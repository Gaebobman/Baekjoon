/*#include <iostream>
using namespace std;
int makeItDouble (int param) {
    param = param * 2;
    return param;
}
int makeItTriple (int & number) {
    number = number * 3;
    return number;
}
int main () {
    int num = 4;
    cout << "Result of makeItDouble function: " << makeItDouble(num)<<endl;
    cout << "Value of num: " << num <<endl;
    cout << "Result of makeItTriple function: " << makeItTriple(num)<<endl;
    cout << "Value of num: " << num <<endl;
}
*/
#include <iostream>
using std::cout;
using std::endl;
int squareByValue(int);
void squareByReference(int &);  // 레퍼런스!!
int main()
{
   int x = 2;
   int z = 4;

   // demonstrate squareByValue
   cout << "x = " << x << " before squareByValue\n";
   cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
   cout << "x = " << x << " after squareByValue\n" << endl;

   // demonstrate squareByReference
   cout << "z = " << z << " before squareByReference" << endl;
   squareByReference(z);
   cout << "z = " << z << " after squareByReference" << endl;

   return 0;
} // end main

// 너희가 생각하는대로 동작
int squareByValue(int number)
{
   return number *= number;  // caller's argument not modified

}

// ref 값 자체가 바뀌어서 return할 필요가 없어요
void squareByReference(int &numberRef)
{
   numberRef *= numberRef;   // caller's argument modified
} // end function squareByReference
