#include <Servo.h>

Servo myservo;
int val;

void setup()
{
myservo.attach(12);
}
void loop()
{
val = analogRead(0);
val = map(val, 0, 1023, 0, 179);
myservo.write(val);
delay(15);
} 
