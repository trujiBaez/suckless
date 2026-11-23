# Changelog — st

Registro de cambios y evolución de la versión personalizada de `st`.

## 2026-11-23 — Reorganización y soporte de scrollback

### 1. Reorganización de la estructura

- Se establece `st/src/` como ubicación principal y fuente de referencia del código y la configuración.
- Se elimina la antigua estructura modular `st/config/`, que contenía copias y fragmentos de configuración separados.
- Se retiran del árbol de trabajo las carpetas históricas de intentos y copias de seguridad anteriores.
- Se conserva una copia de seguridad externa de la estructura anterior:
  `~/.local/share/suckless-backups/st-before-cleanup-20261123.tar.gz`.

### 2. Implementación de scrollback

Se incorpora un sistema de historial de terminal mediante un búfer circular.

Características:

- Capacidad configurada de 5000 líneas (`scrollback_lines = 5000`).
- Almacenamiento de líneas cuando se desplaza la pantalla principal completa.
- Reutilización circular de memoria al alcanzar la capacidad máxima.
- Conservación de la vista del historial mientras llegan nuevas líneas, cuando es posible.
- Adaptación de las líneas almacenadas al redimensionar el terminal.
- Limpieza del historial al reiniciar el terminal.
- Exclusión de la pantalla alternativa del almacenamiento normal del historial.

### 3. Controles de desplazamiento

- Rueda del ratón: desplazamiento de 3 líneas por paso.
- `Shift + PageUp`: desplazamiento hacia atrás aproximadamente una página.
- `Shift + PageDown`: desplazamiento hacia delante aproximadamente una página.
- Al llegar al extremo inferior, se recupera la vista actual del terminal.
- Al escribir o pegar texto, la vista vuelve automáticamente al extremo inferior.

En la pantalla alternativa, las funciones de desplazamiento transmiten las secuencias correspondientes al programa que está utilizando el terminal, preservando el comportamiento de aplicaciones de pantalla completa.

### 4. Integración con el terminal

Se adapta el acceso a las líneas visibles para integrar el historial en:

- Dibujo de pantalla.
- Selección normal y rectangular de texto.
- Cálculo de longitud de línea.
- Gestión de líneas y redimensionamiento.
- Presentación del cursor, que se oculta mientras se consulta el historial.

### 5. Compilación y pruebas

Se realizaron las siguientes comprobaciones:

- Limpieza y compilación de ST desde `st/src/`.
- Verificación del ejecutable generado.
- Comprobación de la salida de comandos y visualización de múltiples líneas.
- Prueba del desplazamiento con la rueda del ratón.
- Prueba de `Shift + PageUp` y `Shift + PageDown`.
- Prueba de `less`.
- Prueba de edición y salida de `vim`.
- Copia del ejecutable compilado y probado a `st/build/st`.

### 6. Instalación

Se instaló el ejecutable mediante:

```sh
doas make install
```

Comprobaciones posteriores:

- Ejecutable instalado en `/usr/local/bin/st`.
- Versión identificada: `st 0.9.3`.
- Coincidencia entre el ejecutable compilado y el instalado.
- Entrada de terminfo de `st` instalada correctamente.

### Estado

La reorganización y la implementación inicial del scrollback están compiladas, probadas e instaladas.

Este registro describe los cambios realizados y las pruebas efectuadas; no implica que se hayan auditado todos los posibles casos extremos.
