const int phot_resistor = 0;  
const int LED = 7;  
int analogValue;  

void setup() {  
    Serial.begin(9600);  
    pinMode(LED, OUTPUT);  
}  

void loop() {  
    analogValue = analogRead(phot_resistor);  
    Serial.println(analogValue);  
    
    if (analogValue < 300) {  
        digitalWrite(LED, HIGH);  
    } else {  
        digitalWrite(LED, LOW);  
    }  
    delay(100);  
}
