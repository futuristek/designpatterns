#ifndef BUTTON_HPP
#define BUTTON_HPP

#endif /* BUTTON_HPP */
#include "Widget.hpp"
#include <string>

class Button: public Widget {
public:
    Button(DialogDirector* director): Widget(director) {}
    virtual ~Button() {}
};