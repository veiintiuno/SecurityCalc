markdown
# SecureCalc - Calculadora Modular en C

Nuevo: Historial de operaciones
- Guarda automáticamente las últimas 5 operaciones.
- Implementado con array circular para gestión eficiente de memoria.
- Accesible desde el menú principal (Opción 5).

##  Acerca del Proyecto
**SecureCalc** es mi primer proyecto en C después de solo 2 días estudiando el lenguaje.  
Desarrollado con enfoque en **arquitectura modular** y **buenas prácticas** para simular un proyecto real.
Validación de entrada básica implementada. Pendiente: manejo de caracteres no numéricos usando strtol()/fgets().

## Objetivos de Aprendizaje
- Aplicar conceptos básicos de C (funciones, tipos de datos, control de flujo).
- Implementar arquitectura modular (separación headers/source).
- Manejar entrada/salida con validación básica.
- Utilizar Git/GitHub para control de versiones.

##  Estructura del Proyecto
SecureCalc/
├── inc/ # Headers (.h)
│ └── calculator.h # Declaraciones de funciones
├── src/ # Código fuente (.c)
│ ├── calculator.c # Implementación de operaciones
│ └── main.c # Interfaz de usuario
├── Makefile # Automatización de compilación
└── README.md # Documentación

##  Características
-  **Operaciones básicas:** suma, resta, multiplicación, división.
-  **Validación:** división por cero, opciones inválidas.
-  **Interfaz interactiva:** menú con bucle continuo.
-  **Modularidad:** código separado en múltiples archivos.
-  **Portable:** compila en Windows/Linux.

##  Compilación
### Windows (PowerShell)
```powershell
gcc -Iinc src/main.c src/calculator.c -o securecalc.exe
Linux/Mac
bash
make
  Uso
Ejecutar ./securecalc (Linux/Mac) o securecalc.exe (Windows).

Seleccionar operación del menú.

Introducir dos números.

Repetir o salir.

Próximas Mejoras

Historial de operaciones.

Conversión hexadecimal/decimal.

Modo "pentesting" para cálculos de offsets.

Interfaz gráfica simple.

Reflexiones del Desarrollo

Como primer proyecto en C, me enfrenté a:

Gestión de memoria y punteros (en proceso de aprendizaje).

Organización de código en múltiples archivos.

Manejo de entrada de usuario con scanf.

Uso de Git para control de versiones.

Licencia

Este proyecto es educativo y de código abierto.

Desarrollado en 2 días de inmersión en C · Veiintiuno · 2026
