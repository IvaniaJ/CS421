#include <stdio.h>

/* dereferencing a structure and access internal members*/

void move(point *p) {
    p->x++;
    p->y++;
}