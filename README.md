# PROJET "Système dynamique"
## Mode d'emploi
 - Les fichiers nécessaires pour utiliser/compiler le programme sont logés dans src/Point. 
 - Une fois lancé, le programme vous demandera le système que vous souhaitez afficher (Force de Lorenz, ou attracteur de Rossler), tappez simplement 1 ou 2.
 - Vous devrez rentrer les constantes, l'intervalle de temps souhaité entre les points et pour l'affichage, puis les coordonées initiales des points. Attention, le programme attend des nombres réels. Des constantes vous sont proposées un peu plus bas.
 - C'est fini, vous n'avez plus qu'à attendre que le programme calcule les points, et le graphique s'affichera. Attention: gnuplot devra être installé sur votre machine. Si vous souhaitez les afficher à l'aide d'un autre programme, vous trouverez toutes les coordonnées dans le fichier "Lorenz.dat". 

## Constantes "basiques" des systèmes 
### Interactions de Lorenz: 
- sigma : 10
- ro : 28
- bêta: 2.667 (approximation de 8/3)
### Attracteur de Rossler
- sigma : 0.1
- ro : 0.1
- bêta: 14

**Vous êtes libre de choisir d'autres constantes, mais celles-ci donnent une idée assez précise des systèmes dynamiques**

## Crédits
Projet réalisé par Clément REGIS, Skander SABBAGH, et Antoine PAULUS, groupe TDA2 et TDA3 en L2 C.U.P.G.E. à l'université Toulouse III - Paul Sabatier.
