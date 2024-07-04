//Variable de Entrada:

int sensorSonico = A1;

//Variables de Salida:

int rojo = 4;
int azul = 5;
int verde = 6;
int buzzer = 8;
bool boton; 


void setup()
{
  pinMode( sensorSonico , OUTPUT );
  pinMode( rojo , OUTPUT ); //LED rojo
  pinMode( azul , OUTPUT ); //LED azul
  pinMode( verde , OUTPUT ); //LED verde
  pinMode( buzzer , OUTPUT ); //El Buzzer
  pinMode( boton , INPUT );//El boton
  Serial.begin( 9800 );

}//fin del setup


void loop()
{
  Serial.print( "Distancia actual del objeto: " );
  Serial.print( sensorSonico );
  Serial.println( "cm" );
  
  boton = digitalRead ( 7 );
  delay ( 1 );
  
  if( boton == LOW )
  {
  
    digitalWrite( buzzer , HIGH );
    delay( 1000 );
  
  }//fin del if
  else{
    
    digitalWrite( buzzer , LOW );
    delay( 1 );
    
  }//fin del else
  
  if( sensorSonico > 150 )
  {
    digitalWrite( verde , HIGH );
    digitalWrite( buzzer , LOW );
  }
  
  if (sensorSonico >= 50 and <= 150 )
  {
    
    digitalWrite( buzzer , HIGH );
    delay ( 500 );
  
    digitalWrite( rojo , HIGH );
    digitalWrite( verde , HIGH );
  }
  
  if( sensorSonico < 50 )
  {
    digitalWrite( buzzer , HIGH );
    delay ( 50 );
    
    digitalWrite( rojo , HIGH ); 
  
}//fin del loop