# Changelog

## 2026-11-23

### Configuración
- Consolidada la configuración activa en `src/config.h`.
- Conservada la fuente IosevkaTerm Nerd Font Propo con tamaño 14.
- Eliminada la estructura duplicada `config/` y sus tres archivos antiguos.

### Limpieza
- Eliminados los archivos de configuración redundantes.
- Conservados los archivos fuente y la estructura de compilación del proyecto.

### Compilación y verificación
- Proyecto compilado correctamente con dmenu 5.4.
- Generados correctamente los binarios `dmenu` y `stest`.
- Verificada la identidad de los binarios entre `src/` y `build/`.
- Verificada la identidad del ejecutable compilado y el instalado en `/usr/local/bin/dmenu`.
- No ha sido necesaria una reinstalación.

### Seguridad
- Creado el backup previo a la limpieza:
  `~/.local/share/suckless-backups/dmenu-before-cleanup-20261123.tar.gz`
