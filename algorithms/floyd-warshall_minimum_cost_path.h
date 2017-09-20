Seja W = Matriz nxn = Matriz de adjacência
e Pred = Matriz nxn = Matriz de predecessores

// Só precisa do Pred se quiser saber o caminho
para i <- 1 até n
    para j <- 1 até n
        se W[i][j] < ∞ então
            pred[i][j] <- i
        fim se
    fim para
fim para

n <- |rows[W]|
para k <- 1 até n
    para i <- 1 até n
        para j <- 1 até n
            se W[i][j] > W[i][k] + W[k][j] então
                W[i][j] <- W[i][k] + W[k][j]
                Pred[i][j] <- Pred[k][j]
            fim para
        fim para
    fim para
fim para
