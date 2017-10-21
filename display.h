#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include "map.h"
#include "charac.h"

#ifndef __DISPLAY_HEADER__
#define __DISPLAY_HEADER__

#define HAUTEUR_FENETRE 600
#define LARGEUR_FENETRE 950

#define TAILLE_BLOC 50
#define HAUTEUR_TEMPS 50

void displayAll(SDL_Renderer * renderer, map_t map, charac_t charac, int time, int time_max);

void displayMap(SDL_Renderer * renderer, map_t map);
void displayEnnemies(SDL_Renderer * renderer, map_t map);
void displayCharac(SDL_Renderer * renderer, charac_t charac);
void displayTime(SDL_Renderer * renderer, int time, int time_max);

int loadGame(SDL_Renderer * renderer, int level, map_t * map, charac_t * player);
int reloadGame(SDL_Renderer * renderer, int level, map_t * map, charac_t * player);

block_t * getBlockOnMap(map_t * map, int X, int Y);

void initEnnemis(SDL_Renderer * renderer, map_t * map);
void initPlayerTexture(SDL_Renderer * renderer, charac_t * player);
void initMapTexture(SDL_Renderer * renderer, map_t * map);

void closeMapTexture(map_t * map);
void closePlayer(charac_t * player);
void closeEnnemies(map_t * map);
void closeTexture(map_t * map, charac_t * player);

#endif
