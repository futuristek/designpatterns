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

FontDialogDirector::FontDialogDirector() {
    okButton = new Button(this);
    cancelButton = new Button(this);
    listBox = new ListBox(this);
    txtBox = new TextBox(this);
}

void FontDialogDirector::widgetChanged(Widget* w) {
    if (w == okButton) {
        /* apply font change */
    } else if (w == cancelButton) {
        /* cancel font change */
    } else if (w == listBox) {
        auto txt = listBox->getSelection();
        txtBox->setText(txt);
    } else if (w == txtBox) {
        /* do nothing now */
    } else {
        // Unexpected branch.
    }
}

void createWidgets() {
    // Display all widgets in the dialogWindow
}

#endif /* FONTDIALOGDIRECTOR_HPP */
