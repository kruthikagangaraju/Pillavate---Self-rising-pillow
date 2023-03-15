int motor1pin1 = 2;
int motor1pin2 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() ){
    char userInput = Serial.read();

    if (userInput == 's'){
      Serial.println("Up");
      digitalWrite(motor1pin1, HIGH);
      digitalWrite(motor1pin2, LOW);
    }
    if (userInput == 'w'){
      Serial.println("Down");
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, HIGH);
    }
  }

}