int pinLedRed = 11; 
int pinLedGreen = 12;
int pinSensor = 4; 
   
void setup(){ 
  pinMode(pinSensor, INPUT); 
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedRed, OUTPUT);
  digitalWrite(pinLedGreen, LOW);
  digitalWrite(pinLedRed, LOW);
  Serial.begin(9600);
}  
   
void loop(){
  if (digitalRead(pinSensor) == HIGH){ 
        digitalWrite(pinLedGreen, HIGH);
        digitalWrite(pinLedRed, LOW);
        Serial.println("---------");
  }else{ 
        digitalWrite(pinLedGreen, LOW);
        digitalWrite(pinLedRed, HIGH);
        Serial.println("Movimento");
  }    
}
