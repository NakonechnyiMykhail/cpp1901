#include <iostream>
#include <fstream> //std::ofstream
#include <cstdlib> // exit

/*

* app - open file in regime add to file
* ate - go to end in file read/write
* binary - open file in bin
* in - open file for read (default at ifstream)
* out - open file for write (default at ofstream)
* trunc - delete file if it exist

*/


int main()
{
    // ================= version1 =====================
    // read data in file
    std::ifstream infile("FileName.txt", std::ios::binary);

    if(!infile)
    {
        std::cerr << "FileNmae.txt could not be opened for reading!" << std::endl;
        exit(1);
    }

    while(infile)
    {
        std::string strInput;
        // infile >> strInput; // each element throw space
        getline(infile, strInput);

        // console
        std::cout << strInput << std::endl;
    }


    // ================= version2 =====================
    // Read file (Require <fstream> library)
    // string data;
    // ifstream file;
    // file.open("file");
    // if (file.is_open())
    // {
    //     file >> data;
    //     cout << data << endl;
    //     file.close();
    // } else cout << "unable to open file";



    return 0;
}