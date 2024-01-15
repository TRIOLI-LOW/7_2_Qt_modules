#include <QCoreApplication>
#include <QNetworkInterface>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    QNetworkInterface inteface_name;
    QSqlDatabase db_name;

    return a.exec();
}
