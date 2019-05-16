#ifndef ARDUINO_PROJECTS_DISPLAYMENU_H
#define ARDUINO_PROJECTS_DISPLAYMENU_H

#include <Service.h>
#include <Display.h>
#include <Motor.h>
#include <Menu.h>

class WinderMenu : Service, public Navigation {
private:
    Display *display = nullptr;
protected:

    void print(LOCALE locale, Display *display, bool nl) const override;

public:
    WinderMenu(Display *display, Motor *motor);

    void interact() override;

    void next() override;

    void prev() override;

    void cycle() override;
};


#endif //ARDUINO_PROJECTS_DISPLAYMENU_H