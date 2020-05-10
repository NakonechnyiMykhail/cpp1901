#include <iostream>


// main(int argc, char *argv[])
// main(int argc, char** argv)

// ============================================================

// argc = 1 || argv[0] = args
// ./args

// ============================================================

// argc = 2 || argv[0] = args | argv[1] = 12 / Mike
// ./args arg1
// arg1 - 12 / Mike

// ============================================================

int main(int argc, char *argv[]){

    std::cout << "There are " << argc << " arguments:\n";

    for (int count = 0; count < argc; ++count)
        std::cout << count << " " << argv[count] << '\n';

    return 0;
}

/*

~/cpp1901/lesson30/ (master) $ ./args 12 Mike some
There are 4 arguments:
0 ./args
1 12
2 Mike
3 some

*/