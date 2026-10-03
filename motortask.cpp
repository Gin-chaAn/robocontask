const int triggerPin = 12;
const int echoPin = 13;
const int potpin = A0;
const int EN1= 3;
const int IN1 = 1;
const int IN2 = 2;
const int 
const int EN2= 3;
const int INp = 1;
const int INp = 2;
const int SW1= 12;
const int SW2 = 13;

void setup(){
PinMode(triggerPin,output);
PinMode(echoPin,input);
PinMode(potpin,input);
PinMode(EN1,output);
PinMode(EN2,output);
PinMode(IN1,output);
  PinMode(IN2,output);
  PinMode(INp,output);
  PinMode(SW1,input);
  PinMode(SW2,input);
  serial.begin(9600);
  

}

digitalWrite(triggerpin,low);
delaymicrosecond(2);
digitalWrite(triggerpin,high);
delaymicrosecond(10);
digitalWrite(triggerpin,low);


duration = pulseIn(echopin,high);
distance = duration*0.034/2
  


