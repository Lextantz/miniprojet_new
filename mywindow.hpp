#ifndef MYWINDOW_HPP
#define MYWINDOW_HPP

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QDesktopWidget>
#include <QGridLayout>
#include <QPushButton>


#include "inputbox.hpp"
#include "outputbox.hpp"



class MyWindow : public QWidget
{
    Q_OBJECT

private:
    OutputBox *box2;

public:
    MyWindow();
    ~MyWindow();

    void centerOnScreen();

public slots:
    void envoiMessage(QString texte);
    void messageRecu(QString texte);




};

#endif // MYWINDOW_HPP
