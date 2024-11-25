import ctypes
from tkinter import Tk, Label, Text, Button, messagebox
# Ajuste o caminho para o local onde a biblioteca foi gerada
biblioteca = ctypes.CDLL('./libcalc.dll')  



# Carregar a biblioteca compartilhada
try:
    library = ctypes.CDLL('./libcalc.dll')
    # Configurar os tipos de argumentos e retorno
    library.soma.argtypes = [ctypes.c_int, ctypes.c_int]
    library.soma.restype = ctypes.c_int

    library.subtracao.argtypes = [ctypes.c_int, ctypes.c_int]
    library.subtracao.restype = ctypes.c_int

    library.divisao.argtypes = [ctypes.c_int, ctypes.c_int]
    library.divisao.restype = ctypes.c_int

    library.multiplicacao.argtypes = [ctypes.c_int, ctypes.c_int]
    library.multiplicacao.restype = ctypes.c_int
except OSError as e:
    messagebox.showerror("Erro", f"Falha ao carregar a biblioteca: {e}")
    exit()

# Função para obter os valores dos campos
def get_values():
    try:
        a = int(text_a.get("1.0", "end").strip())
        b = int(text_b.get("1.0", "end").strip())
        return a, b
    except ValueError:
        messagebox.showerror("Erro", "Por favor, insira valores inteiros.")
        return None, None

# Funções para chamar as operações
def calcular_operacao(operacao):
    a, b = get_values()
    if a is not None and b is not None:
        try:
            if operacao == "+":
                resultado = library.soma(a, b)
            elif operacao == "-":
                resultado = library.subtracao(a, b)
            elif operacao == "*":
                resultado = library.multiplicacao(a, b)
            elif operacao == "/":
                resultado = library.divisao(a, b)
                if resultado == -1:
                    messagebox.showerror("Erro", "Divisão por zero!")
                    return
            else:
                messagebox.showerror("Erro", "Operação inválida!")
                return
            label_resultado["text"] = f"{resultado}"
        except Exception as e:
            messagebox.showerror("Erro", f"Erro ao executar operação: {e}")

# Configurar a interface gráfica
def sair():
    root.destroy()

root = Tk()
root.title("Calculadora Tkinter")
root.geometry("350x200")

# Rótulos
Label(root, text="Prim Valor:").grid(row=0, column=0, padx=20, pady=5, sticky="e")
Label(root, text="Seg Valor:").grid(row=1, column=0, padx=10, pady=5, sticky="e")
Label(root, text="Total:").grid(row=2, column=0, padx=10, pady=5, sticky="e")

# Campos de entrada e saída
text_a = Text(root, height=1, width=20)
text_a.grid(row=0, column=1, padx=10, pady=5)

text_b = Text(root, height=1, width=20)
text_b.grid(row=1, column=1, padx=10, pady=5)

label_resultado = Label(root, text="0", relief="sunken", anchor="w", width=18)
label_resultado.grid(row=2, column=1, padx=10, pady=5)

# Botões
Button(root, text="+", command=lambda: calcular_operacao("+"), width=5).grid(row=3, column=0, padx=5, pady=10)
Button(root, text="-", command=lambda: calcular_operacao("-"), width=5).grid(row=3, column=1, padx=5, pady=10, sticky="w")
Button(root, text="*", command=lambda: calcular_operacao("*"), width=5).grid(row=4, column=0, padx=5, pady=10)
Button(root, text="/", command=lambda: calcular_operacao("/"), width=5).grid(row=4, column=1, padx=5, pady=10, sticky="w")
Button(root, text="Sair", command=sair, width=10).grid(row=5, column=0, columnspan=2, pady=10)

# Iniciar o loop principal do Tkinter
root.mainloop()
