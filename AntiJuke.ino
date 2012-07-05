int ledPin = 13;
int inPin = 7;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  //val = digitalRead(inPin);  // read input value
  //if (val == HIGH) {         // check if the input is HIGH (button released)
  //BITBANG!!
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(8800);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(4400);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720); //40ms
  
    digitalWrite(inPin, LOW);  // turn LED OFF

  delayMicroseconds(480);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(480);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(480);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
    delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720); //50ms
  
  
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
    digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 

  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520);
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520);  
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
  digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520);  
  //70ms
  
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);

      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(600);
  //80ms
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
      digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
    digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
        digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
    digitalWrite(inPin, HIGH);  // turn LED ON
  delayMicroseconds(1720);
          digitalWrite(inPin, LOW);  // turn LED OFF
  delayMicroseconds(520); 
  digitalWrite(inPin, HIGH);  // turn LED ON
  //end of transmission
  //}
  
  delay(42);
}
