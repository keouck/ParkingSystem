const int trig = 9;
const int echo = 10;

long time;
int distance;
void setup() {
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600); 
}
void loop() {time = pulseIn(echo, HIGH);


digitalWrite(trig, LOW);
delayMicroseconds(2);

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);


distance= time*0.034/2;

if (distance > 200) {
   Serial.println("Space Available");
   //Serial.println(distance);
   
} else {
   Serial.println("Space Full");
   //Serial.println(distance);
}

}
