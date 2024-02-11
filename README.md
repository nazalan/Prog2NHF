# Programozás alapjai 2. Nagyházi feladat
## 1. Feladat 
Töltött részecskék
Készítsen objektummodellt töltött részecskék kölcsönhatásának modellezésére! Ezt követően 
az egymással kommunikáló objektumok határozzák meg a rájuk ható erőket, és 
helyváltoztatással határozzák meg a nyugalmi pozíciójukat!
Az objektumok kommunikációját szervezzük gyűrűbe. A gyűrűben egy N elemű vektort 
körbeküldve mindenki megismerheti a többi objektum helyzetét és töltését, így miden 
objektum ki tudja számolni a rá ható erőket, amiből számítható az elmozdulás. Az iteráció 
addig folytatódik, míg be nem áll az egyensúlyi helyzet, vagy az iterációs ciklusszám el nem 
ér egy előre megadott értéket. Olyan modellt tervezzen, hogy tetszőleges számú részecske is 
modellezhető legyen!
## 2. Feladatspecifikáció 
A program NEM realisztikus modellezést valósít meg.
A programban négy fajta töltés kölcsönhatásai modellezhetők, ezek a következők:
• elektron
• proton
• neutron
• bozon
Az elemi töltések nagyjából a rájuk jellemző fizikai jellemzőkkel rendelkeznek (töltés és 
tömeg).
Mindegyik részecske saját tulajdonságokkal bír.
• elektron: A hullám tulajdonságai miatt egyes körökben kimarad a kölcsönhatásból.
• proton: Egy körben több lépést is megtehet. (Számára az „idő múlása” (lépészámok)
nagyságrendje más, ennek a következménye, hogy gyorsabbnak tűnik a mozgása)
• neutron: Mivel nincsen töltése, ezért másképpen hat a többi részecskére, gravitációs 
vonzóerővel, tömege lényegesen nagyobb, mint a valóságban.
• bozon: Véletlenszerűségének köszönhetően minden körben más a töltése.
A töltések rögzítésére is van lehetőség a megadott pozícióban.
A töltések ütközésekor, azaz amikor egy pozícióba kerülnek, akkor rögzített töltésekké 
válnak, onnan „nem tudnak megegyezni” hová haladjanak tovább.
A program a modellezéshez szükséges adatokat egy fájlból olvassa be.
Ennek a fájlnak az első sorában a részecskék darabszáma szerepel(N).
Ezt követő N sorban pedig a töltés típusa (e, p, n, b), majd a helyvektorának három 
koordinátája x y z sorrendben.
Ezután pedig, hogy rögzített-e a töltés. (1-rögzített, 0-nem rögzített).
Ezeken kívül tartalmazza az időintervallumot (lépésszámot), ameddig a modellezés tartson. 
A program a kimenetet egy fájlba írja, amelyben az eltelt idő (lépésszám) utáni pozíció
jelenik meg minden részecskére a bemeneti sorrendben, valamint, hogy kialakult-e egyensúlyi helyzet.

