  int echoPin1 = 5;
  int echoPin2 = 6;
  int echoPin3 = 7;

  int trigPin1 = 8;
  int trigPin2 = 9;
  int trigPin3 = 10;

void setup() {
    Serial.begin (9600);
    pinMode (trigPin1, OUTPUT);
    pinMode (trigPin2, OUTPUT);
    pinMode (trigPin3, OUTPUT);

    pinMode (echoPin1, INPUT);
    pinMode (echoPin2, INPUT);
    pinMode (echoPin3, INPUT);
}

void sensor() {
  int duration1, distance1;
    digitalWrite (trigPin1, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin1, LOW);
    duration1 = pulseIn (echoPin1, HIGH);
    distance1 = (duration1/2) / 29.1;

  int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration2 = pulseIn (echoPin2, HIGH);
    distance2 = (duration2/2) / 29.1;
 
  int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration3 = pulseIn (echoPin3, HIGH);
    distance3 = (duration3/2) / 29.1;
     
      Serial.print(distance1);
      Serial.print(","); 
      Serial.print(distance2);
      Serial.print(",");
      Serial.print(distance3);
      Serial.println(",");
    
}

void loop() {
sensor();
delay(50);
}
