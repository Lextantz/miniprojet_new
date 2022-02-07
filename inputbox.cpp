#include "inputbox.hpp"


InputBox::InputBox()
{

    this->sendButton = new QPushButton("Envoyer", this);
    this->message = new QTextEdit();

    //message->setPlaceholderText("Tapez votre message ici");

    QHBoxLayout *layout = new QHBoxLayout(this);

    layout->addWidget(message);
    layout->addWidget(sendButton);

    connect(sendButton, SIGNAL(clicked()), this, SLOT(envoiMessage()));

    //QString message = QInputDialog::getText(this, "Taper message")

}

InputBox::~InputBox()
{

}

void InputBox::envoiMessage()
{
   //qDebug() << message->setText() << endl;

    QString texte = this->message->toPlainText();
    this->message->setPlainText("");

    if(texte.length()>0)
        emit envoiMessage(texte);
}
