#include "widget.cpp"
void Widget::setInterfaceStyle()
{
    ui->CE->setStyleSheet(StyleHelper::getButtonsStyle());
    ui->button_8->setStyleSheet(StyleHelper::digitalButtons());
    ui->button_6->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_10->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_11->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_9->setStyleSheet(StyleHelper::digitalButtons());
    ui->plus_button->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_7->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_5->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_3->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_12->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_13->setStyleSheet(StyleHelper::digitalButtons());
    ui->ravno_button->setStyleSheet(StyleHelper::digitalButtons());
    ui->pushButton_15->setStyleSheet(StyleHelper::digitalButtons());
    ui->label->setStyleSheet(StyleHelper::labelstyle());
}

//регестрируем нажатие клавиш
void Widget::input_numbers(){
    connect(ui->button_6,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->button_8,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_10,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_11,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_15,SIGNAL(clicked()),this,SLOT(digit_numbers()));

    connect(ui->CE,SIGNAL(clicked()),this,SLOT(on_CE_clicked()));

    connect(ui->plus_button,SIGNAL(clicked()),this,SLOT(math()));
    connect(ui->pushButton_12,SIGNAL(clicked()),this,SLOT(math()));
    connect(ui->pushButton_13,SIGNAL(clicked()),this,SLOT(math()));

    ui->plus_button->setCheckable(true);
    ui->pushButton_12->setCheckable(true);
    ui->ravno_button->setCheckable(true);
    ui->pushButton_13->setCheckable(true);
}

//настраиваем само нажатие клавиш
void Widget::digit_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double num;
    QString new_number;
    num = (ui->label->text()+button->text()).toDouble();
    new_number = QString::number(num,'g',15);
    ui->label->setText(new_number);
}


void Widget::on_CE_clicked()
{
    ui->plus_button->setChecked(false);
    ui->label->setText("0");
}

void Widget::math(){
    QPushButton *button = (QPushButton *)sender();
    num_first = ui->label->text().toDouble();
    ui->label->setText("");
    button->setCheckable(true);
}


void Widget::on_ravno_button_clicked()
{
   double label_number;
   double num_second;
   QString new_label;
   num_second = ui->label->text().toDouble();
   if(ui->plus_button->isChecked()){
       label_number = num_first+num_second;
       new_label = QString::number(label_number,'g',15);
       ui->label->setText(new_label);
       ui->plus_button->setChecked(false);
   }else if(ui->pushButton_12->isChecked()){
       label_number = num_first-num_second;
       new_label = QString::number(label_number,'g',15);
       ui->label->setText(new_label);
       ui->pushButton_12->setChecked(false);
   }else if(ui->pushButton_13->isChecked()){
       label_number = num_first/num_second;
       new_label = QString::number(label_number,'g',15);
       ui->label->setText(new_label);
       ui->pushButton_13->setChecked(false);
   }
}
