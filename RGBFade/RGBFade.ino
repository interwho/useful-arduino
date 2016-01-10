/*
 RGBFade
 
 This example shows how to fade between colours on an RGB LED.
 */

// Pin Configurations
int red = 3;		// Red LED Pin
int green = 5;		// Green LED Pin
int blue = 6;		// Blue LED Pin

// Initial Brightness Levels
int brightnessr = 0;    // Red LED Brightness
int brightnessg = 120;	// Green LED Brightness
int brightnessb = 250;	// Blue LED Brightness

// Fade Amounts
int fadeAmountr = 5;	// Red LED Fade Amount
int fadeAmountg = 5;	// Green LED Fade Amount
int fadeAmountb = 5;	// Blue LED Fade Amount

void setup()  { 
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
} 

void loop()  { 
  // Set initial brightness levels
  analogWrite(red, brightnessr);    
  analogWrite(green, brightnessg); 
  analogWrite(blue, brightnessb); 

  // Change the brightness for the next iteration
  brightnessr = brightnessr + fadeAmountr;
  brightnessg = brightnessg + fadeAmountg;
  brightnessb = brightnessb + fadeAmountb;

  // Reverse fade directions at the maximum and minimum brightness values 
  if (brightnessr == 0 || brightnessr == 255) {
    fadeAmountr = -fadeAmountr ; 
  }

  if (brightnessg == 0 || brightnessg == 255) {
    fadeAmountg = -fadeAmountg ; 
  }
   
  if (brightnessb == 0 || brightnessb == 255) {
    fadeAmountb = -fadeAmountb ; 
  }
     
  // Delay so the effect is visible    
  delay(30);                            
}

