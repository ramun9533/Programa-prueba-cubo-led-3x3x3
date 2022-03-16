int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
unsigned long tiempo, tiempo1, i=0; 
unsigned long tx= 0, ty=0; 
int Filas[] = {12, 11, 10};
int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria
 
void setup()
{
  int contador;
 
  for (int contador = 1; contador < 10; contador++){
    pinMode(Columnas[contador], OUTPUT); }
 
  for (int contador = 1; contador < 4; contador++){
    pinMode(Filas[contador], OUTPUT); }
}
 
void loop()
{
  RandLed();
  
  
}
 
void RandLed()
{
  

  tiempo=millis();
 tiempo1=millis();
   RandColumna = random(0,9);
  RandFila = random(0,3);

     if (tiempo1-ty==500){
 digitalWrite(Filas[RandFila], HIGH);
  digitalWrite(Columnas[RandColumna], HIGH);
  ty=tiempo1;
     }
     
    
  
  if (tiempo-tx==1000){
  
  digitalWrite(Filas[RandFila], LOW);
  digitalWrite(Columnas[RandColumna], LOW);
  tx=tiempo;
   }
   

}
