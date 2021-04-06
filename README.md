# Artificial-Intelligence-Eyes-
Artificial Intelligence Eyes σε όχημα αποφυγής εμποδίων
1)Όχημα αποφυγής εμποδίων με λογισμικό neural network - AI (Artificial Intelligence)
Artificial Intelligence Eyes

Ένα ρομπότ αποφυγής εμποδίων που χρησιμοποιεί δύο(ή τρείς) υπερηχητικές μονάδες  HSR-04 συνδεδεμένες σε ένα ESP32 (ή ένα arduino nano 33 ble sense) που τρέχει  νευρωνικό δίκτυο για να ελέγξει τις κινήσεις του.Το νευρωνικό δίκτυο έχει δύο κόμβους εισόδου από τις υπερηχητικές μονάδες και πέντε κόμβους εξόδου, στρίψτε αριστερά, στρίψτε δεξιά, ελαφριά αριστερά, ελαφριά δεξιά και  ευθεία.

Ο στόχος μας είναι να χρειάζονται ένα ή δύο λεπτά για να εκπαιδευτεί το νευρωνικό δίκτυο στο σύνολο δεδομένων κατά την ενεργοποίηση.Παρόμοιο αποτέλεσμα “Όχημα αποφυγής εμποδίων” θα μπορούσε να επιτευχθεί με άλλα συμβατικά προγράμματα που κυκλοφορούν στο διαδίκτυο όμως αυτή η προσέγγιση που θα προσπαθήσουμε να υλοποιήσουμε δίνει μια παρουσίαση του AI (με λογική τέτοια για υλοποίηση και σε άλλα project ).
Ο σκοπός είναι να χρησιμοποιήσουμε το esp32 ( ή το nano 33 ble sense ως πλατφόρμα που ήδη αναπτύσσονται AI λύσεις). Όμως το esp32 με λίγο μεγαλύτερη υπολογιστική ισχύ θα αποτελέσει την φθηνή εναλλακτική μας(τα κλασικά mcu όπως uno,nano etc αποκλείονται λόγω χώρου του προγράμματος που απαιτείται)
Υλικά : 
Α)  ρομπότ: https://www.hellasdigital.gr/go-create/robotics/car-robot/3wd-robot-car-kit/
(Ή  https://www.hellasdigital.gr/go-create/robotics/car-robot/4wd-robot-car-kits/)
 
Β) * esp32 : https://grobotronics.com/esp32-development-board-nodemcu-32s.html
(Γ)Ή* nano 33 ble sense with headers : https://grobotronics.com/arduino-nano-33-ble-sense-with-headers-abx00035.html)
 
Ε) breadboardX(2) : https://grobotronics.com/adafruit-perma-proto-half-sized-breadboard-pcb-single.html και https://grobotronics.com/breadboard-830-tie-point-classic.html
Ζ) hsr-04 X(2) : https://grobotronics.com/ultrasonic-sensor-sr04.html
Η)μπαταρία: https://topelectronics.gr/rc-and-drones/batteries/lipo/3s-11.1v/gens-ace-soaring-3300mah-11.1v-30c-3s1p-lipo-battery-pack-with-xt90-plug/
Η)ΣΎΝΔΕΣΜΟΙ-ΚΑΛΩΔΙΑ: https://www.cableworks.gr/ilektronika/arduino-and-microcontrollers/prototyping/connectors/jst-xh2.54-2p-2pin-connector-male-female/  Χ4  ΚΑΙ https://www.cableworks.gr/ilektronika/arduino-and-microcontrollers/prototyping/wires/ph2.0/jst-4pin-ph2.0-micro-jst-connector-with-20cm-wire-cable-female-and-male/  Χ4
Θ)ΡΥΘΜΙΣΤΗΣ ΤΑΣΗΣ https://www.hellasdigital.gr/electronics/boost-and-buck-converters/5a-75w-dc-dc-adjustable-step-down-module-step-down-modules-with-voltmeter/
 
