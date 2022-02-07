#ifndef OUTPUTBOX_HPP
#define OUTPUTBOX_HPP


#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QInputDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QLabel>

class OutputBox : public QWidget
{
    Q_OBJECT

private:
    QVBoxLayout *layout;


public:
    OutputBox();
    ~OutputBox();

   void afficheMessage(QString texte);
};

#endif // OUTPUTBOX_HPP
