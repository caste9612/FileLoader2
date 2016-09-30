#ifndef FILE_H
#define FILE_H
#include<fstream>

using namespace std;



class File
{
public:
    File(string name,ifstream::pos_type dimension):nameFile(name),size(dimension){}

    int getSize(){return size;}

    string getName(){return nameFile;}

private:
    string nameFile;
    ifstream::pos_type size;
};

#endif // FILE_H
