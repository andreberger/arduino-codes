int carRed = 12;
int carYellow = 11;
int carGreen = 10;

int ledG1 = 9;
int ledG2 = 8;
int ledG3 = 7;
int ledG4 = 6;
int ledG5 = 5;

int ledR1 = 4;
int ledR2 = 3;
int ledR3 = 2;

int myLeds[]={750,500,250,0};
int myLeds1[]={0, 250, 500,750, 1000};
void setup() {
Serial.begin(9600);
pinMode(carRed, OUTPUT);
pinMode(carYellow, OUTPUT);
pinMode(carGreen, OUTPUT);

pinMode(ledG1, OUTPUT);
pinMode(ledG2, OUTPUT);
pinMode(ledG3, OUTPUT);
pinMode(ledG4, OUTPUT);
pinMode(ledG5, OUTPUT);

pinMode(ledR1, OUTPUT);
pinMode(ledR2, OUTPUT);
pinMode(ledR3, OUTPUT);
}
void loop() { 
Serial.println("Verde acende");
digitalWrite(carRed, LOW);
digitalWrite(carYellow, LOW);
digitalWrite(carGreen, HIGH);
delay(5000);
for (int g = 0; g < 1; g++){
Serial.print("G:");Serial.println(myLeds[g]);
if (myLeds[0])
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, HIGH);
  digitalWrite(ledG4, HIGH);
  digitalWrite(ledG5, HIGH);
  delay(1000);
}
if (myLeds[1])
{
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, HIGH);
  digitalWrite(ledG5, HIGH);
  delay(1000);
}
if (myLeds[2])
{
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledG5, HIGH);
  delay(1000);
}
if (myLeds[3])
{
  digitalWrite(ledG4, LOW);
  digitalWrite(ledG5, LOW);
  delay(1000);
}
if (myLeds[4])
{
  digitalWrite(ledG5, LOW);
  delay(1000);
}
}
Serial.println("Amarelo acende");
digitalWrite(carRed, LOW);
digitalWrite(carYellow, HIGH);
digitalWrite(carGreen, LOW);
delay(1000);
Serial.println("Vermelho acende");
digitalWrite(carRed, HIGH);
digitalWrite(carYellow, LOW);
digitalWrite(carGreen, LOW);
delay(2500);
for (int r = 0; r < 1; r++){
Serial.print("R:");Serial.println(myLeds1[r]);
if (myLeds1[0])
{
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  delay(1000);
}
if (myLeds1[1])
{
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledR3, HIGH);
  delay(1000);
}
if (myLeds1[2])
{
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledR3, LOW);
  delay(1000);
}
}
}
