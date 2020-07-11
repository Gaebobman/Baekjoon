#include <iostream>

using namespace std;

int main() {
  int room;
  int head=2;
  int count =1;

  cin >> room;
  if (room != 1) {
    while ( head <= room) {

      head += 6*count;
      count++;
    }
    cout << count;
  }else
    cout << 1;
}
/*1~1   	1	  1세대

2~7     	6	  2세대  = 1 +6*1

8~19 	    12	3세대 = 1+ 6*1+ // 6*2

20~37  	  18	4세대 = 1+ 6*1 + 6*2+ //6*3

38~61	24


bn = 6(n-1) =6n -6
sn  = 3n(n-1) -6(n-1) = 3(n-1)(n-2)
an = 2 + 3(n-1)(n-2) = 2 +3n^2 -3n +2 = 3n^2 -3n +4

+*/
