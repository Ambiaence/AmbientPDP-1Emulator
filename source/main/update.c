//Part of main's translation unit.

int time_to_wait() {
}

void update() {
    ball.x += 0.5;
    ball.y += 0.5;
    last_frame_time = SDL_GetTicks();
}
