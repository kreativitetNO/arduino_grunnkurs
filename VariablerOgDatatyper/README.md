# Variabler og datatyper

En datamaskin (PC, microcontroller, DSP) har i prinsippet 4 forskjellig type systemer.

1. Systemer for å lagre data (RAM, SDD, HDD)
2. Systemer for å bearbeide data (cpu, gpu)
3. Systemer for å hente og sende data (USB, nettverk)
4. Systemer for å transportere data mellom de 4 andre (busser)

Data lagres i en eller annen form for minne og består av en rekke 0'ere og 1'ere, og disse grupperes i det vi kaller objekter. Variabler gir navn til disse objektene så vi kan referere til de og se på og endre dataen i objektene.

Datatyper beskriver hvordan vi kan tolke gruppene med 0'ere og 1'ere og også hvor store de er. En gruppe som består av `00100100` kan f.eks representere tallet 36 eller kommatallet 8.2.

For enkelhets skyld kan vi si at det fins 3 klasser med datatyper:

1. Enkle datatyper
2. Kompositt datatyper
3. Samlinger med like datatyper

## Enkle datatyper

Enkle datatyper kan inneholde én bestemt verdi som - for eksempel - alder, kjønn, antall hjul, temperatur, av/på.

## Kompositt datatyper

En kompositt datatype er en sammensetning av enkle datatyper og/eller andre kompositt datatyper. Disse lager vi som regel selv eller får de via kode skrevet av andre. De er ikke innebygget i selve språket. Disse fins i 2 varianter: _class_ og _struct_. I dette kurset holder vi oss til det vi kaller en _struct_.

Fordelen med kompositt typer er at vi slipper å lage en variable for en persons alder, en for personens fødselsdato, en for hårfarge osv. Vi kan samle alle disse variablene i en datatype vi kaller "Person". Det er viktig å merke seg at vi kan også lage en kompositt type som heter Dato som inneholder verdiene for dato, måned og år og legge denne i "Person" datatypen for å representere personens fødselsdato. Denne egenskapen med datatyper som inneholder datatyper kan i teorien fortsette i det uendelige med datatyper som inneholder datatyper som inneholder datatyper osv.

## Samlinger av like datatyper

På samme måte som kompositt datatyper gjør det enklere å samle grupper med relaterte objekter, kan vi gruppere like datatyper så vi slipper å lage variabler som heter "person1", "person2", "person3" osv, og istedenfor kan samle alle i en liste vi kan kalle "personer".

Noen av dere som tar dette minikurset har kanskje programmert litt fra før og vet litt om hvordan dere oppretter variabler i kode. Men det å ha et klart bilde i hodet av hva som egentlig foregår i minne - i hvert fall konseptuelt - kan være nyttig for videre forståele, spesielt i relativt lavnivå språk som c og c++.

# Datatyper på Arduino

Hele filosofien bak Arduino er at det skal være enkelt å sette seg inn i. Vi _kan_ gjøre kompliserte ting og bruke avanserte kodeteknikker på Arduino når vi får mer erfaring, men Arduino teamet har definert og laget en rekke ting så vi slipper å forholde oss til hele kompleksiteten til C++ (som inkluderer C) som er det vanligste språket å bruke når vi skal programmere Arduinoen.

En av disse forenklingene er at de har definert et begrenset sett med enkle datatyper. Så selv om Arduino støtter alle de enkle datatypene til C++ - som er ganske mange - lister de kun opp de folk flest kommer til å trenge i starten på [denne siden](https://www.arduino.cc/reference/en/).

For å unngå en oppramsing som tross alt allerede fins på nevnte side, beskrives ikke disse nærmere nå. Alle detaljene finner man der. Jeg kommer istedenfor til å si litt om de forskjellige typene når det har praktisk betydning for eksemplene.

# Noen praktiske råd

Noen av typene beskrives som "signed" eller "unsigned". Det betyr at noen av typene kan beskrive både positive og negative tall (signed) eller bare tall fra 0 og oppover (unsigned). Det er ofte lurt å bruke signed typer når vi skal gjøre noe aritmetisk som f.eks pluss, minus, ganger og dele på og andre liknende operasjoner. Unsigned typer brukes i forbindelse med "bitmanipulering" som vi kommer tilbake til.

Et annet godt råd er å ikke anta at det at man bruker signed/unsigned eller typer som bare kan inneholde visse verdier