

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
    // Configurable, see typical pin layout above


String tag;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "authentication token";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "SSD ID";
char pass[] = "WiFi Password";

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}

  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);


void loop()
{
  Blynk.run();
 
}
 
