### Polynomials ###
Believe it or not, Polynomials have been a part of our lives in some way. Some more than others. Polynomails comes in a range of degrees from 1 to n. They can come in forms such as ax + bx + cx .. or a(x + b), etc. This application is a C++ console-based application that takes a total of two polynomials, multiplies with each other, and works out the indefinite (derivative) and the definite (anti-derivative) values of the polynomial. 
<br />
<br />
**How Polynomials work**<br />
Polynomials come in the form of:<br />
<img src="http://i.imgur.com/pO7bIjw.png"/><br />
To multiply polynomials: <br />
<img src="http://i.imgur.com/pn950IT.png"></br>
An indefinite integral is defined by:<br />
<img src="http://i.imgur.com/ForDBdg.png"/><br />
A definite integral is simply two indefinite integrals, but each x value is substituted with a high x and a low x value, which is then caluclated:<br />
<img src="http://i.imgur.com/l6ATgBi.png"></br>

**How to start the application**
```
./Polynomials
```
The application will ask the user to specify 2 polynomials (Part A), and an X value (Part B).
<br />
<br />

**Example Input and Outputs**
```
First polynomial: 1 4 -0.25
Second Polynomial: 1 4 -0.25
X-Value: 16
```
The above inputs will result in the following output:
```
Let A = 4x^0 + -0.25x^1
Let B = 4x^0 + -0.25x^1
Let C = A * B = 16x^0 + -2x^1 + 0.0625x^2
A(16) = 0.0
A'(12.0) - A'(0) = 30
```
**Still to do**
- [ ] Allow for application to accept user input high and low x values
- [ ] Print out proper readable messages

**See also**<br />
Polynomials: https://en.wikipedia.org/wiki/Polynomial <br />
Derivatives: https://en.wikipedia.org/wiki/Derivative <br />
Anti-derivatives: https://en.wikipedia.org/wiki/Antiderivative
