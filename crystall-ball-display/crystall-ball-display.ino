#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Ahoj Kamilko,");

  lcd.setCursor(0, 1);
  lcd.print("zaklep se mnou..");
}

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();

      switch(reply) {
        case 0:
          lcd.setCursor(0, 0);
          lcd.print("Popravde?");
          lcd.setCursor(0, 1);
          lcd.print("Jsi krasna!");
          break;
        case 1:
          lcd.setCursor(0, 0);
          lcd.print("Hmm,");
          lcd.setCursor(0, 1);
          lcd.print("umis byt mila!");
          break;
        case 2:
          lcd.setCursor(0, 0);
          lcd.print("Nekdy jsi");
          lcd.setCursor(0, 1);
          lcd.print("pekna dracice.");
          break;
        case 3:
          lcd.setCursor(0, 0);
          lcd.print("Mam rad,");
          lcd.setCursor(0, 1);
          lcd.print("kdyz se smejes.");
          break;
        case 4:
          lcd.setCursor(0, 0);
          lcd.print("A dal?");
          lcd.setCursor(0, 1);        
          lcd.print("Jsi sikulka.");
          break;
        case 5:
          lcd.setCursor(0, 0);
          lcd.print("Mas krasny");
          lcd.setCursor(0, 1);
          lcd.print("zadecek :-)");
          break;
        case 6:
          lcd.setCursor(0, 0);
          lcd.print("Laskavost je ");
          lcd.setCursor(0, 1);
          lcd.print("tvoje synonymum.");
          break;
        case 7:
          lcd.setCursor(0, 0);
          lcd.print("Miluji te!!!");
          lcd.setCursor(0, 1);
          lcd.print("Honzik");
          break;
      }
    }    
  }

  prevSwitchState = switchState;
}
