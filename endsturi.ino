
const int trig= 13;
const int echo= 12;
const int bomb= 2;
const int real= 3;
const int last= 4;


int ldr=A0;
int mut;
int la =1000;
int sure;
int mesafe;
int esk=0;
void setup() {
  // put your setup code here, to run once:
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(bomb, OUTPUT);
pinMode(real, OUTPUT);
pinMode(last, OUTPUT);
Serial.begin(9600);
}

void loop() {
mut =analogRead(ldr);
//if( mut<10)
//{digitalWrite(last, HIGH);
//}
//else
//digitalWrite(last, LOW);

la=mut;

  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  sure = pulseIn(echo, HIGH);
  mesafe = (sure/2)/28.5;
  // put your main code here, to run repeatedly:
//Serial.println(mesafe);
//Serial.print("test");
if (mesafe!=esk && mut<10)
{
  digitalWrite(real, HIGH);
  
  }
  else
      {//delay(500);
  digitalWrite(real, LOW);
        }

esk=mesafe;

if (mesafe > 10  && mut<10)
{
  digitalWrite(bomb, HIGH);
 // delay(150);
  

}
else
 digitalWrite(bomb, LOW);
//else if (mesafe < 25)
// { digitalWrite(bomb, HIGH);
//  delay(320);
//   digitalWrite(bomb, LOW);
//
//}
//else if (mesafe <= 50)
// { digitalWrite(bomb, HIGH);
//  delay(500);
//   digitalWrite(bomb, LOW);
//
//}
//else if (mesafe <= 100)
// { digitalWrite(bomb, HIGH);
//  delay(1000);
//   digitalWrite(bomb, LOW);
//
//}


}
