#include "mywindow.hpp"


MyWindow::MyWindow() : QWidget()
{
    this->resize(500, 500);
    this->setWindowTitle("Boite de messagerie ");

    QVBoxLayout *layout = new QVBoxLayout(this);

    box2 = new OutputBox();
    InputBox *box1 = new InputBox();

    layout->addWidget(box2, 80);
    layout->addWidget(box1, 20);

    connect(box1 ,SIGNAL(envoiMessage(QString)),this, SLOT(envoiMessage(QString)));

}

MyWindow::~MyWindow()
{

}

void MyWindow::envoiMessage(QString texte)
{
    box2->afficheMessage(texte);
}

void MyWindow::messageRecu(QString texte)
{

}


void MyWindow::centerOnScreen()
{
    QDesktopWidget screen;

    QRect screenGeom = screen.screenGeometry(this);

    int screenCenterX = screen.screenGeometry().x();
    int screenCenterY = screen.screenGeometry().y();

    move(screenCenterX - width() / 2,
        screenCenterY - height() / 2);

}
