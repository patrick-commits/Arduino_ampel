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
  // Ampel 1 auf Grün Ampel 2 auf rot
  digitalWrite(amepl1_rot, LOW);
  digitalWrite(amepl1_gelb, LOW);
  digitalWrite(amepl1_gruen, HIGH);
  digitalWrite(amepl2_rot, HIGH);
  digitalWrite(amepl2_gelb, LOW);
  digitalWrite(amepl2_gruen, LOW);

  delay(20000);

  // Ampel 2 auf Grün Ampel 1 auf rot
  
// gelbe Phase für 2 Sekunden nach rot Ampel 1
  digitalWrite(amepl1_rot, LOW);
  digitalWrite(amepl1_gelb, HIGH);
  digitalWrite(amepl1_gruen, LOW);
  delay(4000);
  // auf rot schalten
  digitalWrite(amepl1_rot, HIGH);
  digitalWrite(amepl1_gelb, LOW);
  digitalWrite(amepl1_gruen, LOW);

delay(2000);
// gelbe Phase für 2 Sekunden nach Gruen Ampel 2

digitalWrite(amepl2_rot, LOW);
digitalWrite(amepl2_gelb, HIGH);
digitalWrite(amepl2_gruen, LOW);
  delay(4000);
//auf Gruen schalten
digitalWrite(amepl2_rot, LOW);
digitalWrite(amepl2_gelb, LOW);
digitalWrite(amepl2_gruen, HIGH);


delay(20000);

// gelbe Phase für 2 Sekunden nach rot Ampel 2

digitalWrite(amepl2_rot, LOW);
digitalWrite(amepl2_gelb, HIGH);
digitalWrite(amepl2_gruen, LOW);
delay(4000);

// auf rot schalten
digitalWrite(amepl2_rot, HIGH);
digitalWrite(amepl2_gelb, LOW);
digitalWrite(amepl2_gruen, LOW);

// gelbe Phase für 2 Sekunden nach Gruen Ampel 1

digitalWrite(amepl1_rot, LOW);
digitalWrite(amepl1_gelb, HIGH);
digitalWrite(amepl1_gruen, LOW);
delay(4000);



  
  
  
}
