#include <LiquidCrystal.h>

// Game state
unsigned long time;
unsigned long reactionTime;
bool buttonPressed;
bool newGame;
bool gameInProgress = false;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
    pinMode(8, OUTPUT);  // New game
    pinMode(9, OUTPUT);  // Reaction Testing
    pinMode(10, OUTPUT); // Game started
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
}

void loop()
{
    if (!gameInProgress)
    {
        // default game state
        digitalWrite(8, HIGH);
    }

    // New game button pressed
    if (analogRead(A0))
    {
        newGame = true;
    }

    // Reaction button pressed
    if (analogRead(A1))
    {
        buttonPressed = true;
    }

    if (newGame)
    {
        gameInProgress = true;
        lcd.clear();
        // Delay 3s before game starts
        lcd.print("New Game");
        delay(500);

        lcd.clear();
        lcd.setCursor(0, 1);
        lcd.print("3");
        lcd.clear();
        lcd.print("2");
        lcd.clear();
        lcd.print("1");
        lcd.clear();
        lcd.print("Game Started");
        lcd.clear();
        digitalWrite(8, LOW);
        digitalWrite(10, HIGH);
        delay(random(100, 2500)); // Delay random amount before showing blue LED
        digitalWrite(9, HIGH);
        time = millis();
        // Turn off new game after initialising, so we avoid entering this loop again
        newGame = false;
    }

    if (buttonPressed)
    {
        digitalWrite(9, LOW);
        reactionTime = millis() - time;
        // After game has ended:
        // Print a message to the LCD.
        lcd.print("Reaction Time: ");
        lcd.setCursor(0, 1); // bottom left
        lcd.print(reactionTime);
        lcd.print("ms");
        // Reset game states
        digitalWrite(8, HIGH);
        digitalWrite(10, LOW);
        reactionTime = 0;
        gameInProgress = false;
        buttonPressed = false;
        delay(3000);
        lcd.clear();
    }
}