#include <SDL.h>

int main(int argc, char *argv[]) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    // TODO: SDL initialization failed
  }

  // Create window variable
  SDL_Window *Window;

  Window = SDL_CreateWindow("Kinsman", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE);

  // Tear down SDL
  SDL_Quit();

  // Exit successfully
  return(0);
}
