#include <SDL.h>

int main(int argc, char *argv[]) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    // TODO: SDL initialization failed
  }

  // Tear down SDL
  SDL_Quit();

  // Exit successfully
  return(0);
}
