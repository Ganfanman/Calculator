#ifndef WINDOW_H_
#define WINDOW_H_

#include <QDialog>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Window : public QDialog
{
    Q_OBJECT

    QGridLayout layout_;

    /* Keyboard */

    QPushButton zero_{"0"};
    QPushButton one_{"1"};
    QPushButton two_{"2"};
    QPushButton three_{"3"};
    QPushButton four_{"4"};
    QPushButton five_{"5"};
    QPushButton six_{"6"};
    QPushButton seven_{"7"};
    QPushButton eight_{"8"};
    QPushButton nine_{"9"};

    QPushButton add_{"+"};
    QPushButton subtract_{"-"};
    QPushButton multiply_{"x"};
    QPushButton divide_{"%"}; // need to be changed to divide sign

    /* Display */

    QLineEdit display{"0"};

public:
    Window();
};

#endif