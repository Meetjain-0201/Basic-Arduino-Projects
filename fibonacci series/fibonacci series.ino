static int i = 1;
void setup() {

pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(8, INPUT);

Serial.begin(9600);

}


void loop() {
  if(digitalRead(8) == 1){
     delay(200);
    if (i == 1 || i == 2 || i == 5 || i == 6) {
    digitalWrite(11, LOW);
    delay(500);
    }
    else{
      digitalWrite(11, HIGH);
      delay(500);
    }
  
    if(i < 5){
    digitalWrite(10, LOW);
    delay(500);
    }
    else{
      digitalWrite(10, HIGH);
      delay(500);
    }
     if(i % 2 == 0 ){
      digitalWrite(12, HIGH);
      delay(500);
     }
      else{
      digitalWrite(12, LOW);
      delay(500);
    }
    Serial.print(10);
    Serial.print(11);
    Serial.print(12);
    Serial.println(i);
    i = i + 1;
      if(i > 8){
       i = 1;
      }
  }
}

 
   
 

