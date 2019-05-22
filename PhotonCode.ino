#define LIGHT a0
#define TILT d0
#define SOUND d1


void setup()
{
    pinMode(Light, INPUT);
    pinMode(TILT, INPUT);
    pinMode(SOUND, INPUT);
}

void loop()
{
    int LIGHT_SENSED = analogRead(LIGHT);
    int TILT_SENSED = digitalRead(TILT);
    int SOUND_SENSED = digitalRead(SOUND);

    if (LIGHT_SENSED>900)
    {
        Particle.publish("Detected",PRIVATE);
    }

    if (TILT_SENSED=LOW)
    {
        Particle.publish("Detected",PRIVATE);
        delay(30000);
    }

    if (SOUND_SENSED=LOW)
    {
        Particle.publish("Detected",PRIVATE);
    }

    delay(200);
}
