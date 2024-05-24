#include "test.hpp"

TestWidget::TestWidget(Qwidget *parent) : QDocWidget("Lahoucine7 Test Plugin", parent) {
    this->parent = parent;

    Qwidget *widget = new QWidget();
    this->button->setText("Appuie moi <3");
    QHBoxLayout *Layout = new QHBoxLayout();
    layout->addWidget(this->button);

    widget->setLayout(layout);

    setWidget(widget);
    setVisible(false);
    setFloating(true);
    resize(300, 300);

    QObject::connect(button, SIGNAL(clicked()), SLOT(buttonClicked()));

};

TestWidget::~TestWidget(){

};

void TestWidget::buttonClicked(){
    QMessageBox::information(this, "Infos", "Bravo !");
    
};