-----------------------------------------
    COMPILAR E INSTALAR SUCKLESS APPS
-----------------------------------------

PASO 1 - EDITAR CONFIG

Editar siempre dentro de la carpeta config/ usando el archivo config_fecha.h
Pero los cambios se deben incluir en uno de los archivos 01-... (fonts, keys, layout, rules)


PASO 2 - COPIARLO A LA CARPETA SRC Y COMPILAR

Se parte de la base que estamos dentro de la carpeta 'config' de la aplicación que estemos editando. En este caso es dwm.

    cp config_fecha.h ../src/config.h
    cd ~/.config/suckless/dwm/src                                       # dwm debe ser cambiado por la carpeta que corresponda
    make clean
    make


PASO 3 - COPIAR BINARIO A LA CARPETA BUILD

    cp dwm ../build/                                                    # Aqui se debe copiar una de las tres opciones
    cp st ../build/
    cp dmenu dmenu_path dmenu_run ../build/


PASO 4 - INSTALAR DE MANERA ATOMICA

    doas cp ~/.config/suckless/dwm/build/dwm /usr/local/bin/dwm.new     # Se usara una de las tres opciones
    doas mv /usr/local/bin/dwm.new /usr/local/bin/dwm

    doas cp ~/.config/suckless/st/build/st /usr/local/bin/st.new
    doas mv /usr/local/bin/st.new /usr/local/bin/st

    for f in ~/.config/suckless/dmenu/build/*; do
        doas cp "$f" "/usr/local/bin/$(basename "$f").new"
    done

    for f in /usr/local/bin/*.new; do
        doas mv "$f" "${f%.new}"
    done
