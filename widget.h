#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    void setInterfaceStyle();
private slots:
    void digit_numbers();
    void input_numbers();
    //void CE_clicker();
    void on_CE_clicked();
    void math();
    //void on_ravno_button_clicked();
    void on_ravno_button_clicked();
};
#endif // WIDGET_H
