int val = 0;
 void setup()
 {
 Serial.begin(9600);
 pinMode(A0, INPUT);
 pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
 }
 void loop()
 {
 val = analogRead(A0);
  
 Serial.println(val);
 delay(50);
 if (val >= 700)
 {
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 }
 else
 {
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 }
 printOutputState();
 }
 void printOutputState()
 {
 Serial.print("Pin 6: ");
 Serial.println(digitalRead(6) == HIGH ? "HIGH" : "LOW");
 Serial.print("Pin 7: ");
 Serial.println(digitalRead(7) == HIGH ? "HIGH" : "LOW");
 }
