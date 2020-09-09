/***********************
 * Universal Logic Gates
 * © Sagara Sumathipala
 * 09/09/2020
 */

int in1 = 2; //Input 1
int in2 = 3; //Input 2 

int out_and = 4; //Output as AND Gate
int out_or = 5; //Output as OR Gate
int out_not_in1 = 6; //Output as NOT Gate
int out_not_in2 =7; //Output as NOT Gate
int out_xor =8; //Output as XOR Gate
int out_nxor =9; //Output as NXOR Gate

void setup() {
  pinMode(in1, INPUT_PULLUP);
  pinMode(in2, INPUT_PULLUP);

  pinMode(out_and, OUTPUT);
  pinMode(out_or, OUTPUT);
  pinMode(out_not_in1, OUTPUT);
  pinMode(out_not_in2, OUTPUT);
  pinMode(out_xor, OUTPUT);
  pinMode(out_nxor, OUTPUT);
}

void loop() {
boolean a1 = digitalRead(in1);
boolean a2 = digitalRead(in2);

boolean  a = !a1; //NOT a1
boolean  b = !a2; //NOT a2
boolean  c = (a1||a2); // a1 OR a2
boolean  d = (a1&&a2); // a1 AND a2
boolean  e = (a1^a2); //XOR
boolean  f = !(a1^a2);//NXOR

  digitalWrite(out_not_in1, a);
  digitalWrite(out_not_in2, b);
  digitalWrite(out_and, d);
  digitalWrite(out_or, c);
  digitalWrite(out_xor, e);
  digitalWrite(out_nxor, f);
}
