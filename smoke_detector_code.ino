#define BUZZER_PIN 3
#define RLED_PIN 8
#define GLED_PIN 9

void setup() 
{
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
  pinMode(RLED_PIN, OUTPUT);
  pinMode(GLED_PIN, OUTPUT);

}

void loop() 
{
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue > 300)
  {
    analogWrite(BUZZER_PIN, 50);
    digitalWrite(RLED_PIN, HIGH);
    digitalWrite(GLED_PIN, LOW);
  }
  else if (sensorValue > 600)
  {
    analogWrite(BUZZER_PIN, 150);
    digitalWrite(RLED_PIN, HIGH);
    digitalWrite(GLED_PIN, LOW);
  }
  
  else
  {
    analogWrite(BUZZER_PIN, 0);    
    digitalWrite(RLED_PIN, LOW); 
    digitalWrite(GLED_PIN, HIGH);
  }
  delay(1000);
}
