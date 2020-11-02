# Kapitel 1 Begriffe
* Vertraulichkeit:
    * Zugriff auf Informationen ist auf autorisierte Personen begrenzt. Nicht autorisierte Personen können auf die Informationen nicht zugreifen. 
* Integrität:
    * Informationen dürfen nur von Personen verändert werden, die dazu autorisiert sind. Strengere Auslegung: Die Informationen müssen korrekt, konsistent und vor Manipulation geschützt sein.
* Verfügbarkeit:
    * Autorisierte Personen und Systeme können auf die Informationen und Ressourcen zugreifen, wenn diese benötigt werden

# Kapitel 3
## ISO 9000/1
* Wir halten uns an unsere Vorgaben und haben diese dokumentiert
## ISO/IEC 15408 : Common Creteria
* Was erfüllt werden soll in PP
* Wie werden eigenschaften erfüllt : TOA
* Es werden `Produkte` zertifiziert
### Warum nicht immer EAL 7:
* sehr aufwendig
* nicht mgl
* oft ausreichend untere Studen zu nehmen
* Kosten und Dauer im Blick haben

## ISO 27001 : Infromation Security Managment Systems
* Es werden keine `Produkte` sondern `Systeme`(Organisatorisches System)
* Kontext der Organisation verstehen (Womit wird Geld verdient)
* Erwartungen -> defenierne
* Scope (was ist mit drin, was nicht)
* Anhang A: sind die Security Controls -> darum muss man sich `konkret` kuemmern

# Kapitel 4 Kryptographie
   -  überall vorhanden

## Vorgehen
     1. Handschake
     2. Record Layer

### Symmetrische Verschlüsselung

* m und k müssen geheim gehalten werden
* der ganze Rest auf Folie 5 nicht
* gerade die Algorithmen nicht!!! Die sind mgl bekannt

### One time Key vs Multi use key
* OTK wird einmal genutzt
* MUK wird für mehrere Dokumente genutzt

### Hauptaufgaben von Krypto
     1. Sicherer Schlüsselaustausch
     2. Sichere Kommuniktation
     3. Verfügbarkeit ist `nicht` garantiert

### Weitere Aufgaben
     Digitale Signatur
     Anonyme Kommunikation
     ... Folie 10

### Allgemeines Vorgehen

1. Exakte Definition und Modellierung der Bedrohung
2. Vorschlag einer Konstruktion (Algorithmus, Protokoll, Nachrichten)
3. Beweis, dass der Bruch der Konstruktion bei der Bedrohung aus (1) identisch ist mit der Lösung eines zugrundeliegenden, schwierigen Problems

