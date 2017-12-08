/*
 * @author Paulo R. Almeida Filho
 * mail: palmeidaprogramming@gmail.com
 * simple find path using memoization
 * http://github.com/palmeidaprog/findpath_memoizaion
 */


#include "coord.h"

findpath::Coord::Coord(int x1, int y1): x(x1), y(y1) { }

~findpath::Coord::Coord() { }

int const &findpath::Coord::getX() { 
    return x;
}





//const int &findpath::Coord::getPath() {}