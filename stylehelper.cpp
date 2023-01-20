#include "stylehelper.h"


QString StyleHelper::getButtonsStyle()
{
    return "QPushButton{"
            "color:#fff;"
            //"font-family: 'Eastman-Light.ttf';"
           "background:none;"
           "border:none;"
           "background-color: rgb(255, 107, 5);"
           "}"

           "QPushButton::hover{"
            "background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.515, fy:0.494, stop:0 rgba(250, 250, 250, 255), stop:1 rgba(255, 97, 19, 255));"
            "color:#000000;"
            "font-size:20px;"
            "font-weight:bold;"
           "}"

            "QPushButton::pressed{"
           "background-color: rgb(255, 107, 5);"
           "}";
}

QString StyleHelper::digitalButtons()
{
    return "QPushButton{"
           //"color:#fff;"
            //"font-family: 'Eastman-Light.ttf';"
          //"background:none;"
          //"border:none;"
            "background-color: rgb(37, 40, 42);"
            "}"

            "QPushButton::hover{"
            "font-size:20px;"
            "font-weight:bold;"
            "background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.50505, fy:0.505, stop:0 rgba(135, 135, 135, 255), stop:1 rgba(80, 80, 80, 255));"
               "}"

           "QPushButton::pressed{"
          "background-color: rgb(255, 107, 5);"
          "}";

}
QString StyleHelper::labelstyle()
{
    return "QLabel{"
            "font: 700 24pt 'Arial';"
            "background:none;"
            "border:none;"
            "background-color: rgb(76, 76, 76);"
            "}";
}
