long unsigned previousMillis = 0;
unsigned long currentMillis;
const long interval = 1000;
int ledstate = LOW;

void setup() {
  pinMode(13, OUTPUT);
}

void loop(){
  currentMillis = millis();

   if (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    if (digitalRead(13) == 0){
      digitalWrite(13, HIGH);
    }
    else{
      digitalWrite(13, LOW);
    }
    
   }
}
