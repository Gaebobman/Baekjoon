#include <iostream>
#include <windows.h>

using namespace std;

struct ProductInfo {
  int num;        // 4
  char name[100]; // 100
  int cost;       // 4
};

void productsale(ProductInfo *p, int percent) {
  p->cost -= p->cost * percent / 100; //(*p).cost == p->cost;
}

void productSwap(ProductInfo *a , ProductInfo *b)
{
  ProductInfo temp = *a;
  *a = *b;
  *b = temp;
}
int main() {

  system("chcp 65001");
  ProductInfo myproduct = {4797283, "제주 한라봉", 19900}; // 등호 없어도됨
  ProductInfo otherproduct = {1234567, "바뀐 제품", 75550};
  ProductInfo *ptr_product = &myproduct;

  cout << "상품 번호: " << myproduct.num << endl;
  cout << "상품 이름: " << myproduct.name << endl;
  cout << "가    격: " << myproduct.cost << endl;
  productsale(&myproduct, 10);
  cout << "10% 할인가 : " << myproduct.cost << endl;

  cout << "상품 번호: " << (*ptr_product).num << endl;
  cout << "상품 이름: " << ptr_product->name << endl; //(*ptr_product).name;
  cout << "가    격: " << myproduct.cost << endl;

  productSwap(&myproduct , &otherproduct );

  cout << "상품 번호: " << myproduct.num << endl;
  cout << "상품 이름: " << myproduct.name << endl;
  cout << "가    격: " << myproduct.cost << endl;



  cout << "상품 번호: " << otherproduct.num << endl;
  cout << "상품 이름: " << otherproduct.name << endl; //(*ptr_product).name;
  cout << "가    격: " << otherproduct.cost << endl;





return 0;
}
