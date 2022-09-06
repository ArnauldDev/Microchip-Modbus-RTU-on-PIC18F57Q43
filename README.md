<h1>Evolution des programmes sur PIC18F57Q43</h1>

- [Le matériel et logiciel minumum requis](#le-matériel-et-logiciel-minumum-requis)
- [Carte CuriosityNano PIC18F57Q43](#carte-curiositynano-pic18f57q43)
- [Projet de mise en oeuvre simple du module UART](#projet-de-mise-en-oeuvre-simple-du-module-uart)
  - [Vu du terminal sérial](#vu-du-terminal-sérial)
- [Projet de mise en oeuvre avancé du module UART](#projet-de-mise-en-oeuvre-avancé-du-module-uart)
  - [Premimer test du programme via le terminal sérial](#premimer-test-du-programme-via-le-terminal-sérial)
- [A venir...](#a-venir)
- [Liens Internet](#liens-internet)

---

## Le matériel et logiciel minumum requis

* Une [carte PIC18F57Q43 Curiosity Nano](https://www.microchip.com/en-us/development-tool/DM164150) (vous pouvez la trouver sur Microchip Direct, mais aussi sur Mouser, Digikey et d'autres magasins de composants électroniques en ligne en recherchant le code DM164150).</br>
Voir en bas de la page Internet de la carte la section documentation, le manuel d'utilisation et le schéma de la carte est disponible.
* La dernière version de MPLAB X IDE, ici la version utilisée est la [v6.00](https://www.microchip.com/mplab/mplab-x-ide)
* La dernière version du compilateur XC8, la version utilisée est la [v2.40](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers#MPLAB%20XC%20Compiler%20Choices) (celle-ci est utilisé à la fois pour les PIC et les AVR)

---

## Carte CuriosityNano PIC18F57Q43

<html>
<!-- Tableau simple avec en-tête -->
<p align="center">
<a href="https://docs.google.com/document/d/1mcOm10D477hyFiMuCVZdUryhYyRF4xZHGxpxrDaOEMk/edit?usp=sharing" title="Curiosity Nano Development Platform" target="_blank">
<table style="margin-left: auto; margin-right: auto;">
  <tr>
    <td><img src="images/img_google_docs_icon.png" width="30"></td>
    <td>PIC18F57Q43 Curiosity Nano Evaluation Kit</td>
  </tr>
</table>
<img src="images/pic18f57q43-curiosity-nano-front.png" width="600">
</a>
</p>
</html>

---

## Projet de mise en oeuvre simple du module UART

Switch Branch : `git switch basic-use-of-uart`

### Vu du terminal sérial

![Test de la carte CuriosityNano](images/docklight-demo-pic18f57q43-curiosity-nano.png)

---

## Projet de mise en oeuvre avancé du module UART

Switch Branch : `git switch advanced-use-of-uart-with-fsm`

### Premimer test du programme via le terminal sérial

![Test de la carte CuriosityNano](images/docklight-demo-tester-click-leds.png)

---

## A venir...

Implémentation du protocole Modbus RTU sur microcontrôleur Microchip PIC18F57Q43, création d'une implémentation du protocole Modbus RTU sur microcontrôleur PIC.

---

## Liens Internet

* [Wikipedia Modbus](https://fr.wikipedia.org/wiki/Modbus)
* [Cours Liaison série Modbus RS 485](http://www.ac-grenoble.fr/ecole.entreprise/CRGE/cteressources/modbus/Protocole_Modbus.pdf)
* [Modbus RTU frame description](https://ozeki.hu/p_5854-modbus-rtu.html)
* Microchip, [PIC18F57Q43 Curiosity Nano Evaluation Kit - Part Number: DM164150](https://www.microchip.com/developmenttools/ProductDetails/DM164150)
* Blog, [PIC18F57Q43 Curiosity Nano + MPLAB Code Configurator](https://www.settorezero.com/wordpress/curiosity-nano-code-configurator-per-entrare-nel-mondo-dei-microcontrollori-pic-senza-sforzo-e-in-economia/)
* GitHub, [Cyb3rn0id / Microchip_Curiosity_Nano_Examples](https://github.com/Cyb3rn0id/Microchip_Curiosity_Nano_Examples)
