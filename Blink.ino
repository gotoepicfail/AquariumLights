int inPin = 21; 
int maximum = 10;
int minimum = 1;
boolean pressed = false; 
boolean lightsOn = false;
int outPin=4;
void setup(){
    Serial.begin(9600);
    pinMode(inPin, INPUT);
    pinMode(outPin,OUTPUT); 
}
void loop(){
  
    int strength = analogRead(inPin);
    Serial.print(strength);
    delay (500);
    strength = round(255*(strength/maximum));
    if(strength >250) {
        strength = 255;}
    if(strength < 5) {
        strength = 0;}
    analogWrite(outPin,HIGH);

}
     
