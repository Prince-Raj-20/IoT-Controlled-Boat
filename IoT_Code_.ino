#define BLYNK_TEMPLATE_ID "Yourtemplateid"
#define BLYNK_TEMPLATE_NAME "yourtemplatename"
#define BLYNK_AUTH_TOKEN "yourauthtoken"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "yourwifiSSID";
char pass[] = "Yourwifipassword";

int IN1 = 4;
int IN2 = 5;
int IN3 = 12;
int IN4 = 13;

Servo myServo;
int servoPin = 18;

BLYNK_WRITE(V1) {
    int value = param.asInt(); // 1 or 0
    if (value == 1) {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
    } 
    else {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }
}

BLYNK_WRITE(V2) {
    int value = param.asInt(); // 1 or 0
    if (value == 1) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
    }
    else {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }
}

BLYNK_WRITE(V3) {
    int pos = param.asInt(); // Get value from slider (0 to 180)
    myServo.write(pos);
    Serial.print("Servo moved to: ");
    Serial.println(pos);
}

void setup(){
    Serial.begin(115200);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    myServo.attach(servoPin);
    
    Blynk.begin(auth, ssid, pass, "blynk.cloud", 8080);
}

void loop(){
    Blynk.run();
}