#include "window.h"

Window::Window()
{
    /* Manu layout */

    /* Memory funs layout */
    memory_function_.addWidget(&mem_clear_);
    memory_function_.addWidget(&mem_recall_);
    memory_function_.addWidget(&mem_add_);
    memory_function_.addWidget(&mem_substract_);
    memory_function_.addWidget(&mem_store_);
    memory_function_.addWidget(&mem_his_);

    /* Display layout */
    disp_win_.setReadOnly(true);
    disp_win_.setAlignment(Qt::AlignRight);
    disp_win_.setFont(disp_font_);
    display_.addWidget(&disp_win_);
    /* Keyboard layout */

    keyboard_.addWidget(&modulo_, 0, 0);
    keyboard_.addWidget(&clear_entry_, 0, 1);
    keyboard_.addWidget(&clear_, 0, 2);
    keyboard_.addWidget(&delete_, 0, 3);

    keyboard_.addWidget(&reciprocal_, 1, 0);
    keyboard_.addWidget(&sqrt_, 1, 1);
    keyboard_.addWidget(&root_, 1, 2);
    keyboard_.addWidget(&divide_, 1, 3);

    keyboard_.addWidget(&seven_, 2, 0);
    keyboard_.addWidget(&eight_, 2, 1);
    keyboard_.addWidget(&nine_, 2, 2);
    keyboard_.addWidget(&multiply_, 2, 3);

    keyboard_.addWidget(&four_, 3, 0);
    keyboard_.addWidget(&five_, 3, 1);
    keyboard_.addWidget(&six_, 3, 2);
    keyboard_.addWidget(&substract_, 3, 3);

    keyboard_.addWidget(&one_, 4, 0);
    keyboard_.addWidget(&two_, 4, 1);
    keyboard_.addWidget(&three_, 4, 2);
    keyboard_.addWidget(&add_, 4, 3);

    keyboard_.addWidget(&change_sign_, 5, 0);
    keyboard_.addWidget(&zero_, 5, 1);
    keyboard_.addWidget(&comma_, 5, 2);
    keyboard_.addWidget(&equal_, 5, 3);

    /* Insert all layouts in GUI */

    main_win_.addLayout(&manu_, 1);
    main_win_.addLayout(&display_, 4);
    main_win_.addLayout(&memory_function_, 1);
    main_win_.addLayout(&keyboard_, 1);

    setLayout(&main_win_);
}