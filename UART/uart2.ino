
void setup() {
  pinMode(9, OUTPUT);      // set LED pin as output
  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    int8_t data_rcvd = Serial.read();
    Serial.write(data_rcvd);
      digitalWrite(9, data_rcvd); // switch LED On
  
	
        }
        }

                