Select *, 
    If(x+y>z and x+z>y and y+z>x, 'Yes','No') As triangle
From Triangle
