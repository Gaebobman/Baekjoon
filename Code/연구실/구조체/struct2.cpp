#include <iostream>
#include<windows.h>


using namespace std;

struct ProductInfo{
  int num; //4
  char name[100]; // 100
  int cost; //4
};

int main(){

  system("chcp 65001");
      ProductInfo myproduct = {4797283 , "제주 한라봉", 19900};

      cout << "상품 번호: " << myproduct.num <<endl;
      cout << "상품 이름: " <<myproduct.name<<endl;
      cout <<"가    격: "<<myproduct.cost<<endl;
      cout <<"sizeof(myproduct) : "<<sizeof(myproduct) << endl;

      cout <<"&myproduct : " <<&myproduct << " == "
      <<" &myproduct.num :" <<&myproduct.num<<endl;



}
