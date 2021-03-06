include_directories( ${QT_INCLUDES} ${CMAKE_CURRENT_SOURCE_DIR}  )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)
configure_file(qcustomplot.cpp ${CMAKE_CURRENT_BINARY_DIR}/qcustomplot.cpp COPYONLY)
configure_file(qcustomplot.h ${CMAKE_CURRENT_BINARY_DIR}/qcustomplot.h COPYONLY)
configure_file(performance.cpp ${CMAKE_CURRENT_BINARY_DIR}/performance.cpp COPYONLY)
configure_file(performance.h ${CMAKE_CURRENT_BINARY_DIR}/performance.h COPYONLY)


add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

  COMMAND ${SMOKE_GEN_BIN}
  ARGS -qt -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
  -L "${CMAKE_BINARY_DIR}" -- ${CMAKE_CURRENT_SOURCE_DIR}/qcustomplot_includes.h
  DEPENDS ${SMOKE_GEN_BIN} "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies(
  ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
  ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qcustomplot)


set ( MOC_HEADERS
  qcustomplot.h
)

set(smokeqcustomplot_LIB_SRCS
  ${CMAKE_CURRENT_BINARY_DIR}/qcustomplot.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/performance.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
  ${MOC_SRCS})

 
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} -DQCUSTOMPLOT_COMPILE_LIBRARY)
include_directories( ${CMAKE_BINARY_DIR} )


QT4_WRAP_CPP( MOC_SRCS ${MOC_HEADERS} )



IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
  ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokeqcustomplot SHARED ${smokeqcustomplot_LIB_SRCS})

target_link_libraries(smokeqcustomplot
  smokeqtcore
  ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY}
  )

set_target_properties(smokeqcustomplot PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokeqcustomplot LIBRARY DESTINATION ${LIB_INSTALL_DIR}
  ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
  RUNTIME DESTINATION bin)

if (WIN32)
  # Realign the stack, for compatibility with an older ABI.
  if(CMAKE_COMPILER_IS_GNUCXX)
    set_target_properties(smokeqcustomplot PROPERTIES COMPILE_FLAGS -mstackrealign)
  endif()

  # Get rid of the "lib" prefix on archives/DLLs in Windows.
  set_target_properties(smokeqcustomplot
    PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qcustomplot_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qcustomplot.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qcustomplot.typedefs.txt DESTINATION share/smoke)
