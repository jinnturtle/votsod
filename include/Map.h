#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>
#include <fstream>

#include <ncurses.h>

#include "Tiles.h"
#include "Char.h"
#include "Char_Human.h"

using namespace std;

class Map{
  public:
    Map(string _mapFile);
    virtual ~Map();

    Tile GetTile(int _x, int _y);
    char GetTileIcon(int _x, int _y);
    int GetTilemapW();
    int GetTilemapH();
    void test_make_char();
    Char* test_get_char();
    int NextTurn();
  private:
    vector<vector<Tile*> > Vtiles;
    vector<Char*> m_vChars;
};

#endif // MAP_H
