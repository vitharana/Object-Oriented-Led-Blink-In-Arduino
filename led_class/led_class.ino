// C++ code
//

class Led

{


  private :
  
  byte pin;
  

  public :
  
      
  Led(byte pin){
    
    this->pin = pin;
  };
  
  
  void init(){
    
   pinMode(pin,OUTPUT); 
  }
  
  void blink(byte t){
    
  digitalWrite(pin, HIGH);
  delay(t); // Wait for 1000 millisecond(s)
  digitalWrite(pin, LOW);
  delay(t); // Wait for 1000 millisecond(s)
  
  }
  
  
  
  
  
};


Led led1(13);
Led led2(12);
Led led3(11);
Led led4(10);
Led led5(9);
Led led6(8);
Led led7(7);
Led led8(6);
Led led9(5);
Led led10(4);


void setup()
{
  led1.init();
  led2.init();
  led3.init();
  led4.init();
  led5.init();
  led6.init();
  led7.init();
  led8.init();
  led9.init();
  led10.init();
}

void loop()
{
  
  led1.blink(100);
  led2.blink(100);
  led3.blink(100);
  led4.blink(100);
  led5.blink(100);
  led6.blink(100);
  led7.blink(100);
  led8.blink(100);
  led9.blink(100);
  led10.blink(100);
  
  led9.blink(100);
  led8.blink(100);
  led7.blink(100);
  led6.blink(100);
  led5.blink(100);
  led4.blink(100);
  led3.blink(100);
  led2.blink(100);
  
  
  
  
}
