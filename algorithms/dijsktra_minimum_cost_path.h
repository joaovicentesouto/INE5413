// Inicia os valores
para todo v ∈ V[G]
     dist[v] <- ∞
     pai[v]  <- NULL
fim para
d[s] <- 0

// Vértices que ainda não foi determinado o menor caminho apartir de s
Q <- V[G]

// Verifica para cada vértice se o caminho de s -> (adjacente de u) é maior
// que o caminho de s -> u + u -> (adjacente de u)
enquanto Q != ø
         u <- extrair_min(Q)                     //Q ← Q - {u}
         para cada v adjacente a u
              se dist[v] > dist[u] + custo(u, v) então
                  dist[v] <- dist[u] + custo(u, v)
                  pai[v] <- u
              fim se
         fim para
fim enquanto
