//
//  Noilson Caio Teixeira de Araujo
//
//  FRONTAL PAINEL TO NOBREAK SMS - MODEL MANAGER III - http://infotecconsultoria.mercadoshops.com.br/nobreak-sms-manager-iii-bivolt-1120120_iZ61XvZmXpZ1XfZ64791702-61-3.jpgxIM.jpg
//  VIDEO: http://www.youtube.com/watch?v=zQiGfmdTwPI&feature=youtu.be
//  
//
//
//                <FRONT>
//
//
//
//                        | o | Button
//  
//                        resistance
//                        resistance
//                        resistance
//
//  Button       ----       O  led
//  Button       ----       O  led
//  pindigi9     ----       O  led
//  pindigi10    ----       O  led
//  pindigi11    ----
//  pindigi12    ----
//  pindigi13    ----      resistance
//  GND          ----       O  led
//
//
//
int pindigi13=13,pindigi12=12,pindigi11=11,pindigi10=10,pindigi9=9;
void setup() {                
  //Serial.begin(9600);
  pinMode(pindigi13, OUTPUT);
  pinMode(pindigi12, OUTPUT);
  pinMode(pindigi11, OUTPUT);
  pinMode(pindigi10, OUTPUT);
  pinMode(pindigi9, OUTPUT);
}
//
//
//
void loop() {
  digitalWrite(pindigi13, HIGH);
  delay(300);
  digitalWrite(pindigi12, HIGH);
  delay(300);
  digitalWrite(pindigi11, HIGH);
  delay(300);
  digitalWrite(pindigi10, HIGH);
  delay(300);
  digitalWrite(pindigi9, HIGH);
  delay(1000); 
//
//
//
  digitalWrite(pindigi13, HIGH);
  digitalWrite(pindigi9, LOW);
  delay(300);
  digitalWrite(pindigi10, LOW);
  delay(300);
  digitalWrite(pindigi11, LOW);
  delay(300);
  digitalWrite(pindigi12, LOW);
  delay(1000);
//
//
//
for (int x=0, y=10; x <=60; x++,y=y++)
    {
    digitalWrite(pindigi12, HIGH);
    digitalWrite(pindigi11, HIGH);
    digitalWrite(pindigi10, HIGH);
    digitalWrite(pindigi9, HIGH);
    delay (y);
    digitalWrite(pindigi12, LOW);
    digitalWrite(pindigi11, LOW);
    digitalWrite(pindigi10, LOW);
    digitalWrite(pindigi9, LOW);
    delay (y);
    }
//
//
//
    for (int x=0, y=27; x <=25; x++,y--)
    {
    digitalWrite(pindigi12, LOW);
    delay(y);
    digitalWrite(pindigi11, LOW);
    delay(y);
    digitalWrite(pindigi10, LOW);
    delay(y);
    digitalWrite(pindigi9, LOW);
//
//
//
    digitalWrite(pindigi12, HIGH);
    delay(y);
    digitalWrite(pindigi11, HIGH);
    delay(y);
    digitalWrite(pindigi10, HIGH);
    delay(y);
    digitalWrite(pindigi9, HIGH);
    delay (y);
    }  
//
//
//
}
