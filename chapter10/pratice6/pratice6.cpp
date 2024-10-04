#include "move.h"

int main() {
    Move m(3, 4);
    m.showmove();
    Move m1 = m.add(Move(1, 2));
    m1.showmove();
    m.reset();
    m.showmove();
    return 0;
}