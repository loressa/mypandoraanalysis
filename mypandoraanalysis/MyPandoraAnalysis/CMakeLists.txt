# basic source code CMakeLists.txt

art_make_library( LIBRARY_NAME  MyPandoraAnalysis
	SOURCE MyPandoraAnalysis.cxx
	LIBRARIES
                 ${ROOT_BASIC_LIB_LIST}

)

install_headers()
install_source()
