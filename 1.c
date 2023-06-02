#include <stdio.h>
#include <stdlib.h>
struct Coord {
	int x;
	int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int coord_x=abs(start.x-finish.x);
    int coord_y=abs(start.y-finish.y);
    if (coord_x<=1 && coord_y<=1)
        return 1;
    else
        return 0;
}
//у меня времени мало на это писать проверку понадеюсь на господа бога, аминь
