
int ledPin=9;
int ledPin2=11; 
int ledPin3=10;
bool led_durumu=LOW;

void setup() {
pinMode(ledPin, OUTPUT);   
pinMode(ledPin2, OUTPUT);   
pinMode(ledPin3,OUTPUT);
}

void loop() {
 led_durumu= !led_durumu;
 digitalWrite(ledPin,led_durumu);
 delay(5000);
 led_durumu= !led_durumu;
 digitalWrite(ledPin2,led_durumu);
 delay(5000);
 led_durumu= !led_durumu;
 digitalWrite(ledPin3,led_durumu); 
delay(5000);             
}

void change(){
  led_durumu= !led_durumu;
  digitalWrite(ledPin,led_durumu);
  led_durumu= !led_durumu;
  digitalWrite(ledPin2,led_durumu);
  led_durumu= !led_durumu;
  digitalWrite(ledPin3,led_durumu);
}
