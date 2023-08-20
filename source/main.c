//External Headers
#include <stdio.h>
#include <SDL2/SDL.h>

//My Headers
#include "memory.h"
#include "constants.h"

//File Variables in translation unit.
int game_is_running = 0;
int last_frame_time = 0;
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

struct ball {;
    float x;
    float y;
    float width;
    float height; 
} ball;

//Code in translation unit.
#include "main/sdl.c"
#include "main/input.c"
#include "main/render.c"
#include "main/update.c"

void setup() {
    memory = Memory;
}

int main() {
    game_is_running = initialize_window();
    setup();
    while(game_is_running) {
        process_input();
        update();
        render();
    }
    destroy_window();
}
