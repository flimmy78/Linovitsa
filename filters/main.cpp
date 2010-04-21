#include <QApplication>
//#include <QTranslator>
#include <QtSql>

//#include "RIoNetClient.h"
#include "mainform.h"

int main(int argc,char **argv)
{
    QApplication app(argc,argv);

    QCoreApplication::setOrganizationName("Rabitsa");
    QCoreApplication::setApplicationName("filters");

    QSettings s;
    
    //RIoNetClient net(s.value("/ioserv/hostname","localhost").toString());

//    QSqlDatabase dbs=QSqlDatabase::addDatabase("QMYSQL");

//    dbs.setHostName(s.value("/db/host","localhost").toString());
//    dbs.setDatabaseName(s.value("/db/db","vipgr").toString());
//    dbs.setUserName(s.value("/db/username","scada").toString());
//    dbs.setPassword(s.value("/db/passwd","").toString());

//    if( ! dbs.open())
//	qDebug() << "No connect to database";
    
    
    QStackedWidget main;
    QColor cl;
    QPalette pal;
    cl.setRgb(90,132,201);
    pal.setColor(QPalette::Background,cl);
    main.setPalette(pal);

    //QTranslator translator;
    //translator.load("client_"+QLocale::system().name(),":/translate");
    //app.installTranslator(&translator);

    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    
    mMainForm *mainForm = new mMainForm();
    
    main.addWidget(mainForm);
    main.setCurrentWidget(mainForm);

    //QObject::connect(mainForm->Exit,SIGNAL(clicked()),&main,SLOT(close()));

    //main.showFullScreen();
    main.resize(1366,768);
    main.show();
    
    

    return app.exec();
}

