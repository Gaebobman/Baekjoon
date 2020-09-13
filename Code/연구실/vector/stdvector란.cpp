#include <vector> // no need to specify length at initialization
std::vector<int> array;
std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array
std::vector<int> array3 { 9, 7, 5, 3, 1 }; // use uniform initialization to initialize array (C++11 onward)

array = { 0, 1, 2, 3, 4 }; // okay, array length is now 5
array = { 9, 8, 7 }; // okay, array length is now 3
// 이 경우 std::vector는 제공된 요소 수와 일치하도록 크기가 자동으로 조정된다.



//Self-cleanup prevents memory leaks
//std::vector 변수가 범위(scope)를 벗어나면 자동으로 제어하는 메모리를 할당 해제한다.
//이것은 편리할 뿐만 아니라 메모리 누수를 방지하는 데 유용하다.

void doSomething(bool earlyExit)
{
    int* array = new int[5] { 9, 7, 5, 3, 1 };

    if (earlyExit)
        return;

   // do stuff here

    delete[] array; // never called
}
