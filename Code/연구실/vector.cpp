#include <iostream>
#include <vector>


using namespace std;

int main(){
  //vector의 선언은 vector <[datatype]> [변수이름]
  vetor<int> v; // 비어있는 vector선언
  vector<int> v(5); // 기본값(0)으로 초기화 된 5개의 원소를
                    //가지는 vector v 를 생성
  vector<int> v(5,2); // 2로 초기화 된 5개의 원소

  vector <int> v2(v1); // v2는 v1 vector를 복사해서 생성
  v.assign(5,2);  // 2의 값으로 5개의 원소 할당
  v.at(idx); //idx번째 원소를 참조합니다.
  v.front(); //첫번째 원소를 찹조합니다.
  v.back(); // 마지막 원소를 참조합니다.
  v.clear(); // 모든원소 제거, 원소만 제거하고 메모리는 남아있다.
              // size만 줄어들고 capacity는 그대로 남아있다.


}
