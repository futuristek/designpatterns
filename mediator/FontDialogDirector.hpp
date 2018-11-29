#ifndef FONTDIALOGDIRECTOR_HPP
#define FONTDIALOGDIRECTOR_HPP
#include "DialogDirector.hpp"
#include "Button.hpp"
#include "ListBox.hpp"
#include "TextBox.hpp"

class FontDialogDirector: public DialogDirector {
public:
    FontDialogDirector();
    virtual ~FontDialogDirector() {}
    virtual void widgetChanged(Widget*);
    virtual void createWidgets();

private:
    Button* okButton;
    Button* cancelButton;
    ListBox* listBox;
    TextBox* txtBox;  
};

FontDialogDirector() {
    okButton = new Button()
}

#endif /* FONTDIALOGDIRECTOR_HPP */
