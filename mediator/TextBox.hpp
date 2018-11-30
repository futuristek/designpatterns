#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP
#include "Widget.hpp"
#include <string>

class TextBox: public Widget {
public:
    TextBox(DialogDirector* director): Widget(director) {}
    void changed();
    void handleEvent(Event*);
    void setText(std::string);
    virtual ~TextBox() {}
};

void TextBox::handleEvent(Event* e) {
    changed();
}

void TextBox::setText(std::string s) {
    /* Display s */
}
#endif /* TEXTBOX_HPP */