#ifndef world_h
#define world_h

#include "tile.h"
#include <array>

template <std::size_t WorldWidth, std::size_t WorldHeight>
class World
{
	std::array<std::array<Tile, WorldWidth>, WorldHeight> mTiles;
};

#endif

