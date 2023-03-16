#include <iostream>
#include "CursesUtils.h"
#include "AtpbTextVersion.h"

using namespace std;

int HandleInput();

int main() {
    srand(time(NULL));

//    Game game;
//    Player player;
//    Shield shields[NUM_SHIELDS];
//    AlienSwarm aliens;
//    AlienUFO ufo;
//    HighScoreTable table;

    InitializeCurses(true);

//    InitGame(game);
//    game.level = 1;
//    InitPlayer(game, player);
//    InitShields(game, shields, NUM_SHIELDS);
//    InitAliens(game, aliens);
//    ResetUFO(game, ufo);
//    LoadHighScores(table);

    bool quit = false;
    int input;

    clock_t lastTime = clock();

    while(!quit)
    {
        input = HandleInput();
        if(input != 'q')
        {
            clock_t currentTime = clock();
            clock_t dt = currentTime - lastTime;

            if(dt > CLOCKS_PER_SEC/FPS)
            {
                lastTime = currentTime;
                ClearScreen();
                RefreshScreen();
            }
        }
        else
        {
            quit = true;
        }
    }

    ShutdownCurses();

    return 0;
}

int HandleInput()
{
    int input = GetChar();

    switch(input)
    {
        case 'q':
            return input;
        case AK_LEFT:
            break;
        case AK_RIGHT:
            break;
        case AK_UP:
            break;
        case AK_DOWN:
            break;
        case ' ':
            break;
    }
    return input;
}
