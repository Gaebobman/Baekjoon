#include <iostream>

using namespace std;

/*
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAYING = 1;
const int GAMESTATE_PAUSED = 2;
const int GAMESTATE_GAMEOVER = 3;
// 메모리를 잡아먹어, 나중에 볼때 귀찮아
// enum을 사용해보자.
*/

enum EGameState{
  GAMESTATE_MAINMENU, //0
  GAMESTATE_PLAYING,  //1
  GAMESTATE_PAUSED=2,   //중간에 값을 끊어먹으면 다음숫자가 자동으로 나와.
  GAMESTATE_GAMEOVER
};


int main() {
  EGameState currState; //int currState = GAMESTATE_MAINMENU;


  while (true) {
    switch (currState) {
    case GAMESTATE_MAINMENU:

      break;

    case GAMESTATE_PLAYING:

      break;

    case GAMESTATE_PAUSED:

      break;

    case GAMESTATE_GAMEOVER:

    case 4:
      break;
    }
  }
}
