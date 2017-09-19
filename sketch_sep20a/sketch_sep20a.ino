// UTFT_ViewFont (C)2014 Henning Karlsen
// web: http://www.henningkarlsen.com/electronics
//
// This program is a demo of the included fonts.
//
// This demo was made for modules with a screen resolution 
// of 320x240 pixels.
//
// This program requires the UTFT library.
// files.banggood.com/2016/06/3.2inch_Arduino_Mega2560_ILI9481_V1.0.zip
// https://www.youtube.com/watch?v=GP5of6CtH68


#include <UTFT.h>

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];

// Set the pins to the correct ones for your development shield
// ------------------------------------------------------------
// Arduino Uno / 2009:
// -------------------
// Standard Arduino Uno/2009 shield            : <display model>,A5,A4,A3,A2
// DisplayModule Arduino Uno TFT shield        : <display model>,A5,A4,A3,A2
//
// Arduino Mega:
// -------------------
// Standard Arduino Mega/Due shield            : <display model>,38,39,40,41
// CTE TFT LCD/SD Shield for Arduino Mega      : <display model>,38,39,40,41
//
// Remember to change the model parameter to suit your display module!
UTFT myGLCD(HX8357C,38,39,40,41);
int i=1;

void setup()
{
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myGLCD.fillScr(255,255,255);

  myGLCD.setColor(225, 0, 225); 
  myGLCD.setBackColor(255, 255, 255);
  myGLCD.setFont(BigFont);
  myGLCD.print("Kurt Barcelona", CENTER, 32);
  myGLCD.setFont(SmallFont);
  myGLCD.print("Millisecond countup timer", CENTER, 48);
}

void loop()
{
  //myGLCD.clrScr();
  myGLCD.setColor(0, 225, 150); 
  myGLCD.setBackColor(255, 255, 255);
  myGLCD.setFont(SevenSegNumFont);
  /*
  myGLCD.print(" !\"#$%&'()*+,-./", CENTER, 0);
  myGLCD.print("0123456789:;<=>?", CENTER, 16);
  myGLCD.print("@ABCDEFGHIJKLMNO", CENTER, 32);
  myGLCD.print("PQRSTUVWXYZ[\\]^_", CENTER, 48);
  myGLCD.print("`abcdefghijklmno", CENTER, 64);
  myGLCD.print("pqrstuvwxyz{|}~ ", CENTER, 80);

  myGLCD.setFont(SmallFont);
  myGLCD.print(" !\"#$%&'()*+,-./0123456789:;<=>?", CENTER, 120);
  myGLCD.print("@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_", CENTER, 132);
  myGLCD.print("`abcdefghijklmnopqrstuvwxyz{|}~ ", CENTER, 144);
  */

  myGLCD.print(String(i), CENTER, 130);
  i=i+1;
  // delay();
  // while(1) {};
}

