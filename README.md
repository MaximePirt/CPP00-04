# CPP00-04 — 42 C++ Piscine Modules

Exercices des modules C++00 à C++04 du cursus 42, couvrant l'introduction au C++ : classes, gestion mémoire, surcharge d'opérateurs, héritage et polymorphisme.

## Contenu

### Cpp00 — Namespaces, classes, membres, initialisation
- `ex00` — Megaphone : manipulation de chaînes et arguments.
- `ex01` — PhoneBook : carnet de contacts avec classes `Contact` et `PhoneBook`.

### Cpp01 — Mémoire, pointeurs, références
- `ex00` — Zombie : allocation sur la pile vs sur le tas (`newZombie` / `randomChump`).
- `ex01` — zombieHorde : allocation d'un tableau d'objets avec `new[]`.
- `ex02` — Pointeurs vs références.
- `ex03` — HumanA / HumanB : agrégation par composition vs par référence (`Weapon`).
- `ex04` — Lecture/écriture de fichiers et remplacement de chaînes.
- `ex05` — Harl : pointeurs sur fonctions membres, `switch`.

### Cpp02 — Forme canonique orthodoxe, surcharge d'opérateurs
- `ex00`/`ex01` — Fixed : classe de nombres à virgule fixe, forme canonique (constructeur, destructeur, copie, affectation).
- `ex02` — Surcharge des opérateurs arithmétiques et de comparaison sur `Fixed`.

### Cpp03 — Héritage
- `ex00` — ClapTrap : classe de base.
- `ex01` — ScavTrap : héritage simple.
- `ex02` — FragTrap : héritage multiple de niveau.
- `ex03` — DiamondTrap : héritage en diamant (`ScavTrap` + `FragTrap`) et résolution d'ambiguïté.

### Cpp04 — Polymorphisme, classes abstraites, interfaces
- `ex00` — Animal / Dog / Cat vs WrongAnimal / WrongCat : polymorphisme et fonctions virtuelles.
- `ex01` — Gestion mémoire profonde (deep copy) avec pointeurs membres (`Brain`).
- `ex02` — Classe abstraite `Animal`.
- `ex03` — Système de Materia : interfaces (`ICharacter`, `IMateriaSource`), classe abstraite `AMateria`, polymorphisme dynamique.

## Build

Chaque exercice contient son propre `Makefile` :

```bash
cd Cpp0X/exXX
make
```

## Environnement Docker

Un environnement de compilation est fourni via Docker :

```bash
docker compose build
docker compose run cpp
```
