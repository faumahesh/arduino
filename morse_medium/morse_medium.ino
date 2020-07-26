//
// Medium Morse SOS demo
// 7/2020 - Mahesh Neelakanta
//

/* 
   Added const, loops, if-else, comparison operators
   math operators, compound operators, data types
*/

#define DOTDELAY 200   // How long to wait per dot
#define DASHDELAY 350  // How long to wait per dash
#define CHARDELAY 500  // How long to wait after end of each character
#define EOMDELAY  1000 // How long to wait after end of message

const int LEDPIN = 13;
const char msg[] = "AB"; 


void dot()
{
  digitalWrite(LEDPIN, HIGH);  // Turn on the LED
  delay(DOTDELAY);             // Leave LED on for a short (DOT) delay
  digitalWrite(LEDPIN, LOW);   // Turn off the LED
  delay(DOTDELAY);             // Leave LED on for a short (DOT) delay
}

void dash()
{
  digitalWrite(LEDPIN, HIGH);  // Turn on the LED
  delay(DASHDELAY);            // Leave LED on for a long (DASH) delay)
  digitalWrite(LEDPIN, LOW);   // Turn off the LED 
  delay(DASHDELAY);            // Leave LED on for a long (DASH) delay)
}

//
void setup() 
{
  Serial.begin(115200);

  pinMode(LEDPIN, OUTPUT);     
}

void loop() 
{
  int index;
  char letter;

  Serial.print("Printing: ");
  Serial.print(msg);
  Serial.print(" Length=");
  Serial.println(sizeof(msg)-1);
  
  for(index = 0; index < sizeof(msg)-1 ; index++) {
    letter = msg[index];
    Serial.println(letter);
    
    if (letter == 'A' || letter == 'a') {
      dot(); dash();
    }
    else if (letter == 'B' || letter == 'b') {
      dash(); dot(); dot(); dot();
    }
    else if (letter == 'S' || letter == 's') {
       dot(); dot() ; dot();
    } 
    else if (letter = 'O' || letter == 's') {
       dash(); dash(); dash();
    } 
    else {
      // Unknown value so skip it
    }
    delay(CHARDELAY);
  }
  delay(EOMDELAY);
}
