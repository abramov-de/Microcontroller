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

}

void loop() {

  for (int i = 0; i <= 6; i++)
    {
      tone(BUZZER_PIN, notes[i]);
      delay(500);
    }

    delay(500);

    for (int i = 6; i >= 0; i--)
    {
      tone(BUZZER_PIN, notes[i]);
      delay(500);
    }

    delay(500);

}
