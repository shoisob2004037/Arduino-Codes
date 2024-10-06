#include <SPI.h>
#include <Ethernet.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED }; // Define your Arduino's MAC address
IPAddress server(192, 168, 1, 100); // Change this to your server's IP address
EthernetClient client;

const int trigPin = 7; // Define the pins for the ultrasonic sensor
const int echoPin = 6;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Ethernet.begin(mac);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; // Convert the time into distance

  if (client.connect(server, 80)) {
    client.print("GET /update_distance.php?distance=");
    client.print(distance);
    client.println(" HTTP/1.1");
    client.println("Host: yourwebsite.com");
    client.println("Connection: close");
    client.println();
    client.stop();
  }
  delay(1000); // Update every second
}
