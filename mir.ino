void setup()
{
	Serial.begin(9600);
	Serial.println("Serial OK");
}

void loop()
{
	Serial.println(random(5, 55));
	delay(800);
}