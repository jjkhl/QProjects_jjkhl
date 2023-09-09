cmake_minimum_required(VERSION 3.5)

project(myWeixin LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets Core Gui Network Sql REQUIRED)

if(ANDROID)
  add_library(myWeixin SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    filecntdlg.cpp
    filecntdlg.h
    filecntdlg.ui
    filesrvdlg.cpp
    filesrvdlg.h
    filesrvdlg.ui
    logindialog.cpp
    logindialog.h
    logindialog.ui
    registermysql.cpp
    registermysql.h
    registermysql.ui
    changepassword.cpp
    changepassword.h
    changepassword.ui
    server.cpp
    server.h
    ChatMsgType.h
#    onlineClients.h
  )
else()
  add_executable(myWeixin
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    filecntdlg.cpp
    filecntdlg.h
    filecntdlg.ui
    filesrvdlg.cpp
    filesrvdlg.h
    filesrvdlg.ui
    logindialog.cpp
    logindialog.h
    logindialog.ui
    registermysql.cpp
    registermysql.h
    registermysql.ui
    changepassword.cpp
    changepassword.h
    changepassword.ui
    server.cpp
    server.h
    ChatMsgType.h
#    onlineClients.h
    pictures.qrc
  )
endif()

target_link_libraries(myWeixin PRIVATE Qt5::Widgets Qt5::Core Qt5::Gui Qt5::Network Qt5::Sql)
