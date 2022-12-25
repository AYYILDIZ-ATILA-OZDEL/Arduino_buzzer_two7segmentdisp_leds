# Arduino_buzzer_two7segmentdisp_leds

A system has been developed that gives a warning to the user with sound and RGB light at different frequencies from the buzzer when it is 0 or 99 by counting forward or down according to the starting number and password that the user will enter from the serial monitor, and stops these warnings when the password is entered at the beginning.


# Bu projenin temel amacı buzzer, 2 adet 7 bölmeli ekran, 1 adet basma düğmesi, 2 adet led, 1 adet RGB led, 2 adet 7 bölümlü ekran çözücü CD4511 kullanılarak kullanıcıdan alınacak başlangıç ve kullanıcıdan alınacak şifre ile bir sistem tasarlamaktır. Bu sistemin çalışma prensibi temelde şu şekildedir. kullanıcı "n" adında bir başlangıç sayısı girer. ve ardından "b" adında bir şifre girmektedir. Sistemdeki basma düğmesine 1 kez basıldığında sistem  "n" sayısından geri doğru saymaya başlar. 7 bölmeli ekrandaki sayı tek bir sayı ise ledimiz yeşil çift bir sayı ise kırmızı yanarak estetik bir görüntü de oluşturmaktadır. ekrandaki sayı 0 olduğunda buzzer belirlenen frekansta belirlenen sürede ses vermeye başlar. ve bu esnada kullanılan RGB led yanmaya başlar. eğer ki sayaca 2 kez basılırsa bu sefer sistem ileri sayma moduna geçer. bu da yine aynı mantıkla 99 a ulaştığında yine belirli bir frekansta ses çalar ve rgb led yanmaya başlayarak kullanıcıya uyarı verir. her iki durumda da sistem başta belirlenen şifre girilene kadar çalışmaya devam eder. 


# The main purpose of this project is to design a system using a buzzer, 2 7-segment screens, 1 push button, 2 LEDs, 1 RGB LED, 2 7-segment decoder CD4511, with the start to be obtained from the user and the password to be obtained from the user. The working principle of this system is basically as follows. The user enters a starting number named "n". followed by a password named "b". When the push button on the system is pressed once, the system starts counting down from the number "n". If the number on the 7-segment screen is an odd number, our LED lights green and if it is an even number, it creates an aesthetic appearance. When the number on the screen is 0, the buzzer starts to sound at the specified frequency in the specified time. and the RGB LED used at this time starts to light up. If the counter is pressed 2 times, this time the system will enter the counting forward mode. With the same logic, when it reaches 99, it plays a sound at a certain frequency and the RGB LED starts to light up, giving a warning to the user. In both cases, the system continues to work until the password set at the beginning is entered.

# Der Hauptzweck dieses Projekts besteht darin, ein System mit einem Summer, 2 7-Segment-Bildschirmen, 1 Taster, 2 LEDs, 1 RGB-LED, 2 7-Segment-Decoder CD4511 zu entwerfen, wobei der Start vom Benutzer und dem erhalten werden soll Passwort vom Benutzer zu erfragen. Das Arbeitsprinzip dieses Systems ist im Wesentlichen wie folgt. Der Benutzer gibt eine Startnummer namens "n" ein. gefolgt von einem Passwort namens "b". Wenn die Drucktaste am System einmal gedrückt wird, beginnt das System mit dem Countdown ab der Zahl „n“. Ist die Zahl auf dem 7-Segment-Bildschirm eine ungerade Zahl, leuchtet unsere LED grün und ist es eine gerade Zahl, sorgt sie für ein ästhetisches Erscheinungsbild. Wenn die Zahl auf dem Bildschirm 0 ist, beginnt der Summer mit der angegebenen Frequenz in der angegebenen Zeit zu ertönen. und die zu diesem Zeitpunkt verwendete RGB-LED beginnt zu leuchten. Wenn der Zähler zweimal gedrückt wird, wechselt das System dieses Mal in den Vorwärtszählmodus. Mit der gleichen Logik spielt es bei Erreichen von 99 einen Ton mit einer bestimmten Frequenz ab und die RGB-LED beginnt zu leuchten und gibt dem Benutzer eine Warnung. In beiden Fällen arbeitet das System solange weiter, bis das eingangs eingestellte Passwort eingegeben wird.
