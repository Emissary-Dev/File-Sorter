cmake_minimum_required(VERSION 3.16)

project(FileSorter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Widgets)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appFileSorter
    main.cpp
)


set_source_files_properties(CustomFonts.qml
    PROPERTIES
    QT_QML_SINGLETON_TYPE TRUE)

set_source_files_properties(ColorProperties.qml
    PROPERTIES
    QT_QML_SINGLETON_TYPE TRUE)

set_source_files_properties(CustomFonts.qml
PROPERTIES
QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(appFileSorter
    URI FileSorter
    VERSION 1.0

    QML_FILES
    Main.qml
    ColorProperties.qml


    RESOURCES
    "Icons/folder-open-outline.svg"
    "Icons/folder-outline.svg"
    "Icons/document-outline.svg"
    "Icons/document.svg"
    "Icons/doument-outline-green.svg"

    "Fonts/Montserrat-VariableFont_wght.ttf"
    SOURCES filedatahandler.h filedatahandler.cpp
    QML_FILES CustomCheckBox.qml
    QML_FILES MainHeader.qml
    QML_FILES CustomFonts.qml
    QML_FILES SortSettings.qml
    SOURCES
    QML_FILES CustomExplorer.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appFileSorter PROPERTIES
    #    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appFileSorter
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appFileSorter
    PRIVATE Qt6::Quick Qt6::Widgets
)

include(GNUInstallDirs)
install(TARGETS appFileSorter
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
