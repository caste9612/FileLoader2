#include"lcdobserver.h"
#include "fileloader.h"
#include "pbobserver.h"
#include "labelobserver.h"




int main(int argc, char *argv[])
{
    FileLoader subject("/home/antonio/FileLoader2/files");
    QApplication a(argc, argv);
    MainWindow w(0,&subject);
    LCDObserver lcdObserver(&subject, &w);
    PBObserver pbobserver(&subject,&w);
    LABELObserver labelobserver(&subject,&w);

    w.show();

    return a.exec();
}
