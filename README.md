# FractalsCPP

## What are Fractals?

Fractals are structures that replicate themselves at every scale.

***Sierpinski Triangle***

![Sierpinski Triangle](https://user-images.githubusercontent.com/73461832/126078961-1d25edb2-a787-4c7d-9c57-ca17de314baa.png)

#### Path
---
1. Generate Sierpinski Triangle using chaos game
2. Generate Barnsley's fern using IFS
   
#### Tools:
---
1. C++
2. OpenCV

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