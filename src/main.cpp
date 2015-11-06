/**
 * main.cpp
 */
#include <stdio.h>
#include "game.h"

using namespace Painful;

int main(int argc, char **argv) {
    Game *game;

    int init = game->init();

    if (!init) {
        printf("Unable to initialise game\n");
        return 1;
    }

    game->run();
    game->close();

    return 0;
}

