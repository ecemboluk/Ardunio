const int ledDizisi[]={2,3,4};
void setup() {
   for(int i=0; i<3; i++){
    pinMode(ledDizisi[i],OUTPUT);
   }
}

void loop() {
    digitalWrite(4,HIGH);      
    delay(5000);                           
    digitalWrite(4,LOW);    
    digitalWrite(3,HIGH);      
    delay(2000);                           
    digitalWrite(3,LOW);  
     digitalWrite(2,HIGH);      
    delay(4000);                           
    digitalWrite(2,LOW);   
}
