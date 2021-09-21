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

Στον κώδικα έχει προβλεφθεί να μπουν led neo pixel όπου θα δείχνουν σε ποιό στάδιο βρίσκεται ο κώδικας: εκπαίδευση.είσοδος ,κρυμμένοι κόμβοι και έξοδος( 27=3χ9 leds neo pixel).
VIDEO ΕΠΙΔΕΙΞΗΣ : https://drive.google.com/file/d/1QdVs-U6b4qwq3YEPzns-x6yr3CGYF0Go/view?usp=sharing
VIDEO ΕΠΙΔΕΙΞΗΣ ΑΠΟ ΤΟΥΣ ΜΑΘΗΤΕΣ: https://www.youtube.com/watch?v=39_9H6-PB2Q&t=1s
