//Belongs to main.c's translation unit.
int initialize_window(void) {
    if(SDL_Init(SDL_INIT_EVERYTHING != 0)) { 
        fprintf(stderr, "Error intiializing SDL. %s \n", SDL_GetError());
        return 0;
    };

    window = SDL_CreateWindow(
            NULL,
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            WINDOW_WIDTH, WINDOW_HEIGHT,
            SDL_WINDOW_BORDERLESS
    );

    if(!window) {
        fprintf(stderr, "Error intiializing SDL Window.\n");
        return 0;
    }
    renderer = SDL_CreateRenderer(window, -1, 0);
    if(!renderer) {
        fprintf(stderr, "Error intiializing SDL Renderer.\n");
        return 0;
    }
    return 1;
}

void destroy_window() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
