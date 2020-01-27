#include <QCoreApplication>
#include "FoldersMonitorForNewFiles.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FoldersMonitorForNewFiles monitor("/tmp");
    return a.exec();
}
