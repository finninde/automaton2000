#define LEDPIN 13
#define INPIN 7

bool buttonState;

void setup() { 
    pinMode(LEDPIN, OUTPUT); // built in LED
    pinMode(INPIN, INPUT_PULLUP); // pullUp switch
    Serial.begin(9600);  // 9600 bps
    buttonState = digitalRead(INPIN);
}

void loop() {
    if (buttonState != digitalRead(INPIN)) {
        buttonState = digitalRead(INPIN);
        Serial.print(buttonState);
    }
    digitalWrite(LEDPIN, buttonState); // debug LED
}

