/*
- Arduino & Chralieplexing
- Driving 6 LEDs using only 3 I/O Pins
- Tri-State Logic Implementation
- Demo Code From Internet
- Prepared by T.K.Hareendran
- Tested at TechNode Protolabz
- Source: https://www.electroschematics.com
*/
#define LED_1 5
#define LED_2 6
#define LED_3 7

void setup()
{
   pinMode(LED_1, INPUT);
   pinMode(LED_2, INPUT);
   pinMode(LED_3, INPUT);
}

void loop()
{
   set_pins(LED_1, LED_2);
   delay(100);
   set_pins(LED_2, LED_1);
   delay(100);
   set_pins(LED_3, LED_1); 
   delay(100);
   set_pins(LED_1, LED_3);
   delay(100);
   set_pins(LED_2, LED_3);
   delay(100);
   set_pins(LED_3, LED_2);
   delay(100); 
}

void set_pins(int high_pin, int low_pin)
{
   reset_pins();
   pinMode(high_pin, OUTPUT);
   pinMode(low_pin, OUTPUT);
   digitalWrite(high_pin, HIGH);
   digitalWrite(low_pin,LOW);
}

void reset_pins()
{
   pinMode(LED_1, INPUT); 
   pinMode(LED_2, INPUT);
   pinMode(LED_3, INPUT);
   digitalWrite(LED_1, LOW);
   digitalWrite(LED_2, LOW);
   digitalWrite(LED_3, LOW);
}