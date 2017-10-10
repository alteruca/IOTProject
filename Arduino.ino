int soundDetectedPin = 10; // Use Pin 10 as our Input
int soundDetectedVal = HIGH; // This is where we record our Sound Measurement
boolean bAlarm = false;
boolean bAlarm2 = false;
boolean bAlarm3 = false;
int counter=0;
unsigned long lastSoundDetectTime; // Record the time that we measured a sound


int soundAlarmTime = 2000; // Number of milli seconds to keep the sound alarm high


void setup ()
{
  Serial.begin(9600);  
  pinMode (soundDetectedPin, INPUT) ; // input from the Sound Detection Module
}
void loop ()
{
  soundDetectedVal = digitalRead (soundDetectedPin) ; // read the sound alarm time
  
  if (soundDetectedVal == LOW) // If we hear a sound
  {
  
    lastSoundDetectTime = millis(); // record the time of the sound alarm

    soundDetectedVal = digitalRead (soundDetectedPin) ;
    
    if (soundDetectedVal == LOW && bAlarm && bAlarm2 && !bAlarm3){
      //Serial.println(counter);
      counter=3;
      bAlarm3=true;
    }
    
    if (soundDetectedVal == LOW && bAlarm && !bAlarm2){
      //Serial.println(counter);
      counter=2;
      bAlarm2=true;
      delay(50);
    }
    
    // The following is so you don't scroll on the output screen
    if (!bAlarm){
      //Serial.println(counter);
      counter=1;
      bAlarm = true;
      delay(50);
    }
    
  }
  else
  {
    if( (millis()-lastSoundDetectTime) > soundAlarmTime  &&  bAlarm){
      Serial.println(counter);
      bAlarm = false;
      bAlarm2=false;
      bAlarm3=false;
      counter=0;
    }
  }
}


