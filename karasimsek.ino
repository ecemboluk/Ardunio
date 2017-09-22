const int ledDizisi[]={2,3,4};
void setup() {
   for(int i=0; i<3; i++){
    pinMode(ledDizisi[i],OUTPUT);
   }
}

void loop() {
  for(int i=0; i<3; i++){
    digitalWrite(ledDizisi[i],HIGH);      
    delay(50);                           
    digitalWrite(ledDizisi[i],LOW);     
  }
  for(int i=2; i>-1; i--){
    digitalWrite(ledDizisi[i],HIGH);      
    delay(50);                           
    digitalWrite(ledDizisi[i],LOW);  
  }
}
