import ctypes
from flask import Flask, render_template, request, jsonify

# Carregar a biblioteca compartilhada
library = ctypes.CDLL('./libcalc.dll')

# Configurar os tipos das funções da biblioteca
library.soma.argtypes = [ctypes.c_int, ctypes.c_int]
library.soma.restype = ctypes.c_int

library.subtracao.argtypes = [ctypes.c_int, ctypes.c_int]
library.subtracao.restype = ctypes.c_int

library.divisao.argtypes = [ctypes.c_int, ctypes.c_int]
library.divisao.restype = ctypes.c_int

library.multiplicacao.argtypes = [ctypes.c_int, ctypes.c_int]
library.multiplicacao.restype = ctypes.c_int

# Inicializar a aplicação Flask
app = Flask(__name__)

# Rota principal
@app.route('/')
def index():
    return render_template('index.html')

# Rota para calcular operações
@app.route('/calcular', methods=['POST'])
def calcular():
    try:
        # Obter os dados do formulário
        a = int(request.form['valor1'])
        b = int(request.form['valor2'])
        operacao = request.form['operacao']

        # Chamar a função correspondente na biblioteca
        if operacao == "soma":
            resultado = library.soma(a, b)
        elif operacao == "subtracao":
            resultado = library.subtracao(a, b)
        elif operacao == "multiplicacao":
            resultado = library.multiplicacao(a, b)
        elif operacao == "divisao":
            resultado = library.divisao(a, b)
            if resultado == -1:
                return jsonify({'erro': 'Divisão por zero!'})
        else:
            return jsonify({'erro': 'Operação inválida!'})

        # Retornar o resultado
        return jsonify({'resultado': resultado})

    except ValueError:
        return jsonify({'erro': 'Valores inválidos!'})
    except Exception as e:
        return jsonify({'erro': str(e)})

# Executar a aplicação
if __name__ == '__main__':
    app.run(debug=True)
