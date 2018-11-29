#ifndef DIALOGDIRECTOR_HPP
#define DIALOGDIRECTOR_HPP
#include "Widget.hpp"

class DialogDirector {
public:
    DialogDirector() {}
    virtual ~DialogDirector() {}
    virtual void widgetChanged(Widget*) = 0;
    virtual void createWidgets() = 0;
    virtual void showDiaglog() {};
};
#endif /* DIALOGDIRECTOR_HPP */
