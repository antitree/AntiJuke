//AntiJuke
//used to hijack the remote and bitbang the correct data over
// its RF circuit
//
//setup: 
// connect J2 out to arduino pin 7
// put a resister in between arduino and the remote to put the voltage at 3.0v
// supply 3.0v of power to J1.27 and J1.92
// the remote will broadcast the bits in the loop like the normal remote


int ledPin = 13;
int inPin = 7;
int iShort = 550; //standard interval in microseconds
int iLong = iShort * 3; //long interval in microseconds

String transmit;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, OUTPUT);
  
  Serial.begin(9600);
}

void preamble(){
  
}

String jukebox(){
  String jukeboxcode = String(186, BIN);
  jukeboxcode = fixZeros(jukeboxcode);
  Serial.println("Jukeboxcode: " + jukeboxcode);
  return jukeboxcode;

}

String pin(int pin){
  String pincode = String(pin, BIN);
  pincode = fixZeros(pincode);
  Serial.println("Pincode: " + pincode);
  return pincode;
}

String fixZeros(String val){
 int zeros = 8 - val.length(); 
 String fixed = val;
 for (int i=0; i<zeros; i++){
    fixed = "0" + fixed;
 }
 return fixed;
}

String buttonId(int id){
  String buttonIDcode = String(id, BIN);
  buttonIDcode = fixZeros(buttonIDcode);
  Serial.println("ButtonIDCode: " + buttonIDcode);
  String buttonDIcode;
  for (int i = 0;i < 8;i++){
    if (String(buttonIDcode.charAt(i)) == "1") {
      buttonDIcode = String(buttonDIcode + 0);
    }
    else{
      buttonDIcode = String(buttonDIcode + 1);
    }
  }
  Serial.println("ButtonDICode: " + buttonDIcode);
  String buttonIDDIcode = String(buttonIDcode + buttonDIcode);
  return buttonIDDIcode;
}

void transmission(String data){
  Serial.println("Data length: " + String(data.length()));
  for (int i=0;i < data.length();i++){
    if (String(data.charAt(i)) == "0"){
     //transmit a 0 
     digitalWrite(inPin, LOW);
     delayMicroseconds(iShort);
     digitalWrite(inPin, HIGH);
     delayMicroseconds(iShort);
     Serial.print("0");
    }
    else{
      //transmit a 1
      digitalWrite(inPin, LOW);  
      delayMicroseconds(iShort);
      digitalWrite(inPin, HIGH); 
      delayMicroseconds(iLong);
      Serial.print("1");
    }
    
  }
  Serial.println("Transmission sent: " + data);
  
}


int buttonLookup(char button){
  
}

void oldloop() {
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
//      digitalWrite(inPin, LOW);  // turn LED OFF
//  delayMicroseconds(520); 
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
  
  delay(42);//actual
  //delay(500);
  
} 

void loop(){
  Serial.println("Starting jukebox generator...");
  String transmit = String(jukebox() + pin(0) + buttonId(30));
  Serial.println("Transmit length: " + String(transmit.length()));
  for (int i = 0;i < 45; i++){
    transmission(transmit);
  }
  delay(10000);  
  
}
