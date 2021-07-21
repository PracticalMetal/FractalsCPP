# Fractals
Fractals are indefinitely complex patterns that are self-similar across different scales. Simply understood, fractals are indefinitely self repeating structures and are seen in several parts of our surrounding ranging from tree branches to leaves and much more. One of the most famous examples of a fractal is the Seirpinski Triangle.


![Sierpinski Triangle](https://user-images.githubusercontent.com/73461832/126078961-1d25edb2-a787-4c7d-9c57-ca17de314baa.png)

***Sierpinski Triangle***


### Purpose
---
With this project I am to learn the important concepts of OpenCV Library and hope to implement my learning into computing different fractal pattern and along with learn the basics of Makefile, which can help me build several files in a go.

### Tools:
---
1. C++
2. OpenCV
3. Make File

### Chaos Game
---
### What defines the Game?
---
1. Drawing rules: Distance travelled from the previous point to the new point.
2. Structural points: 
3. Number of iterations

#### The equation
X<sub>n+1</sub> = X<sub>n</sub> + (P.X - X<sub>n</sub>).A

Y<sub>n+1</sub> = Y<sub>n</sub> + (P.Y - Y<sub>n</sub>).B

$A,B \in (0,1)$

***For Sierpinski Triangle*** A,B = 0.