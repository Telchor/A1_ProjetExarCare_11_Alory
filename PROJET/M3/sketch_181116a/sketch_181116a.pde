//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {                                          // Initialisation
    udSerial = new Serial(this, Serial.list()[0],76800); //Check la connection avec l'arduino
    output = createWriter ("pouls.csv");           //creer un fichier .csv
    delay(100);                                        //pause le programme pendant 100 ms
}

void draw() {                        // debut d'une boucle
    if (udSerial.available() > 0) {   //le programme regarde si l'arduino renvoie quelque chose  
        delay(500);
        String SenVal = udSerial.readString(); //lis les données de l'arduino
        if (SenVal != null) {                 //boucle if qui ne marche que si l'arduino renvoie quelque chose
            delay(1200);
            output.println(SenVal);           //ecrit dans pouls.csv

        }
    }
}

void keyPressed(){
    output.flush();
    output.close();
    delay(100);
    exit(); 
}
