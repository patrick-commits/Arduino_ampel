 /* Steuerung Ampel für Jamie
 *  Pinbelegung:
 *  D0:        rote LED von Ampel 1
 *  D1:        gelbe LED von Ampel 1
 *  D2:        gruene LED von Ampel 1
 *  D4:        rote LED von Ampel 2
 *  D5:        gelbe LED von Ampel 2
 *  D6:        gruene LED von Ampel 2

 */


int amepl1_rot   = 0;  // Pin 3 des Arduino wird zur Ansteuerung der roten LED der 1. Ampel verwendet
int amepl1_gelb  = 1;  // Pin 4 des Arduino wird zur Ansteuerung der gelben LED der 1. Ampel verwendet
int amepl1_gruen = 2;  // Pin 5 des Arduino wird zur Ansteuerung der gruenen LED der 1. Ampel verwendet
 
int amepl2_rot   = 4;  // Pin 3 des Arduino wird zur Ansteuerung der roten LED der 2. Ampel verwendet
int amepl2_gelb  = 5;  // Pin 4 des Arduino wird zur Ansteuerung der gelben LED der 2. Ampel verwendet
int amepl2_gruen = 6;  // Pin 5 des Arduino wird zur Ansteuerung der gruenen LED der 2. Ampel verwendet

void setup()
{
  pinMode(amepl1_rot, OUTPUT);
  pinMode(amepl1_gelb, OUTPUT);
  pinMode(amepl1_gruen, OUTPUT);
  pinMode(amepl2_rot, OUTPUT);
  pinMode(amepl2_gelb, OUTPUT);
  pinMode(amepl2_gruen, OUTPUT);
}



void loop()
{
  
  
 // Beide ROT1

digitalWrite(amepl1_rot, HIGH);
  digitalWrite(amepl1_gelb, LOW);
  digitalWrite(amepl1_gruen, LOW);
  digitalWrite(amepl2_rot, HIGH);
  digitalWrite(amepl2_gelb, LOW);
  digitalWrite(amepl2_gruen, LOW);

   
delay(2000); 
  
  
  
  // Ampel 2 auf ROT Ampel 1 auf blink
  digitalWrite(amepl1_rot, LOW);
  digitalWrite(amepl1_gelb, HIGH);
  digitalWrite(amepl1_gruen, LOW);
  digitalWrite(amepl2_rot, HIGH);
  digitalWrite(amepl2_gelb, LOW);
  digitalWrite(amepl2_gruen, LOW);
  delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
   delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
   delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
   delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);

delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);
delay(500);
   digitalWrite(amepl1_gelb, LOW);
   delay(500);
   digitalWrite(amepl1_gelb, HIGH);




// Beide ROT1

digitalWrite(amepl1_rot, HIGH);
  digitalWrite(amepl1_gelb, LOW);
  digitalWrite(amepl1_gruen, LOW);
  digitalWrite(amepl2_rot, HIGH);
  digitalWrite(amepl2_gelb, LOW);
  digitalWrite(amepl2_gruen, LOW);

   
delay(2000);

   // Ampel 1 auf Grün Ampel 2 auf blink
   
   
  digitalWrite(amepl1_rot, HIGH);
  digitalWrite(amepl1_gelb, LOW);
  digitalWrite(amepl1_gruen, LOW);
  digitalWrite(amepl2_rot, LOW);
  digitalWrite(amepl2_gelb, LOW);
  digitalWrite(amepl2_gruen, LOW);
  delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
   delay(500);
   digitalWrite(amepl2_gelb, LOW);
   delay(500);
   digitalWrite(amepl2_gelb, HIGH);
 


  
  
  
}
