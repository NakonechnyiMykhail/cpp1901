#include <iostream>

enum Colors
{
    COLOR_RED, //  = 1
    COLOR_BROWN,
    COLOR_WHITE,
};

enum Animals // XXXXXXXXXX
{
    ANIMAL_COW = -3,
    ANIMAL_DOG,
    ANIMAL_CAT,
    ANIMAL_HORSE = 6,
    ANIMAL_LION = 5,
    ANIMAL_ZEBRA,
    ANIMAL_PIG,
};

void printColor(Colors color)
{
    if (color == COLOR_RED)
        std::cout << "Red\n";
    else if (color == COLOR_BROWN)
        std::cout << "Brown\n";
    else if (color == COLOR_WHITE)
        std::cout << "White\n";
    else
        std::cout << "who knows...";
}

int main()
{
    Colors paint = COLOR_RED;
    Colors house(COLOR_WHITE);

    std::cout << paint << std::endl;

    // Animals cats = 7; // static_cast<Animals>(5)
    printColor(paint);
    printColor(COLOR_WHITE);
    printColor(static_cast<Colors>(5));
    // printColor(1);
    printColor(static_cast<Colors>(1));

    return 0;
}


