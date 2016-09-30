
#ifndef FILELOADER_H
#define FILELOADER_H
#include<list>
#include <string>
#include "QString"

#include "file.h"
#include "subject.h"


char typedef BYTE;

using namespace std;

class FileLoader:public Subject
{
public:
    FileLoader(string line);
    void load();
    string getFile();
    ~FileLoader();
    double getLoaded(){return loaded;}
    double getTotal(){return totalSize;}
    QString getName(){return currentFileName;}

private:
    double loaded;
    double totalSize;
    QString currentFileName;
    string Coda;
    BYTE* data;
    list <File*> files;
};

#endif // FILELOADER_H
