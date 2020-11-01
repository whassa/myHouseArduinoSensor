/*
  My light house welcome project
*/
#include <SimpleSDAudio.h>

byte soundPlayed;
int Capteur= 2;
char sound[] ="swag.wav";

void setup() {
  // initialize stuff and shizzle
  SdPlay.setSDCSPin(4); 
  
  pinMode(Capteur,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9601);
  Serial.println("salut");

  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER)){ 
    while(1);
   }

  if(!SdPlay.setFile(sound)) // music name file
  { 
    while(1);
  } 
}

void loop() {

   SdPlay.play(); // play music

  while(!SdPlay.isStopped())
  {
  
  } 
  
}
