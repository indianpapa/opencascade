work_dir=$(pwd)

function clean(){
	echo "============================================="
    echo "clean $(pwd)"
	rm -rf build/
    mkdir build
}

function build() {
	echo "============================================="
    echo "build in $(pwd)"

    cmake ..                                                                    \
        -D3RDPARTY_TCL_LIBRARY=/Library/Frameworks/Tcl.framework                \
        -D3RDPARTY_TCL_INCLUDE_DIR=/Library/Frameworks/Tcl.framework/Headers    \
        -D3RDPARTY_TCL_LIBRARY_DIR=/Library/Frameworks                          \
        -D3RDPARTY_TCL_LIBRARY_VERSION=8.6                                      \
        -D3RDPARTY_TK_LIBRARY=/Library/Frameworks/Tk.framework                  \
        -D3RDPARTY_TK_INCLUDE_DIR=/Library/Frameworks/Tk.framework/Headers      \
        -D3RDPARTY_TK_LIBRARY_DIR=/Library/Frameworks                           \
        -D3RDPARTY_TK_LIBRARY_VERSION="8.6"

    make -j4
}

cd $work_dir
clean

cd "build/"
build
