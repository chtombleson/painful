/**
 * game.h
 */

#ifndef _GAME_H_
#define _GAME_H_

namespace Painful {
    class Game {
        public:
            // Methods
            int init();
            void run();
            void close();

            // Properties
            bool is_running = false;
    };
}

#endif
