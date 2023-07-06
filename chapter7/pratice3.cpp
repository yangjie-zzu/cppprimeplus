#include <iostream>

struct box
{
    char maker[40];
    float height;

    float width;

    float length;

    float volume;
};

void show_box(box b);

void set_volume(box * bp);

int main() {
    box b = {
        "maker",
        10,
        20,
        30
    };

    show_box(b);
    set_volume(&b);
    show_box(b);
}

void show_box(box b) {
    std::cout << b.maker << ": " << b.height << ", " << b.width << ", " << b.length << ", " << b.volume << std::endl;
}

void set_volume(box * bp) {
    bp -> volume = bp -> height * bp -> width * bp -> length;
}