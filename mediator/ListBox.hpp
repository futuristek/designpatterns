#ifndef LISTBOX_HPP
#define LISTBOX_HPP
#include "Widget.hpp"
#include <string>
#include <vector>

class ListBox: public Widget {
public:
    ListBox(DialogDirector* director): Widget(director) {}
    void changed();
    void handleEvent(Event*);
    void setSelection(const std::vector<std::string>);
    std::string getSelection();
    virtual ~ListBox() {}

private:
    std::vector<std::string> listings;
};

void ListBox::handleEvent(Event* e) {
    changed();
}

void ListBox::setSelection(const std::vector<std::string> items) {
    listings = items;
}

std::string ListBox::getSelection() {
    return "selected";
}
#endif /* LISTBOX_HPP */