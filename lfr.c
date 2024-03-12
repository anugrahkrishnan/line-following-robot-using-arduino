int SL3 = 19;
int SL2 = 18;
int SL1 = 17;
int SML = 16;
int SMR = 15;
int SR1 = 14;   
int SR2 = 13;
int SR3 = 12;

int RMP = 5;
int RMN = 6;
int LMP = 11;
int LMN = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(SL3, INPUT);
  pinMode(SL2, INPUT);
  pinMode(SL1, INPUT);
  pinMode(SML, INPUT);
  pinMode(SMR, INPUT);
  pinMode(SR1, INPUT);
  pinMode(SR2, INPUT);
  pinMode(SR3, INPUT);

  pinMode(LMP, OUTPUT);
  pinMode(LMN, OUTPUT);
  pinMode(RMP, OUTPUT);
  pinMode(RMN, OUTPUT);
  Serial.begin(9600);
}
void loop() {

  if (digitalRead(SR3) == HIGH || digitalRead(SR2) == HIGH || digitalRead(SR1) == HIGH )
  {
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, HIGH);
    digitalWrite(RMP, LOW);
    digitalWrite(RMN, LOW);
    Serial.println("Right");
  }
  else if (digitalRead(SL3) == HIGH || digitalRead(SL2) == HIGH || digitalRead(SL1) == HIGH )
  {
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, LOW);
    digitalWrite(RMP, HIGH);
    digitalWrite(RMN, LOW);
    Serial.println("Left");
  }

  else
  {
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, HIGH);
    digitalWrite(RMP, HIGH);
    digitalWrite(RMN, LOW);
    Serial.println("FORWARD");
  }

}
