const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.0340 / 2;
  distanceInch = duration * 0.01330 / 2;
  Serial.print("Distance in Centimeters: ");
  Serial.println(distanceInch);
  Serial.println("");
  delay(500);
}
