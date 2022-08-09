#include <SoftwareSerial.h> 
SoftwareSerial module_bluetooth(0, 1); // pin RX | TX
 
char data = 0;             

const int relay1 = 2;
const int relay2 = 3;
const int relay3 = 4;
const int relay4 = 5;

void setup() 
{
  Serial.begin(9600);         
  pinMode(relay1, OUTPUT);  
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  
  digitalWrite(relay1, HIGH); 
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  
}
void loop()
{
  if(Serial.available() > 0)  
  {
    data = Serial.read(); //baca data yang dikirim      
    if(data == '1'){
    digitalWrite(relay1, LOW); //nyalakan relay
    }
    else if(data == '2'){      
    digitalWrite(relay1, HIGH); //matikan relay
    } 
    else if(data == '3'){
    digitalWrite(relay2, LOW); 
    }
    else if(data == '4'){      
    digitalWrite(relay2, HIGH); 
    } 
    else if(data == '5'){
    digitalWrite(relay3, LOW); 
    }
    else if(data == '6'){      
    digitalWrite(relay3, HIGH); 
    } 
    else if(data == '7'){
    digitalWrite(relay4, LOW); 
    }
    else if(data == '8'){      
    digitalWrite(relay4, HIGH); 
    } 

   
   
                              
}}