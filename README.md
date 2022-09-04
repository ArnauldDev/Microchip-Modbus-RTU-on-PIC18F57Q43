# Microchip Modbus RTU implémenter sur PIC18F57Q43

Création d'une implémentation du protocole Modbus RTU sur microcontrôleur PIC.

## Matériels et logiciels nécessaires

* Une [carte PIC18F57Q43 Curiosity Nano](https://www.microchip.com/en-us/development-tool/DM164150) (vous pouvez la trouver sur Microchip Direct, mais aussi sur Mouser, Digikey et d'autres magasins de composants électroniques en ligne en recherchant le code DM164150).</br>
Voir en bas de la page Internet de la carte la section documentation, le manuel d'utilisation et le schéma de la carte est disponible.
* Un [câble USB type A vers USB micro B](https://media.ldlc.com/r374/ld/products/00/01/20/16/LD0001201600_2.jpg)
* La dernière version de MPLAB X IDE, ici la version utilisée est la [v6.00](https://www.microchip.com/mplab/mplab-x-ide)
* La dernière version du compilateur XC8, la version utilisée est la [v2.40](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers#MPLAB%20XC%20Compiler%20Choices) (celle-ci est utilisé à la fois pour les PIC et les AVR)
* Logiciel ce communication série [Docklight V2.4](https://docklight.de/downloads/)

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

## Mise en oeuvre de l'UART

<progress value="10" max="100"><span class="wb-inv">10 %</span></progress>

### Terminal sérial

![Test de la carte CuriosityNano](images/docklight-demo-pic18f57q43-curiosity-nano.png)

---

## Liens Internet

* [Wikipedia Modbus](https://fr.wikipedia.org/wiki/Modbus)
* [Cours Liaison série Modbus RS 485](http://www.ac-grenoble.fr/ecole.entreprise/CRGE/cteressources/modbus/Protocole_Modbus.pdf)
* [Modbus RTU frame description](https://ozeki.hu/p_5854-modbus-rtu.html)
* Microchip, [PIC18F57Q43 Curiosity Nano Evaluation Kit - Part Number: DM164150](https://www.microchip.com/developmenttools/ProductDetails/DM164150)
* Blog, [PIC18F57Q43 Curiosity Nano + MPLAB Code Configurator](https://www.settorezero.com/wordpress/curiosity-nano-code-configurator-per-entrare-nel-mondo-dei-microcontrollori-pic-senza-sforzo-e-in-economia/)
* GitHub, [Cyb3rn0id / Microchip_Curiosity_Nano_Examples](https://github.com/Cyb3rn0id/Microchip_Curiosity_Nano_Examples)
