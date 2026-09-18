## Lista de Exercícios comando ```for```

---

### 1. Painel de Lançamento Espacial

**Contexto:** Uma agência espacial precisa automatizar a contagem regressiva para o disparo de um novo microssatélite de monitoramento ambiental.

**Enunciado:** Escreva um programa em C que realize a contagem regressiva de lançamento, iniciando em 10 e descendo de 1 em 1 até 0. Ao final do laço, o programa deve exibir a mensagem `"Foguete lançado com sucesso!"`.

* **Foco:** Praticar decremento (`i--`) no laço `for`.

---

### 2. Monitoramento de Sensores na Estufa Inteligente

**Contexto:** Uma horta comunitária automatizada possui 6 sensores de temperatura instalados ao longo de um canteiro suspenso.

**Enunciado:** Crie um programa que use um laço `for` para solicitar e ler a temperatura registrada por cada um dos 6 sensores (valores decimais/`float`). Durante o laço, acumule os valores e, ao término, exiba a média aritmética das temperaturas lidas.

* **Foco:** Leitura de dados iterativa com `scanf` e padrão de soma acumulada (`soma += valor`).

---

### 3. Simulador de Cronômetro de Tabata (Treino Intervalado)

**Contexto:** Um aplicativo de treino físico precisa exibir os tempos de descanso ativo para o atleta respirar entre as séries.

**Enunciado:** O cronômetro de intervalo vai de 0 até 45 segundos, porém os avisos sonoros e visuais só acontecem de 5 em 5 segundos (0s, 5s, 10s, ..., 45s). Desenvolva um programa que utilize um único laço `for` para imprimir esses marcos temporais no formato: `"[X segundos] - Respire fundo..."`.

* **Foco:** Passo do laço com incremento customizado (`i += 5`).

---

### 4. Cofrinho da Maratona de Economia

**Contexto:** Para incentivar jovens a poupar, um desafio financeiro propõe guardar moedas ao longo de 12 semanas.

**Enunciado:** O usuário decide guardar uma quantia fixa por semana. O programa deve ler o valor do depósito semanal (ex: R$ 15.00) e, utilizando um `for` de 1 a 12, exibir o saldo acumulado ao término de cada semana no formato:

`"Semana X: Saldo total acumulado = R$ Y.ZZ"`

* **Foco:** Compreensão de progressão aritmética e atualização cumulativa passo a passo.

---

### 5. Renderizador de Padrões: O "Carimbo" de Pixels

**Contexto:** Uma engine retrô para jogos 2D precisa desenhar uma linha de demarcação de piso na tela com tamanho customizado pelo designer de fases.

**Enunciado:** O programa deve solicitar ao usuário o comprimento desejado da plataforma (um número inteiro positivo $N$). Em seguida, utilize um laço `for` para imprimir na mesma linha exatamente $N$ blocos representados pelo caractere `'#'`, seguidos por uma quebra de linha ao final do laço.

*Exemplo de entrada:* `8`

*Saída esperada:* `########`

* **Foco:** Controle de repetição com limite superior variável informado pelo usuário via terminal.

---