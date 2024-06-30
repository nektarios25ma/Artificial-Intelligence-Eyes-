# Artificial-Intelligence-Eyes-
Artificial Intelligence Eyes σε όχημα αποφυγής εμποδίων
1)Όχημα αποφυγής εμποδίων με λογισμικό neural network - AI (Artificial Intelligence)
Artificial Intelligence Eyes

Ένα ρομπότ αποφυγής εμποδίων που χρησιμοποιεί δύο(ή τρείς) υπερηχητικές μονάδες  HSR-04 συνδεδεμένες σε ένα ESP32 (ή ένα arduino nano 33 ble sense) που τρέχει  νευρωνικό δίκτυο για να ελέγξει τις κινήσεις του.Το νευρωνικό δίκτυο έχει δύο κόμβους εισόδου από τις υπερηχητικές μονάδες και πέντε κόμβους εξόδου, στρίψτε αριστερά, στρίψτε δεξιά, ελαφριά αριστερά, ελαφριά δεξιά και  ευθεία.

Ο στόχος μας είναι να χρειάζονται ένα ή δύο λεπτά για να εκπαιδευτεί το νευρωνικό δίκτυο στο σύνολο δεδομένων κατά την ενεργοποίηση.Παρόμοιο αποτέλεσμα “Όχημα αποφυγής εμποδίων” θα μπορούσε να επιτευχθεί με άλλα συμβατικά προγράμματα που κυκλοφορούν στο διαδίκτυο όμως αυτή η προσέγγιση που θα προσπαθήσουμε να υλοποιήσουμε δίνει μια παρουσίαση του AI (με λογική τέτοια για υλοποίηση και σε άλλα project ).
Ο σκοπός είναι να χρησιμοποιήσουμε το esp32 ( ή το nano 33 ble sense ως πλατφόρμα που ήδη αναπτύσσονται AI λύσεις). Όμως το esp32 με λίγο μεγαλύτερη υπολογιστική ισχύ θα αποτελέσει την φθηνή εναλλακτική μας(τα κλασικά mcu όπως uno,nano etc αποκλείονται λόγω χώρου του προγράμματος που απαιτείται)
Υλικά : 
Α) ρομπότ: https://grobotronics.com/robot-smart-car-2wd.html  = €12.90
Β)  esp32 : https://grobotronics.com/esp32-development-board-nodemcu-32s.html =€11.00
(Γ) breadboard : https://grobotronics.com/breadboard-400-tie-point-white-half-size.html =€3.20
 
Δ) 2Χ hsr-04 : https://grobotronics.com/ultrasonic-sensor-sr04.html  =2Χ€2.50  ΚΑΙ βάση αισθητήρα Χ2: https://grobotronics.com/mounting-bracket-for-ultrasonic-sensor.html =2Χ€0.60
Ε)μπαταρία: 2Χ18650 https://grobotronics.com/ncr18650b-3350mah-panasonic.html =2Χ€9.90
ΚΑΙ ΜΠΑΤΑΡΙΟΘΗΚΗ https://grobotronics.com/2x18650-wire-leads.html  =€1.20
Ζ)ΚΑΛΩΔΙΑ: https://grobotronics.com/jumper-wires-20cm-male-to-male-pack-of-30.html = €2.40
 Η)ΡΥΘΜΙΣΤΗΣ ΤΑΣΗΣ https://grobotronics.com/dc-dc-step-down-1.3-35v-3a.html = €2.90 
Θ)MOTOR DRIVER : https://grobotronics.com/dual-motor-driver-module-l298n.html = €4.20
{Ο ΡΥΘΜΙΣΤΗΣ ΤΑΣΗΣ ΠΟΥ ΠΡΟΤΕΙΝΩ ΔΕΝ ΕΊΝΑΙ ΑΠΑΡΑΙΤΗΤΟ ΥΛΙΚΟ ΠΡΟΣΔΙΔΕΙ ΌΜΩΣ ΜΙΑ ΠΟΙΟΤΗΤΑ ΣΤΟ ΕΡΓΟ ΟΠΩΣ ΚΑΙ ΤΗΝ ΔΥΝΑΤΟΤΗΤΑ ΝΑ ΧΡΗΣΙΜΟΠΟΙΗΘΕΙ ΞΑΝΑ ΚΑΙ ΞΑΝΑ ΜΕ ΤΡΟΠΟΠΟΙΗΣΕΙΣ}
ΣΥΝΟΛΟ: 63,80 €

Προσθήκη πλακέτας esp32 στο arduino ide

Δείτε τι πρέπει να κάνετε για να εγκαταστήσετε τις πλακέτες  ESP32 στο Arduino IDE:

Ανοίξτε το Arduino IDE. Βεβαιωθείτε ότι βρίσκεστε στην έκδοση 1.8 ή νεότερη, αν όχι, ενημερώστε το IDE με την πιο πρόσφατη έκδοση.

Κάντε κλικ στο μενού Αρχείο στην επάνω γραμμή μενού.

Κάντε κλικ στο στοιχείο μενού Προτιμήσεις. Αυτό θα ανοίξει ένα παράθυρο διαλόγου Προτιμήσεις.

Αναζητήστε το πλαίσιο κειμένου με την ένδειξη "Επιπλέον URLs διαχειριστή πλακετών".

Εάν υπάρχει ήδη κείμενο σε αυτό το πλαίσιο, προσθέστε κώμα στο τέλος του και, στη συνέχεια, ακολουθήστε το επόμενο βήμα.

Επικολλήστε τον παρακάτω σύνδεσμο στο πλαίσιο κειμένου-https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

Κάντε κλικ στο κουμπί OK για να αποθηκεύσετε τη ρύθμιση.

Ανοίξτε-πατήστε την επιλογή εργαλεία απο την πάνω μπάρα του arduino ide (αφού πρώτα ανοίξετε το πρόγραμμα)
Επιλέξτε πλακέτα και μετά διαχειριστής πλακετών.
Γράφετε esp32 και επιλέγετε Esp32 (by espresif).Έπειτα εγκατάσταση.

3ο βήμα:

Ανεβάστε το πρόγραμμα-ino στην πλακέτα: αφού κατεβάσετε όλο το φάκελο https://github.com/nektarios25ma/Artificial-Intelligence-Eyes-/tree/main/AI_es32TEST2 απο τον παραπάνω σύνδεσμο και ανοίξετε το AI_es32TEST2.ino.


Υ.Γ. Απο τα εργαλεία στο arduino ide διαλέξτε πλακέτα :nodeMCU-32S
Στον κώδικα έχει προβλεφθεί να μπουν led neo pixel όπου θα δείχνουν σε ποιό στάδιο βρίσκεται ο κώδικας: εκπαίδευση.είσοδος ,κρυμμένοι κόμβοι και έξοδος( 27=3χ9 leds neo pixel).
VIDEO ΕΠΙΔΕΙΞΗΣ : https://drive.google.com/file/d/1QdVs-U6b4qwq3YEPzns-x6yr3CGYF0Go/view?usp=sharing
VIDEO ΕΠΙΔΕΙΞΗΣ ΑΠΟ ΤΟΥΣ ΜΑΘΗΤΕΣ: https://www.youtube.com/watch?v=39_9H6-PB2Q&t=1s

ΠΗΓΕΣ
VIDEO: https://www.youtube.com/watch?v=jmmW0F0biz0

WIKIPEDIA NEURAL NETWORKS LINK: https://el.wikipedia.org/wiki/%CE%9D%CE%B5%CF%85%CF%81%CF%89%CE%BD%CE%B9%CE%BA%CF%8C_%CE%B4%CE%AF%CE%BA%CF%84%CF%85%CE%BF

 

ΕΙΣΑΓΩΓΗ ΣΤΟ ESP32 : https://dronebotworkshop.com/esp32-intro/

 

NEURAL NETWORK ΕΙΣΑΓΩΓΗ ΜΕ ΑΠΛΟ ΠΑΡΑΔΕΙΓΜΑ ΣΕ ARDUINO UNO: https://www.the-diy-life.com/running-an-artificial-neural-network-on-an-arduino-uno/

 
