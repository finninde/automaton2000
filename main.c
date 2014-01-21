#define LEDPIN 13
#define INPIN 7

void setup() { 
    pinMode(LEDPIN, OUTPUT); // built in LED
    pinMode(INPIN, INPUT_PULLUP); // pullDown switch
    Serial.begin(9600);  // 9600 bps
    Serial.println("Hello world!");
}

void loop(){
    bool buttonState = digitalRead(INPIN);
    digitalWrite(LEDPIN, buttonState);
}

