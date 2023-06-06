#include <WiFi.h>
#include <IOXhop_FirebaseESP32.h>
#include <ArduinoJson.h>

#define WIFI_SSID  "iPhone de Stenio Anselmo"
#define PASSWORD_WIFI "stenio123" 
#define FIREBASE_HOST  "https://webserver-e057f-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH  "AIzaSyCqMb4laAgyBu1EYr4R9rtzoODVN0y7a8E"
  
int Relay_1 = 5;
int Relay_2 = 18;
int Relay_3 = 13;
int Relay_4 = 15;
int Estado_Relay_1;
int Estado_Relay_2;
int Estado_Relay_3;
int Estado_Relay_4;
void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(WIFI_SSID, PASSWORD_WIFI);
  Serial.print("Conectando ao WiFi");

  while(WiFi.status() != WL_CONNECTED){
    Serial.println(".");
    delay(300);
  }
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
  pinMode(Relay_1, OUTPUT);
  pinMode(Relay_2, OUTPUT) ;
  pinMode(Relay_3, OUTPUT);
  pinMode(Relay_4, OUTPUT); 
}
void loop() {

  Estado_Relay_1 = Firebase.getInt("/Estado_Relay1/Relay_1");
  Estado_Relay_2 = Firebase.getInt("/Estado_Relay2/Relay_2");
  Estado_Relay_3 = Firebase.getInt("/Estado_Relay3/Relay_3");
  Estado_Relay_4 = Firebase.getInt("/Estado_Relay4/Relay_4");
  
  if(Estado_Relay_1 == 1){
      digitalWrite(Relay_1, LOW);
    }else{
      digitalWrite(Relay_1, HIGH);
      }

  if(Estado_Relay_2 == 1){
      digitalWrite(Relay_2, LOW);
    }else{
      digitalWrite(Relay_2, HIGH);
      }

  if(Estado_Relay_3 == 1){
      digitalWrite(Relay_3, LOW);
    }else{
      digitalWrite(Relay_3, HIGH);
    }

   if(Estado_Relay_4 == 1){
      digitalWrite(Relay_4, LOW);
    }else{
      digitalWrite(Relay_4, HIGH);
    }
  
}
