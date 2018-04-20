#include "SDL.hpp"
#define APP_NAME ("SDL APP")
#define WINDOW_W (640)
#define WINDOW_H (480)

SDL_Window *window;

void initialize() {

}

void SDL_assert(bool condition) {
    if (!condition) {
        printf("SDL_Error: %s\n", SDL_GetError());
        exit(1);
    }
}

#include "Sudoku.cpp"

int main(int argc, char **argv) {

    // Initialize SDL
    SDL_assert(SDL_Init(SDL_INIT_EVERYTHING) == 0);

    SDL_Window *window = SDL_CreateWindow(APP_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          WINDOW_W, WINDOW_H, SDL_WINDOW_SHOWN);
    SDL_assert(window != nullptr);

    // Create the game grid.
    int width = 9, height = 9, box_w = 3, box_h = 3;

    // Run the main loop
    SDL_Event event;
    bool running;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
    }

    return 0;
}
