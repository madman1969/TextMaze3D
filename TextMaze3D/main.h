#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <conio.h> // *WIN32*

// Maze dimensions 
#define MAZE_SIZE_X 20
#define MAZE_SIZE_Y 11

// Direction constants 
#define NORTH  0
#define EAST   1
#define SOUTH  2
#define WEST   3

// Key code constants
#define ESC_KEY 27
#define RIGHT_ARROW_KEY 77
#define LEFT_ARROW_KEY  75
#define UP_ARROW_KEY 72
#define DOWN_ARROW_KEY 80

using namespace std;

// Holds player location and direction 
struct Player {
	_int8 x, y;   // Location in the maze
	_int8 dir;    // direction player is facing (North, South, East or West)
};

// Represents a singe maze cell
struct Maze {
	bool n, s, e, w;   // The four exits from each room, set to 1 if there is an exit in that direction, 0 if not.
	bool isEntrance;   // is this the entrance to the maze (not used yet, I may change this to an external variable)
	bool isExit;       // is this the exit to the maze (not used yet, I may change this to an external variable)
	bool visited;      // This is used when the maze is generated, and whether the player has been here when drawing the map
};

// Function prototypes 
void drawHall(Maze maze[MAZE_SIZE_Y][MAZE_SIZE_X], const Player& player);
void generateMaze(Maze maze[MAZE_SIZE_Y][MAZE_SIZE_X], Player& player);
void drawMap(Maze maze[MAZE_SIZE_Y][MAZE_SIZE_X], Player& player);
