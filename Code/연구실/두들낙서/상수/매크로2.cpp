#include <stdio.h>

#define MAX(A,B) (((A)>(B))? (A):(B)) //괄호를 꼭 잘 해주자

int max (int a , int b){
  /*
  if(a>b) return a;
  return b;
  */
  return (a>b) ? a :b;
}

int main(){

  int a  = 5 , b = 10 ;

  printf("%d\n", MAX(a,b));
  
}
