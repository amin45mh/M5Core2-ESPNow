/**
   ESPNow - Get MAC Address Utility (Serial Only)
   Purpose: Simple utility to get MAC addresses without display library
   Description: This version only uses Serial output - no display needed
                Use this if you have library compatibility issues
*/

#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(2000); // Wait for Serial Monitor to open
  
  Serial.println("\n\n========================================");
  Serial.println("    M5Core2 MAC Address Utility");
  Serial.println("========================================\n");
  
  // Get STA MAC (Station Mode) - Used by Master
  WiFi.mode(WIFI_STA);
  String staMac = WiFi.macAddress();
  Serial.println("=== Station Mode (STA) MAC ===");
  Serial.print("MAC Address: ");
  Serial.println(staMac);
  Serial.println("(Use this for Master device)\n");
  
  // Get AP MAC (Access Point Mode) - Used by Slave
  WiFi.mode(WIFI_AP);
  String apMac = WiFi.softAPmacAddress();
  Serial.println("=== Access Point (AP) MAC ===");
  Serial.print("MAC Address: ");
  Serial.println(apMac);
  Serial.println("(Use this for Slave device)\n");
  
  Serial.println("========================================");
  Serial.println("Note: Write down these MAC addresses!");
  Serial.println("========================================\n");
}

void loop() {
  // Do nothing
  delay(1000);
}

