/*
  DSLR Shutter Release Remote (RC)
*/

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int valor = 0;        // value read from the pot
int descens = 0;
int anterior = 0;
int cont_desc = 0;
int engegar = 1;

void setup() {
  Serial.begin(9600);

  pinMode(10, OUTPUT);
}

void loop() {
  
  valor = analogRead(analogInPin);
  
  
  
  if (abs(anterior - valor) < 5) ++cont_desc;
  else {
    cont_desc = 0;
    engegar++;
  }
  if (cont_desc >= 30) {
    digitalWrite(10, LOW);
    engegar = 0;
  }
  else if (engegar > 1) digitalWrite(10, HIGH);
 
 
  
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(valor);
  Serial.print("\t anterior = ");
  Serial.println(anterior);
  anterior = valor;
  
  //delay(20);
}
