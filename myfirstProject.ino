/*
  My light house welcome project
*/


byte soundPlayed;

void setup() {
  // initialize stuff and shizzle
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
}

// LOOOOP
void loop() {
  if( digitalRead(10) ){
      tone(12, 3000);
  } else {
      noTone(12);
  }
}
