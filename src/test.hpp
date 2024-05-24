#ifndef TESTCODE_H
#define TESTCODE_H

#include <QtWidgets>
#include <QDockWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QMessageBox>


class TestWidget : public QDockWidget {

    public:
        explicit TestWidget(QWidget *parent = nullptr);
        ~TestWidget();

    private:
        void buttonClicked();
        QWidget *parent = nullptr;
        QPushButton *button = new QPushButton();

    private slots:
    void buttonClicked();
};


#endif