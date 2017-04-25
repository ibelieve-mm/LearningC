#include <iostream>
#include "MyMazeMap.H"
#include "MyMazer.H"

using namespace std;

void mazeInvoke() {
    int map[8][9] = {
            {WALL, WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL},
            {WALL, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL},
            {WALL, WALL, ROAD, WALL, ROAD, WALL, ROAD, ROAD, WALL},
            {WALL, WALL, ROAD, WALL, ROAD, WALL, WALL, ROAD, WALL},
            {WALL, WALL, ROAD, ROAD, ROAD, ROAD, WALL, ROAD, WALL},
            {WALL, WALL, ROAD, WALL, WALL, ROAD, ROAD, ROAD, WALL},
            {WALL, ROAD, ROAD, WALL, WALL, WALL, WALL, WALL, WALL},
            {WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL}
    };
    MyMazeMap maze;

    maze.setMazeMap(&map[0][0], 8, 9);
    maze.setMazeWall('*');
    maze.drawMap();
    MyMazer mazer;
    mazer.setPersonPosition(1, 7);
    mazer.setPersonSpeed(SLOW);
    mazer.setPersonChar('T');
    mazer.start();
}