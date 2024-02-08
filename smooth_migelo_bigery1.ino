int button1 = 2;
int button2 = 4;

int p2 = A5;
int p1 = A4;

int motor1 = 9;
int motor2 = 10;
int sp1 = 0;
int sp2 = 0;
int reading=0;
void setup()
{
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);


 // pinMode(button1, INPUT);
  //pinMode(button2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int motorValue1 = analogRead(p1); // read potentiometer 1 value
  int motorValue2 = analogRead(p2);

  if (digitalRead(button1) == HIGH  ||analogRead(p1) == 'a') {

        int motorvalue1 = analogRead(p1);

    int sp1 = map(motorvalue1, 0, 1023, 0, 255);

    analogWrite(motor1, sp1);


  }
  else if(analogRead(p1) == 'b'){
   analogWrite(motor1, 0);
  }

  if (digitalRead(button2) == HIGH ||analogRead(p2) == 'c') {

    int motorvalue2 = analogRead(p2);
    int sp2 = map(motorvalue2, 0, 1023, 0, 255);

    analogWrite(motor2, sp2);
  }
  else if(analogRead(p2) == 'd') {
    analogWrite(motor2, 0);
  }
if (Serial.available() > 0) {
int reading1=analogRead(p1);
int reading2=analogRead(p2);

    reading1 = Serial.read();
     reading2 = Serial.read();

 
    }
}