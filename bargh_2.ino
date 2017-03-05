byte seven_seg_digits[34][10] = { { 0,0,0,0,0,0,0,0,0,1 },
                                  { 0,0,0,0,0,0,0,0,1,0 },
                                  { 0,0,0,0,0,0,0,1,0,0 },
                                  { 0,0,0,0,0,0,1,0,0,0 },
                                  { 0,0,0,0,0,1,0,0,0,0 },
                                  { 0,0,0,0,1,0,0,0,0,0 },
                                  { 0,0,0,1,0,0,0,0,0,0 },
                                  { 0,0,1,0,0,0,0,0,0,0 },
                                  { 0,1,0,0,0,0,0,0,0,0 },
                                  { 1,0,0,0,0,0,0,0,0,0 },
                                  
                                  { 0,0,0,0,0,0,0,0,1,1 },
                                  { 0,0,0,0,0,0,0,1,1,0 },
                                  { 0,0,0,0,0,0,1,1,0,0 },
                                  { 0,0,0,0,0,1,1,0,0,0 },
                                  { 0,0,0,0,1,1,0,0,0,0 },
                                  { 0,0,0,1,1,0,0,0,0,0 },
                                  { 0,0,1,1,0,0,0,0,0,0 },
                                  { 0,1,1,0,0,0,0,0,0,0 },
                                  { 1,1,0,0,0,0,0,0,0,0 },

                                  { 1,1,1,1,1,1,1,1,1,1 },
                                  { 0,1,1,1,1,1,1,1,1,1 },
                                  { 0,0,1,1,1,1,1,1,1,1 },
                                  { 0,0,0,1,1,1,1,1,1,1 },
                                  { 0,0,0,0,1,1,1,1,1,1 },
                                  { 0,0,0,0,0,1,1,1,1,1 },
                                  { 0,0,0,0,0,0,1,1,1,1 },
                                  { 0,0,0,0,0,0,0,1,1,1 },
                                  { 0,0,0,0,0,0,0,0,1,1 },
                                  { 0,0,0,0,0,0,0,0,0,1 },
                                  { 0,0,0,0,0,0,0,0,0,0 },

                                  { 0,0,0,0,0,0,0,1,0,0 },
                                  { 0,0,0,0,0,0,0,0,0,0 },
                                  { 0,0,0,0,0,0,0,1,0,0 },
                                  { 0,0,0,0,0,0,0,0,0,0 },
                                 };


void setup() 
{  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}


void sevenSegWrite(byte digit)  //Funcao que aciona o display
{
  byte pin = 1;

  //Percorre o array ligando os segmentos correspondentes ao digito
  for (byte segCount = 0; segCount < 10; ++segCount)  
  { 
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
    delay(0.0000001);   //Aguarda 100 milisegundos
}

void loop() 
{
      digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  for (byte count = 1; count < 34; count++)
  {
    digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(500);
     sevenSegWrite(count);
  }
  delay(1000);
}
