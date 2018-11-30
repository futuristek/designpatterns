#ifndef WIDGET_HPP
#define WIDGET_HPP
#include "DialogDirector.hpp"
#include "Event.hpp"

class Widget {
public:
    Widget(DialogDirector*) {}
    virtual ~Widget() {}
    virtual void changed();
    virtual void handleEvent(Event*) = 0;
private:
    DialogDirector* director;
};

void Widget::changed() {
    director->widgetChanged(this);
}
#endif /* WIDGET_HPP */
