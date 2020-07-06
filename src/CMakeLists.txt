set(Main_SRCS
	main.cpp
	)

add_executable(main
	${Main_SRCS}
	)

# Specify here the libraries this program depends on
target_link_libraries(main
	lrulib
	)
set_target_properties(lrulib PROPERTIES LINKER_LANGUAGE CXX)

