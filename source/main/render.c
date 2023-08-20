//In main's translation unit
void render() {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(rendere);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_Rect ball_rect = { (int) ball.x, (int) ball.y, (int) ball.width, (int) ball.height};
    //Todo do shit
    
    SDL_RenderFillRect(renderer, &ball_rect);
    SDL_RenderPresent(renderer);
}
