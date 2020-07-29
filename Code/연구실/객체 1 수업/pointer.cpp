#include <iostream>

using namespace std;

/*
void cuberefrence(int *);

int main(){

int num =5;

cuberefrence(&num);

cout << num;


return 0;

}

void cuberefrence(int *nptr)
{

    *nptr = *nptr * *nptr * *nptr;
}
*/
/*int main(){

  int x, y;

  // ptr is a constant pointer to an integer that can
  // be modified through ptr, but ptr always points to the
  // same memory location.
  int * const ptr = &x;

  *ptr = 7;
}*/
/*
int main() {
  int a = 10;

  int *ptr;
  ptr = &a;

  int **ptr_ptr;
  ptr_ptr = &ptr;

  cout << "a = "<< a <<endl;
  cout << " &a = " << &a <<endl;

  cout << "ptr = " << ptr <<endl;
  cout <<"&ptr = " << &ptr <<endl;

  cout << "ptr_ptr = " << ptr_ptr;





}
*/

/*
int main (){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  for (int i = 0 ; i  <10 ; i++)
  {
    cout << arr[i] << " ";
  }
cout <<endl;

for (int i  = 0 ; i < 10; i++){
  cout << *(arr + i ) << " " ;
}
  cout << endl;

  for(int *ptr = arr ; ptr < arr+10 ; ptr++)
  {
    cout << *ptr << " ";
  }
return 0;
}
*/


int main(){
  /*
  1. ptr == &ptr[0]
  2. *ptr == ptr[0]
  3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
   */
  int arr [3]   = {1, 2, 3} ;

  cout << " arr = " << arr  << endl;
  cout << "arr + 1 = " << arr + 1 << endl;

  cout  << "&arr  = " << &arr<< endl;
  cout << "&arr + 1 = " <<&arr +1; // sizeof (arr) 만큼 더해졌다?

}
