const int BUZZER_PIN = 9;

float notes[] =
{
  261.63,
  293.66,
  329.63,
  349.23,
  392.00,
  440.00,
  493.88
};

void setup() {

  pinMode(BUZZER_PIN, OUTPUT);

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);

}

void loop() {

  if (!digitalRead(2))
    tone(BUZZER_PIN, notes[0]);

  else if (!digitalRead(3))
    tone(BUZZER_PIN, notes[1]);

  else if (!digitalRead(4))
    tone(BUZZER_PIN, notes[2]);

  else if (!digitalRead(5))
    tone(BUZZER_PIN, notes[3]);

  else if (!digitalRead(6))
    tone(BUZZER_PIN, notes[4]);

  else if (!digitalRead(7))
    tone(BUZZER_PIN, notes[5]);

  else if (!digitalRead(8))
    tone(BUZZER_PIN, notes[6]);

  else
  {
    noTone(BUZZER_PIN);
  }

}
