# Bomberman-cpp : english (French version below)

## Contents :

- Project presentation
- Keys and gameplay
- Open project

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/8df5a5165721189.640c363fc4078.png)

## Project presentation :

I developed, in a team of 4 people, a Bomberman like game in C++ with the SFML graphic library. This project was realized for a course of my third year of graduate school.

Bomberman is a 2D top-down game. The player's objective is simple, to escape, and to do this he must break the bricks on the map with bombs and find the exit hatch. He must also be careful not to be attacked by the monsters around him.

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/c53876165721189.640c363f80535.png)

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/961729165721189.640c363f7f149.png)

## Keys and gameplay :

### Movements :

  - Forward : **Z**
  - Backward : **S**
  - Left : **Q**
  - Right : **D**

### Bombs:
  - Drop a bomb : **E**
  - Explosion : Bombs will autaumatically explode 3 seconds after being dropped.

### Bonuses :

- You can increase your speed by walking on bonuses, represented by winged shoes.

### Break walls :

- You can destroy brick walls by dropping a bomb right next to it.

### Enemies : 

- Enemies are walking all around the the map without seeking to attack, but you'll die if they walk on you.

### Escape :

- A hatch is hiding womewhere under a brick wall, you have to find and walk on it to escape.

## Open project :

- Install git => ![https://git-scm.com/downloads](https://git-scm.com/downloads)

- Install vcpkg => ![https://vcpkg.io/en/getting-started.html](https://vcpkg.io/en/getting-started.html)

- Install Visual Studio 2022 => ![https://visualstudio.microsoft.com/fr/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false](https://visualstudio.microsoft.com/fr/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false)

- Clone this repository by typing and running this command on a terminal :
```
git clone https://github.com/Dorian2002/Bomberman-cpp.git
```

- Open the .sln file in project with Visual Studio 2022, click on Projet tab at the top, then in the configuration properties click on vcpkg et finally in general at the middle and top, change ```Use Vcpkg Manifest``` to ```Yes```.

- In the solution explorer, right-click on the solution and then ```Generate the solution```.

- Click on the solid green arrow just below the toolbar.

- The game is running, have fun !


# Bomberman-cpp : français

## Sommaire :

- Presentation du projet
- Touches du jeu et macaniques
- Ouvrir le projet

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/8df5a5165721189.640c363fc4078.png)

## Presentation du projet :

J'ai développé, au sein d'une équipe de 4 personnes, un jeu Bomberman like en C++ avec la librairie graphique SFML. Ce projet a été réalisé dans le cadre d'un cours de ma troisième année d'école supérieure.

Le Bomberman est un jeu 2D en vue du dessus. L'objectif du joueur est simple, s'échapper, et pour cela il doit casser les briques de la carte à l'aide de bombes et trouver la trappe de sortie. Il doit aussi faire attention à ne pas se faire attaquer par les monstres autour de lui.

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/c53876165721189.640c363f80535.png)

![](https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/961729165721189.640c363f7f149.png)

## Touches du jeu :

- Déplacements :

  - Avancer : **Z**
  - Reculer : **S**
  - Aller à droite : **Q**
  - Aller à gauche : **D**

- Les Bombes:
  - Poser une bombe : **E**

## Mécaniques de jeu :

### Bonus :

- Vous pouvez augmenter votre vitesse en marchant sur les bonus, représentés par des chaussures ailées.

### Détruire les murs :

- Vous pouvez détruire les murs de briques en posant une bombe à coté, ces dernières explosent en croix.

### Les ennemies : 

- Des ennemis se déplacent sur la carte sans chercher à vous attaquer mais ils vous tueront si vous allez à leur rencontre.

### S'échapper :

- Une trappe se cache sous les briques, à vous de la trouver et de marcher dessus pour vous échapper.

## Ouvrir le projet :

- Installez git sur son ordinateur => ![https://git-scm.com/downloads](https://git-scm.com/downloads)

- Installez vcpkg sur votre ordinateur => ![https://vcpkg.io/en/getting-started.html](https://vcpkg.io/en/getting-started.html)

- Installez Visual Studio 2022 sur votre ordinateur => ![https://visualstudio.microsoft.com/fr/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false](https://visualstudio.microsoft.com/fr/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false)

- Clonez ce repository git sur votre ordinateur en tappant cette commande dans un terminal :

```
git clone https://github.com/Dorian2002/Bomberman-cpp.git
```

- Ouvrez le .sln du projet avec Visual Studio 2022, cliquez en haut sur l'onglet Projet, puis dans propriétés de configuration cliquez sur vcpkg et enfin dans general en haut au milieu, changez ```Use Vcpkg Manifest``` à ```Oui```.

- Dans l'explorateur de solution, faites clique-droit sur la solution et cliquez sur ```Générer la solution```.

- Cliquez sur la flèche verte pleine juste sous la barre d'outils.

- Le jeu est lancé, profitez bien !
