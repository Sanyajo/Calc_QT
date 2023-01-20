#include "widget.h"
#include "ui_widget.h"
#include <stylehelper.h>
#include <QFontDatabase>
#include <vector>
std::vector <double> vec;
double num_first;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setInterfaceStyle();
    input_numbers();
}

Widget::~Widget()
{
    delete ui;
}
//дизайн клавиш


