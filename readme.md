# ANES Meterpreter (for digispark)
## v1.3.7 - README
**By [halsen](https://github.com/halsen) and [l0guecow](https://github.com/l0guecow)**

---

## Disclaimer
- This project is for **testing purposes only**.  
- **DO NOT** use it on anyone's computer without explicit permission.  
- By using this program, you agree to these terms. **You have been warned!**

---

## Introduction
This repository contains an **ANES-meterpreter** script designed to run on a [DigiSpark](https://digistump.com/products/1) device. The script, once properly configured and uploaded, will automate the process of downloading and executing a Meterpreter payload on a target machine.

**Important:** This project was originally developed as a college duo project in Norway. It has been graded and is documented in Norwegian. While the project may receive minor bug fixes, it is no longer in active development. However, the original functionality remains intact.

---

## Prerequisites & Setup

1. **Arduino & DigiSpark Environment**  
   - Install the [Arduino IDE](https://www.arduino.cc/en/software) on your computer.  
   - Ensure that the [DigiSpark libraries](https://digistump.com/wiki/digispark/tutorials/arduino) are properly installed.

2. **Modified DigiKeyboard.h**  
   - Navigate to the folder where the DigiSpark libraries are located.  
   - Replace the existing `DigiKeyboard.h` file with our custom version, found in this GitHub repository.  
   - Typically, this folder is located at:  
     ```
     AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard
     ```
     If you’re unsure, consult documentation or perform a quick online search.

3. **Meterpreter**  
   - You will need a functioning Meterpreter setup (e.g., within [Kali Linux](https://www.kali.org/)) to properly receive and manage sessions initiated by the DigiSpark device.

4. **ANES-meterpreter Script**  
   - This project includes a Python script named `anes.py`.  
   - The script must be executed on a Linux terminal (preferably Kali) where Meterpreter is installed.  
   - **Note:** Meterpreter itself is **not** included in this script.

---

## Usage Instructions

1. **Generate the Meterpreter Payload**  
   - Run the `anes.py` script in a Linux environment (with Meterpreter already installed).  
   - This will produce an output file containing the Meterpreter payload.

2. **Host the Payload on a Web Server**  
   - Upload the generated payload file to a reachable web server of your choice.

3. **Configure the DigiSpark Arduino Script**  
   - In the Arduino script (provided in this repository), locate the section where the payload URL is specified.  
   - Update the script to download your hosted payload from the web server.

4. **Upload to the DigiSpark**  
   - Connect your DigiSpark board to your computer.  
   - Use the Arduino IDE to upload the modified script to the DigiSpark device.

5. **Deploy the DigiSpark**  
   - Once the script is successfully uploaded, connect the DigiSpark to the target/victim's computer.

6. **Monitor in Kali Linux**  
   - Return to your Kali Linux environment.  
   - Follow the on-screen instructions to verify the session has opened.  
   - Once a session is established, ensure the injection has completed properly.  
   - The Windows Terminal (or command prompt) should close automatically, and open applications might minimize.

7. **Interact with the Meterpreter Session**  
   - Use the `help` command within Meterpreter to see available commands.  
   - Execute any necessary testing or commands as permitted by law and ethical guidelines.

---

## Additional Information
- For any questions or assistance, [open an issue](../../issues) on this repository.  
- This project was originally created for academic purposes in Norway and has been evaluated by Norwegian college instructors.  
- While it may receive occasional bug fixes, the core functionality is no longer under active development.  

---

**Thank you for using ANES-meterpreter responsibly!**
