#include "window.h"

Window::Window()
{
    layout_.addWidget(&seven_, 0, 0);
    layout_.addWidget(&eight_, 0, 1);
    layout_.addWidget(&nine_, 0, 2);
    layout_.addWidget(&four_, 1, 0);
    layout_.addWidget(&five_, 1, 1);
    layout_.addWidget(&six_, 1, 2);
    layout_.addWidget(&one_, 2, 0);
    layout_.addWidget(&two_, 2, 1);
    layout_.addWidget(&three_, 2, 2);

    setLayout(&layout_);
}