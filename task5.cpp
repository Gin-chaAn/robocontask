int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

void setup()
{
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

Serial.begin(9600);

Serial.println("Enter a decimal number from 0 to 15:");
}

void loop()
{

if (Serial.available() > 0)
{
int number = Serial.parseInt();

if (number >= 0 && number <= 15)
{

int bit1 = number / 8;
number = number % 8;

int bit2 = number / 4;
number = number % 4;

int bit3 = number / 2;
number = number % 2;

int bit4 = number;

digitalWrite(led1, bit1);
digitalWrite(led2, bit2);
digitalWrite(led3, bit3);
digitalWrite(led4, bit4);

Serial.print("Binary: ");
Serial.print(bit1);
Serial.print(bit2);
Serial.print(bit3);
Serial.println(bit4);
}
else
{
Serial.println("Invalid input! Enter a number from 0 to 15.");
}
}

}