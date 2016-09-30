#include "fileloader.h"
class File;


//Costruttore
FileLoader::FileLoader(string line)
{
    Coda=line;
    data=new BYTE[64];
}


//Caricamento
void FileLoader::load(){

    ifstream coda(Coda,ios::binary);
    string line;
    loaded=0;
    int currentLoaded=0;
    totalSize=0;

    //Creazione dei file
    while (getline(coda,line))
    {
        ifstream currentFile(line,ios::binary);
        currentFile.seekg(0,ios::end);
        File* tmp;

        //Controllo validità file
        if(currentFile.tellg()!=-1){
            tmp=new File(line,currentFile.tellg());
            files.push_back(tmp);
        }
    }

    //Acquisizione dimensioni totali
    for(auto i=files.begin();i!=files.end();i++)
        totalSize=totalSize+(*i)->getSize();

    //Ciclo di caricamento sui file
    for(auto i=files.begin();i!=files.end();i++){

        //Mostro il file selezionato
        currentFileName = QString::fromStdString((*i)->getName());
        for(auto i=observers.begin();i != observers.end();i++)
            (*i)->update();

         //Finchè il file è buono lo leggo 64 byte alla volta
         ifstream currentFile((*i)->getName(),ios::binary);
         currentLoaded=0;
         while((*i)->getSize()!=currentLoaded){
            if(((*i)->getSize()-currentLoaded)>=64){
            currentFile.read(data,64);
            currentFile.seekg(64,ios::cur);
            loaded=loaded+64;
            currentLoaded=currentLoaded+64;
               }else{
                    currentFile.read(data,(*i)->getSize()-loaded);
                    loaded=loaded+(*i)->getSize()-currentLoaded;
                    currentLoaded=(*i)->getSize();
                    }

             //Aggiorno la progressbar e il contatore
             for(auto i=observers.begin();i != observers.end();i++){
                (*i)->update();
             }
        }
    }
}


//Distruttore per evitare leak
FileLoader::~FileLoader(){
    delete [] data;
    for(auto i=files.begin();i!=files.end();i++)
        delete *i;
}



