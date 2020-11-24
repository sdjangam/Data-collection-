const int tempPin = 0; // Analog pin A0 is connected to Vout of the sensor
void setup() {
  // Start the serial connection with the computer
  // to view the result open the serial monitor
  Serial.begin(9600);
}

void loop() {  
  // get the voltage reading from the temperature sensor
  int val = analogRead(tempPin);
  
  // convert analog reading to digital voltage
  // for 3.3V input use 3.3 instead of 5
  float reading = (val * 5.0)/1023.0;
  
  // Vout = 10 mv/°C × Temp
  // refer LM35 transfer function http://www.ti.com/lit/ds/symlink/lm35.pdf
  float temp = reading * 100.0;
  Serial.println(temp);    
  delay(500);   
}

