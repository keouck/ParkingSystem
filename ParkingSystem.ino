const int trig = 9; //Define the pins
const int echo = 10;

long time; //Define a variable called time
int distance; //Define a variable called distance
void setup() {
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT); 
Serial.begin(9600); //Begin serial monitor
}
void loop() {time = pulseIn(echo, HIGH); //Get the time from the echo pin

digitalWrite(trig, LOW); 
delayMicroseconds(2);

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);


distance= time*0.034/2; //Calculating distance between the sensor and the car

if (distance > 200) {  //If there is nothing within 200cm it means that no car is parked
   Serial.println("Space Available"); //and then print out that space is available
   
} else {
   Serial.println("Space Full"); //else say that space is full
}

}
