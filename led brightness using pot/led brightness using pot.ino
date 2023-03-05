unsigned char voltage;
const int analogpin = A0;

void setup() {
  pinMode(A0, INPUT);  

  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  int analogValue = analogRead(A0);
  unsigned char voltage = map(analogValue, 0, 1023, 128, 0);
  Serial.write(voltage);
  
  Serial.print(", analog: ");
  Serial.print(analogValue);  
  Serial.print(", voltage: ");
  Serial.println(voltage);
  }



void setup() {
  pinMode(8, OUTPUT);      // set LED pin as output
  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  if (Serial.available()) {
    unsigned char data_rcvd = Serial.read();   // read one byte from serial buffer and save to data_rcvd
  	unsigned char d = Serial.read();
      analogWrite(8, d); // switch LED On
    
  Serial.print(", voltage: ");
  Serial.println(d);

        }
        }

  