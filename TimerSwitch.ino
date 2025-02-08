char val;         // variable to receive data from the serial port
int relay = 5;  // relay is connected to pin 5 

void setup()
{
  pinMode(relay , OUTPUT); // pin 5 as OUTPUT
 digitalWrite(relay , LOW);
    Serial.begin(9600);       // start serial communication at 9600bps
    
}

void loop()

{
  if(Serial.available() > 0){    
      val = Serial.read();    //recive and store data in variable val
    }
  
  
  if( val == 'x' )               // if 'x' was received Relay pin 5 is switched OFF
  {
    digitalWrite(relay , LOW);    // turn on relay low
  }
  
  else 
  {
    digitalWrite(relay, HIGH);  // else pin 5 is high  
  }
}
