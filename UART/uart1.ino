unsigned char voltage;
const int analogpin = A0;

void setup() {
  pinMode(A0, INPUT);  

  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  int analogValue = analogRead(A0);
  unsigned char voltage = map(analogValue, 0, 1023, 0, 127);
  Serial.write(voltage);
  Serial.println(voltage);
  }
