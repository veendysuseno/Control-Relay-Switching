# Control Relay (Switching)

## Description

The Control Relay system allows you to control a relay using two buttons. One button turns the relay on, and the other button turns it off. This setup can be used to switch devices or control electrical appliances remotely.

## Components

- Arduino (e.g., Arduino Uno)
- Relay Module
- Two Push Buttons
- Jumper Wires
- Breadboard (optional)

## Pin Configuration

| Component     | Pin Number |
| ------------- | ---------- |
| Relay Control | 2          |
| Button On     | 3          |
| Button Off    | 4          |

## Code

```cpp
// Code for Control Relay (Switching)

#define Relay 2    // Pin for controlling the relay
#define tb_on 3    // Pin for the "on" button
#define tb_off 4   // Pin for the "off" button

void setup(){
  pinMode(Relay, OUTPUT); // Set relay pin as output
  pinMode(tb_on, INPUT);  // Set "on" button pin as input
  pinMode(tb_off, INPUT); // Set "off" button pin as input
  digitalWrite(tb_on, HIGH); // Enable pull-up resistor for "on" button
  digitalWrite(tb_off, HIGH); // Enable pull-up resistor for "off" button
}

void loop(){
  if (digitalRead(tb_on) == LOW) { // If "on" button is pressed
    digitalWrite(Relay, HIGH);    // Turn on the relay
  }
  else if (digitalRead(tb_off) == LOW) { // If "off" button is pressed
    digitalWrite(Relay, LOW);     // Turn off the relay
  }
}
```

## How It Works

1. Initialization:
   - The setup() function configures the relay pin as an output and the button pins as inputs.
   - Pull-up resistors are enabled for the button pins to ensure they are read correctly.
2. Relay Control:
   - The loop() function continuously checks the state of the buttons.
   - If the "on" button is pressed (LOW), the relay is turned on (HIGH).
   - If the "off" button is pressed (LOW), the relay is turned off (LOW).

## Usage

1. Connect the relay module and buttons to the appropriate pins on the Arduino.
2. Upload the code to the Arduino board.
3. Press the "on" button to activate the relay and the "off" button to deactivate it.

## Notes

- Ensure that the relay module is rated for the voltage and current of the device you plan to control.
- Use pull-up resistors or enable the internal pull-ups to ensure reliable button readings.
