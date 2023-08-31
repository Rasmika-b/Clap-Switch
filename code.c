int soundSensor = 2;
int LED = 3;
int a=1;
void setup() 
{
 pinMode (soundSensor, INPUT);
 pinMode (LED, OUTPUT);
}
void loop()
{
 int statusSensor = digitalRead (soundSensor);
 if (statusSensor == 1 && a==1)
 {
 digitalWrite(LED, HIGH);
 a=2;
 }
 else if(statusSensor == 1 )
 {
 digitalWrite(LED, LOW);
 a=1;
 }
}
