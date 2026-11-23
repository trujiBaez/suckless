# Changelog - DWM

## 2026-11-23

### Limpieza y organización
- Eliminada la carpeta `config/` y sus siete archivos duplicados.
- Conservada `src/` como única ubicación de los archivos fuente y configuración activa.
- Eliminados los archivos auxiliares antiguos `config.def.h.orig` y `dwm.c.orig`.
- Creado un backup previo a la limpieza:
  `~/.local/share/suckless-backups/dwm-before-cleanup-20261123.tar.gz`.

### Personalizaciones conservadas
- Fuente IosevkaTerm Nerd Font Propo con tamaño 14 para DWM y dmenu.
- Sustituido Thunar por Nemo en las reglas de ventanas y en el atajo correspondiente.
- Configurado el tamaño inicial de las ventanas flotantes en 1950 × 1250 píxeles.
- Conservados los espacios entre ventanas de 14 píxeles y el resto de la configuración personalizada.

### Compilación y verificación
- Limpieza y compilación realizadas desde `src/`.
- Compilación completada correctamente con DWM 6.8.
- Verificado el ejecutable mediante `dwm -v`.
- Comprobado que `src/dwm`, `build/dwm` y `/usr/local/bin/dwm` son idénticos mediante SHA-256.
- No fue necesaria una reinstalación.
