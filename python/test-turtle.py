import turtle
def main():
    #declaração de variáveis
    i = int(0)
    ang = float(0.0)
    lados = int(0)
    t = int(0)

    #atribuição de valores
    i = 0 #inicialização da variavel de controle (vc)
    lados = 1000
    t = 1000/lados
    ang = 360/lados

    #criando a tartaruga e a tela
    g = turtle.Turtle()
    w = turtle.Screen()
    g.speed(1000)
    g.shape("turtle")

    #processamento e saída
    while (i < lados): #condição de parada
        g.forward(t)
        g.left(ang)
        i = i + 1  #atualização da variavel de controle (vc)

    #mantendo a janela aberta até o clique do mouse
    w.exitonclick()

    return 0

if __name__ == "__main__":
    main()

#----------------------------------------------------------------	