cmake_minimum_required(VERSION 3.19)
project(SmartTransit LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(SmartTransit
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    CustomString.h
    CustomString.cpp
    CustomDate.h
    CustomDate.cpp

    CustomTime.h CustomTime.cpp
    Person.h Person.cpp
    Passenger.h Passenger.cpp
    Driver.h Driver.cpp
    Staff.h Staff.cpp
    Admin.h Admin.cpp
    SuperAdmin.h SuperAdmin.cpp
    RegionalManager.h RegionalManager.cpp
    TransitManager.h TransitManager.cpp
    Entity.h Entity.cpp

    GeoCoordinate.h GeoCoordinate.cpp
    CustomExceptions.h
    TransitAsset.h TransitAsset.cpp
    Vehicle.h Vehicle.cpp
    CityBus.h CityBus.cpp
    ElectricScooter.h ElectricScooter.cpp
    SeniorDriver.h SeniorDriver.cpp
    Stop.h Stop.cpp
    Route.h Route.cpp
    IFareCalculator.h IFareCalculator.cpp
    AppController.h AppController.cpp
    FleetController.h FleetController.cpp
    TicketingController.h TicketingController.cpp
)

target_link_libraries(SmartTransit
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS SmartTransit
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET SmartTransit
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
