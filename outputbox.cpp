#include "outputbox.hpp"

OutputBox::OutputBox()
{
    layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignTop);

}

OutputBox::~OutputBox()
{

}

void OutputBox::afficheMessage(QString texte)
{
   QLabel *messageRecu = new QLabel();//pas besoin de le stocker
   messageRecu->setText(texte); //on récupère le texte
   layout->addWidget(messageRecu); //on ajoute au layout pour affichage
}
