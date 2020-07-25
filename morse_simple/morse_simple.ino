//
// Simple Morse SOS demo
// 7/2020 - Mahesh Neelakanta
//

#define LEDPIN 13
#define DOTDELAY 200   // How long to wait per dot
#define DASHDELAY 350  // How long to wait per dash
#define CHARDELAY 500  // How long to wait after end of each character
#define EOMDELAY  1000 // How long to wait after end of message

void setup() 
{
  pinMode(LEDPIN, OUTPUT);     
}

void loop() 
{
 // SOS = ... --- ...

 dotBlink();
 dotBlink();
 dotBlink();
 delay(CHARDELAY);

 dashBlink();
 dashBlink();
 dashBlink();
 delay(CHARDELAY);

 dotBlink();
 dotBlink();
 dotBlink();
 delay(EOMDELAY);

}

void dotBlink()
{
  digitalWrite(LEDPIN, HIGH);  // Turn on the LED
  delay(DOTDELAY);             // Leave LED on for a short (DOT) delay
  digitalWrite(LEDPIN, LOW);   // Turn off the LED
  delay(DOTDELAY);             // Leave LED on for a short (DOT) delay

}

void dashBlink()
{
  digitalWrite(LEDPIN, HIGH);  // Turn on the LED
  delay(DASHDELAY);            // Leave LED on for a long (DASH) delay)
  digitalWrite(LEDPIN, LOW);   // Turn off the LED 
  delay(DASHDELAY);            // Leave LED on for a long (DASH) delay)
}
