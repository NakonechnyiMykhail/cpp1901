#include <iostream>
#include <fstream> //std::ofstream
#include <cstdlib> // exit

int main()
{
    // ================= version1 =====================
    // write data in file
    std::ofstream outfile("FileName.txt"); // .dat, .csv, .json, ... // DB: sql

    if(!outfile)
    {
        std::cerr << "FileNmae.txt could not be opened for writing!" << std::endl;
        exit(1);
    }
    //console
    std::cout << "line 1 ..." << std::endl;

    // file
    outfile << "line 1 ..." << std::endl;
    outfile << "line 2 ..." << std::endl;

    // ================= version2 =====================
    // Write to file (Require <fstream> library)

    // std::ofstream file;
    // file.open("file");
    // if (file.is_open())
    // {
    //     file << "Some text here..." << endl;
    //     file.close();
    // } else cout << "unable to open file";



    return 0;
}

/*
0.52    132
0.3333    12315



*/