#ifndef BUTTON_HPP
#define BUTTON_HPP

#endif /* BUTTON_HPP */
#include "Widget.hpp"

class Button: public Widget {
public:
    Button(DialogDirector* director): Widget(director) {}
    virtual void change();
    virtual void handleEvent(Event*);
    virtual void setText(const char*);
    virtual ~Button() {}
};

void Button::handleEvent(Event* e) {
    changed();
}