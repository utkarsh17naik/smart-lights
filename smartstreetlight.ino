# Audruino1
int ledPin1 = 3; //LED anode connected to digital pin 3
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 12;
//int ledPin5 = 13;

int inputPin1 = A0; //infrared proximity switch connected to digital pin A1
int inputPin2 = A1;
int inputPin3 = A2;
int inputPin4 = A3;


int val1 = 0; //this variable will read the value from the sensor
int val2 = 0;
int val3 = 0;
int val4 = 0;


void setup() 
{
pinMode(ledPin1, OUTPUT); //declare LED as output
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
//pinMode(ledPin5, OUTPUT);

pinMode(inputPin1, INPUT); //declare infrared sensor as input
pinMode(inputPin2, INPUT);
pinMode(inputPin3, INPUT);
pinMode(inputPin4, INPUT);
//pinMode(inputPin5, INPUT);

}

void loop(){

val1 = digitalRead(inputPin1); // read input value

if (val1 == HIGH) 
{ //check if the input is HIGH
digitalWrite(ledPin1, LOW); //LED is off
} else 
{
digitalWrite(ledPin1, HIGH); //LED is turned on
}

val2 = digitalRead(inputPin2); // read input value

if (val2 == HIGH) 
{ //check if the input is HIGH
digitalWrite(ledPin2, LOW); //LED is off
} else 
{
digitalWrite(ledPin2, HIGH); //LED is turned on
}

val3 = digitalRead(inputPin3); // read input value

if (val3 == HIGH) 
{ //check if the input is HIGH
digitalWrite(ledPin3, LOW); //LED is off
} else 
{
digitalWrite(ledPin3, HIGH); //LED is turned on
}

val4 = digitalRead(inputPin4); // read input value

if (val4 == HIGH) 
{ //check if the input is HIGH
digitalWrite(ledPin4, LOW); //LED is off
} else 
{
digitalWrite(ledPin4, HIGH); //LED is turned on
}
}
