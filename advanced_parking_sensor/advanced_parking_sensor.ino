#include <LiquidCrystal.h>

#define echoPin 6
#define trigPin 7
#define buzzerPin 8
#define switchPin 9
#define ledPin 13
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int maximumRange = 400;
int minimumRange = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  int olcum = mesafe(maximumRange, minimumRange);

  if (digitalRead(switchPin) == true)
  {

    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(olcum*1.8);
    digitalWrite(buzzerPin, LOW);
    delay(olcum*4);
    }
  else{
    digitalWrite(ledPin, LOW);
  }
}

int mesafe(int maxrange ,int minrange)
{
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print(distance);

  if(distance >= maxrange || distance <= minrange)
  return 0;
  return distance;
}
