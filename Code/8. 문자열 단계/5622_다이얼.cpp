#include <iostream>

using namespace std;

int dial(char c);

int main(){

  string st;
  int est = 0;
  getline(cin , st);

  for(int i = 0 ; i < st.length(); i++ )
  est += dial(st[i]);


cout << est;
return 0;
}


 int dial(char c){

switch (c) {
  case 'A':
  case 'B':
  case 'C':
    return 3;
  break;
  case 'D':
  case 'E':
  case 'F':
    return 4;
    break;
  case 'G':
  case 'H':
  case 'I':
    return 5;
    break;
  case 'J':
  case 'K':
  case 'L':
    return 6;
    break;
  case 'M':
  case 'N':
  case 'O':
    return 7;
    break;
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
    return 8;
    break;
case 'T':
case 'U':
case 'V':
  return 9;
  break;
case 'W':
case 'X':
case 'Y':
case 'Z':
  return 10;
  break;
}

return 0;
}
