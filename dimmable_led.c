int light = 0;
int fade = 5;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  delay(25);
  analogWrite(3, light);
  light = light + fade;
  if (light == 0 || light == 255)
  {
    fade = -fade;
  }
}
