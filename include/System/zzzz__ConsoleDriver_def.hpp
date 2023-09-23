#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IConsoleDriver;
}
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class ConsoleDriver;
}
// Type: System::ConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2586))
// CS Name: System.ConsoleDriver
class CORDL_TYPE ConsoleDriver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConsoleDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: " const&", def_value: None }]
constexpr ConsoleDriver(ConsoleDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: "&&", def_value: None }]
constexpr ConsoleDriver(ConsoleDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConsoleDriver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConsoleDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConsoleDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConsoleDriver& operator=(ConsoleDriver&& o) noexcept = default;
  constexpr ConsoleDriver& operator=(ConsoleDriver const& o) noexcept = default;
                


// Fields

static System::IConsoleDriver __declspec(property(get=__get_driver, put=__set_driver))  driver;

static void __set_driver(System::IConsoleDriver value) ;

static System::IConsoleDriver __get_driver() ;

static bool __declspec(property(get=__get_is_console, put=__set_is_console))  is_console;

static void __set_is_console(bool value) ;

static bool __get_is_console() ;

static bool __declspec(property(get=__get_called_isatty, put=__set_called_isatty))  called_isatty;

static void __set_called_isatty(bool value) ;

static bool __get_called_isatty() ;


// Properties

static bool __declspec(property(get=get_IsConsole))  IsConsole;


// Methods

/// @brief Method CreateNullConsoleDriver addr 0x2489320 size 0x4c virtual false final false
static System::IConsoleDriver CreateNullConsoleDriver() ;

/// @brief Method CreateWindowsConsoleDriver addr 0x248936c size 0x5c virtual false final false
static System::IConsoleDriver CreateWindowsConsoleDriver() ;

/// @brief Method CreateTermInfoDriver addr 0x24893c8 size 0x60 virtual false final false
static System::IConsoleDriver CreateTermInfoDriver(::StringW term) ;

/// @brief Method ReadKey addr 0x2488ce4 size 0xd8 virtual false final false
static System::ConsoleKeyInfo ReadKey(bool intercept) ;

/// @brief Method get_IsConsole addr 0x2488534 size 0x138 virtual false final false
static bool get_IsConsole() ;

/// @brief Method Isatty addr 0x2489774 size 0x4 virtual false final false
static bool Isatty(::cordl_internals::intptr_t handle) ;

/// @brief Method InternalKeyAvailable addr 0x2489778 size 0x4 virtual false final false
static int32_t InternalKeyAvailable(int32_t ms_timeout) ;

/// @brief Method TtySetup addr 0x248977c size 0x4 virtual false final false
static bool TtySetup(::StringW keypadXmit, ::StringW teardown, ByRef<::ArrayW<uint8_t>> control_characters, ByRef<void*> address) ;

/// @brief Method SetEcho addr 0x2489780 size 0x8 virtual false final false
static bool SetEcho(bool wantEcho) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleDriver, "System", "ConsoleDriver");
