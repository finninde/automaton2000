#define LEDPIN 13
#define INPIN 7

void setup() { 
    pinMode(13, OUTPUT); // built in LED
    pinMode(7, INPUT_PULLUP); // pullDown switch
    Serial.begin(9600);  // 9600 bps
    Serial.println("Hello world!");
}

void loop(){
    bool buttonState = digitalRead(7);
    digitalWrite(13, buttonState);
}

