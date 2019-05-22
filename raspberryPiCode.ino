void setup() {
    Particle.subscribe("8432184329546268548621689",picture ,ALL_DEVICES);
}

void loop() {

}

void picture (){
  Process Pic = Process::run("camera.py");
  Pic.run();
}
