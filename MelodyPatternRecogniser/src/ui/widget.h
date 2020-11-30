#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <memory>
#include "control.h"

using namespace std;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_melpatrec_lineEdit_textEdited(const QString &arg1); //Sets user input

private:
    Ui::Widget *ui;
    unique_ptr<Control> m_appCtrl;
};

#endif // WIDGET_H
