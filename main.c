
void setup(){
      pinMode(13, OUTPUT); // built in LED
        pinMode(7, INPUT_PULLUP); // pullDown switch
}

void loop(){
      bool buttonState = digitalRead(7);
        digitalWrite(13, buttonState);
}

