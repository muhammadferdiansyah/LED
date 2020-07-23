#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "llOnsqBg5QTtZ428plzcrX7Ykx58wg6X"; //Token blynk yg di email

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Danfer_2801"; //nama wifi
char pass[] = "rahasiadong"; //password wifi

void setup()
{
// Debug console
Serial.begin(9600);

Blynk.begin(auth, ssid, pass);
}

void loop()
{
Blynk.run();
}
