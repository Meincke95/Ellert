/*
  The circuit:
  - LED/Relay attached from pin A1(ANALOG) to ground
  - pushbutton attached to pin/kontakt  from +5V
  - 10K resistor attached to pin/kontakt  from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.
*/

// constants
const int buttonPin1 = 3;     // the number of the pushbutton pin (kontakt)
const int buttonPin2 = 2;     // the number of the pushbutton pin (kontakt)

const int leftRelay =  7;      // Venstre relay output
const int rightRelay = 6;    // Højre relay output


// variables ændres løbende, f.eks. 0(off)1(on):
int buttonState1 = 0;         // venstre kontakt til blinklys læser position
int buttonState2 = 0;         // højre kontakt til blinklys læser position

int delay1 = 600; // delay for relay (blink hastighed)

void setup() {
  // initialize the LED/Relay pin as an output:
  pinMode(leftRelay, OUTPUT);
  pinMode(rightRelay, OUTPUT);
  
  // initialize the pushbutton/kontakt pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  leftBlinker();
  rightBlinker();

}
//-----------------------------------------------------------------------------------------
void leftBlinker(){
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {

    // 1st blink
    // turn LED on:
    digitalWrite(leftRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(leftRelay, LOW);
    delay(delay1);

    // 2nd blink
    digitalWrite(leftRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(leftRelay, LOW);
    delay(delay1);

    // 3rd blink
    digitalWrite(leftRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(leftRelay, LOW);
    delay(delay1);
  }
else
  digitalWrite(leftRelay, LOW);
  }
//-----------------------------------------------------------------------------------------
void rightBlinker(){
  // read the state of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {

    // 1st blink
    // turn LED on:
    digitalWrite(rightRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(rightRelay, LOW);
    delay(delay1);

    // 2nd blink
    digitalWrite(rightRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(rightRelay, LOW);
    delay(delay1);

    // 3rd blink
    digitalWrite(rightRelay, HIGH);
    delay(delay1);
    // turn LED off:
    digitalWrite(rightRelay, LOW);
    delay(delay1);
  }
else
  digitalWrite(rightRelay, LOW);
  }
