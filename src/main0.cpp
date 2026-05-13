#include <Arduino.h>
#include <WiFi.h>
#include <ESPmDNS.h>
<<<<<<< HEAD
#include "services\wserial.h"
=======
>>>>>>> ae53db463a289bf29d3130270291255f246e0f0a

void setup() {
  WiFi.begin("InovaIndustria","industria50");
  while (WiFi.status()!=WL_CONNECTED) delay(100);

<<<<<<< HEAD
    // Tenta listen até conseguir
  wserial.begin(115200, 47268UL);
  wserial.println("[IP] is " + String(WiFi.localIP().toString()));
=======
  // Tenta listen até conseguir
  Serial.begin(115200);
  Serial.println("[IP] is " + String(WiFi.localIP().toString()));
>>>>>>> ae53db463a289bf29d3130270291255f246e0f0a

  MDNS.begin(KIT_HOSTNAME);          // acessa em esp32name.local
}
void loop() {
<<<<<<< HEAD
    wserial.update();
=======
>>>>>>> ae53db463a289bf29d3130270291255f246e0f0a
}
