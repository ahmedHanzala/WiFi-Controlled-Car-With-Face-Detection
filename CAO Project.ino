#define left_forward 14
#define right_forward 13
#define left_backward 15
#define right_backward 12


#define Analog_Output 2
#define Digital_Output 4



void setup() 
{
  //Serial.begin(9600);
  pinMode(left_forward,OUTPUT);
  pinMode(right_forward,OUTPUT);
  pinMode(left_backward,OUTPUT);
  pinMode(right_backward,OUTPUT);

  pinMode(Analog_Output, OUTPUT);
  pinMode(Digital_Output, OUTPUT);
}

void loop()
{
  delay(1000);
  digitalWrite(left_forward,HIGH);
  digitalWrite(right_forward,HIGH);
  digitalWrite(left_backward,LOW);
  digitalWrite(right_backward,LOW);
  delay(1000);
  digitalWrite(left_forward,LOW);
  digitalWrite(right_forward,LOW);
  digitalWrite(left_backward,HIGH);
  digitalWrite(right_backward,HIGH);

  //Serial.println(analogRead(Analog_Output));
}