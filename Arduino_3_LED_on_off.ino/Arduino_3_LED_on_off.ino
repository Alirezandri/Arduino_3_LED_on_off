int ledPin_1 = 11;
int ledPin_2 = 12;
int ledPin_3= 13;
void setup(){
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  }

void loop(){
  digitalWrite(ledPin_1, HIGH);
  delay(1000);
  digitalWrite(ledPin_1, LOW);
  delay(1000);
  digitalWrite(ledPin_2, HIGH);
  delay(1000);
  digitalWrite(ledPin_2, LOW);
  delay(1000);
  digitalWrite(ledPin_3, HIGH);
  delay(1000);
  digitalWrite(ledPin_3, LOW);
  delay(1000);
  }
