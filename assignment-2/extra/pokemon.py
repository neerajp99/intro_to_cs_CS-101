import turtle

bob = turtle.Turtle()
bob.circle(100)
bob.penup()

bob.setposition(-100, 100)
bob.pendown()
bob.forward(200)
bob.penup()
bob.setposition(-20, 120)
bob.left(135)
bob.pendown()
bob.forward(50)
bob.left(135)
bob.forward(40)
bob.left(90)
bob.forward(37)

bob.penup()
bob.setposition(20, 120)
bob.left(45)
bob.pendown()
bob.forward(50)
bob.right(135)
bob.forward(40)
bob.right(90)
bob.forward(37)

bob.penup()
bob.setposition(-30,125)
bob.pendown()
bob.dot(5)

bob.penup()
bob.setposition(30, 125)
bob.pendown()
bob.dot(5)

bob.penup()
bob.setposition(-20,140)
bob.left(100)
bob.pendown()
bob.forward(25)

bob.penup()
bob.setposition(20,140)
bob.right(20)
bob.pendown()
bob.forward(25)

bob.penup()
bob.setposition(-50, -100)
bob.pendown()
bob.write("Voltorb", font=(80))
