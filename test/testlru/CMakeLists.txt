file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testlru ${SRCS})

TARGET_LINK_LIBRARIES(testlru
	lrulib
	libgmock
	libgtest
	)

add_test(NAME testlru
	COMMAND testlru)
