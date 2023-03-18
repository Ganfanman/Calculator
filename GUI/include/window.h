#ifndef WINDOW_H_
#define WINDOW_H_

#include <QDialog>
#include <QFont>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Window : public QDialog
{
    Q_OBJECT

    QHBoxLayout manu_;
    QVBoxLayout display_;
    QHBoxLayout memory_function_;
    QGridLayout keyboard_;
    QVBoxLayout main_win_;

    /* Manu */



    /* Display */

    QFont disp_font_{"Times", 40, QFont::Bold};
    QLineEdit disp_win_{"0"};

    /* Memory funs */
    QPushButton mem_clear_{"MC"};
    QPushButton mem_recall_{"MR"};
    QPushButton mem_add_{"M+"};
    QPushButton mem_substract_{"M-"};
    QPushButton mem_store_{"MS"};
    QPushButton mem_his_{"Mv"}; // unclear function

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
    QPushButton substract_{"-"};
    QPushButton multiply_{"x"};
    QPushButton divide_{"%"}; // need to be changed to divide sign
    QPushButton equal_{"="};
    QPushButton modulo_{"%"};
    QPushButton change_sign_{"+/-"};
    QPushButton comma_{","};
    QPushButton reciprocal_{"1/x"}; // need to be changed
    QPushButton sqrt_{"x^2"}; // need to be changed
    QPushButton root_{"root"}; // need to be changed
    QPushButton clear_{"C"};
    QPushButton clear_entry_{"CE"};
    QPushButton delete_{"DELETE"}; // need to be changed

public:
    Window();
};

#endif