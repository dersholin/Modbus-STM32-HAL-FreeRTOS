/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    ToggleLed.setXY(83, 94);
    ToggleLed.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID));
    ToggleLed.setAction(buttonCallback);

    textArea1.setXY(30, 160);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID9).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));

    FlexBtDown.setBoxWithBorderPosition(0, 0, 50, 30);
    FlexBtDown.setBorderSize(5);
    FlexBtDown.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    FlexBtDown.setText(TypedText(T_SINGLEUSEID2));
    FlexBtDown.setTextPosition(0, 0, 50, 30);
    FlexBtDown.setTextColors(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10), touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));
    FlexBtDown.setPosition(48, 206, 50, 30);
    FlexBtDown.setAction(flexButtonCallback);

    FlexBtUp.setBoxWithBorderPosition(0, 0, 50, 30);
    FlexBtUp.setBorderSize(5);
    FlexBtUp.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(250, 2, 2), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    FlexBtUp.setText(TypedText(T_SINGLEUSEID3));
    FlexBtUp.setTextPosition(0, 0, 50, 30);
    FlexBtUp.setTextColors(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10), touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));
    FlexBtUp.setPosition(133, 206, 50, 30);
    FlexBtUp.setAction(flexButtonCallback);

    textArea1_1.setXY(30, 101);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));

    textArea1_1_1.setXY(48, 30);
    textArea1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));

    add(__background);
    add(box1);
    add(ToggleLed);
    add(textArea1);
    add(FlexBtDown);
    add(FlexBtUp);
    add(textArea1_1);
    add(textArea1_1_1);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &ToggleLed)
    {
        //Interaction1
        //When ToggleLed clicked call virtual function
        //Call functionLedToggle
        functionLedToggle();
    }
}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &FlexBtDown)
    {
        //Interaction2
        //When FlexBtDown clicked call virtual function
        //Call functionBtDown
        functionBtDown();
    }
    else if (&src == &FlexBtUp)
    {
        //Interaction3
        //When FlexBtUp clicked call virtual function
        //Call functionBtUp
        functionBtUp();
    }
}
