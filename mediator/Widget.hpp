#ifndef WIDGET_HPP
#define WIDGET_HPP
#include "DialogDirector.hpp"
#include "Event.hpp"

class Widget {
public:
    Widget(DialogDirector*) {}
    virtual ~Widget() {}
    virtual void change() = 0;
    virtual void handleEvent(Event*) = 0;
private:
    DialogDirector* director;
};
#endif /* WIDGET_HPP */
