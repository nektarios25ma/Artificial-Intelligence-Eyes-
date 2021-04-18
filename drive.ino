void drive()  //  start driving
{
  int cal = 5;
  switch(out)
  {
    case 0: digitalWrite(motA_1, LOW); digitalWrite(motA_2, HIGH);  digitalWrite(motB_1, HIGH); digitalWrite(motB_2, LOW);ledcWrite(Channel_0, 170+battery+cal); ledcWrite(Channel_1, 135+battery); delay(420);   break;
    case 1: digitalWrite(motA_1, HIGH); digitalWrite(motA_2, LOW);  digitalWrite(motB_1, HIGH); digitalWrite(motB_2, LOW);ledcWrite(Channel_0, 0+battery+cal); ledcWrite(Channel_1, 155+battery);   break;
    case 2: digitalWrite(motA_1, HIGH); digitalWrite(motA_2, LOW);  digitalWrite(motB_1, HIGH); digitalWrite(motB_2, LOW);ledcWrite(Channel_0, 170+battery+cal); ledcWrite(Channel_1, 170+battery);   break;
    case 3: digitalWrite(motA_1, HIGH); digitalWrite(motA_2, LOW);  digitalWrite(motB_1, HIGH); digitalWrite(motB_2, LOW);ledcWrite(Channel_0, 155+battery+cal); ledcWrite(Channel_1, 0+battery);  break;
    case 4: digitalWrite(motA_1, HIGH); digitalWrite(motA_2, LOW);  digitalWrite(motB_1, LOW); digitalWrite(motB_2, HIGH);ledcWrite(Channel_0, 135+battery+cal); ledcWrite(Channel_1, 170+battery); delay(420);  break;
    //case 5: digitalWrite(motA_1, LOW); digitalWrite(motA_2, HIGH);  digitalWrite(motB_1, LOW); digitalWrite(motB_2, HIGH);ledcWrite(Channel_0, 170); ledcWrite(Channel_1, 170);   break;   
  }
}
