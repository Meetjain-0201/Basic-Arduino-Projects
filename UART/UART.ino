
void setup() {
  pinMode(9, OUTPUT);      // set LED pin as output
  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    unsigned int data_rcvd = Serial.read();
      unsigned int voltage = map(data_rcvd, 0, 127, 0, 255);
      Serial.println(voltage);
      analogWrite(9, voltage); // switch LED On
  
	
        }
        }



                