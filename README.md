# Bomberman-cpp :

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

- Installez git sur son ordinateur => ![Installer git](https://git-scm.com/downloads)

- Installez vcpkg sur votre ordinateur => ![Installer vcpkg](https://vcpkg.io/en/getting-started.html)

- Installez Visual Studio 2022 sur votre ordinateur => ![Installer Visual Studio 2022](https://visualstudio.microsoft.com/fr/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false)

- Clonez ce repository git sur votre ordinateur en tappant cette commande dans un terminal :

```
https://github.com/Dorian2002/Bomberman-cpp.git
```

- Ouvrez le .sln du projet avec Visual Studio 2022, cliquez en haut sur Projet, puis dans propriétés de configuration cliquez sur vcpkg et enfin dans general en haut au milieu, changez ```Use Vcpkg Manifest``` à ```Oui```.

- Dans l'explorateur de solution, faites clique-droit sur la solution et ```Générer la solution```.

- Cliquez sur la flèche verte pleine juste sous la barre d'outils.

- Le jeu est lancé, profitez bien !
