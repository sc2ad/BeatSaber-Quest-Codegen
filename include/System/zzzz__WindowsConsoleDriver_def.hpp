#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
struct InputRecord;
}
namespace System {
struct Handles;
}
namespace System {
struct ConsoleScreenBufferInfo;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
// Forward declare root types
namespace System {
class WindowsConsoleDriver;
}
// Type: System::WindowsConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2648))
// CS Name: System.WindowsConsoleDriver
class CORDL_TYPE WindowsConsoleDriver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IConsoleDriver
constexpr operator  System::IConsoleDriver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~WindowsConsoleDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: " const&", def_value: None }]
constexpr WindowsConsoleDriver(WindowsConsoleDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "&&", def_value: None }]
constexpr WindowsConsoleDriver(WindowsConsoleDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WindowsConsoleDriver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WindowsConsoleDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WindowsConsoleDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WindowsConsoleDriver& operator=(WindowsConsoleDriver&& o) noexcept = default;
  constexpr WindowsConsoleDriver& operator=(WindowsConsoleDriver const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_inputHandle, put=__set_inputHandle))  inputHandle;

constexpr void __set_inputHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_inputHandle() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_outputHandle, put=__set_outputHandle))  outputHandle;

constexpr void __set_outputHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_outputHandle() const;

 int16_t __declspec(property(get=__get_defaultAttribute, put=__set_defaultAttribute))  defaultAttribute;

constexpr void __set_defaultAttribute(int16_t value) ;

constexpr int16_t __get_defaultAttribute() const;


// Methods

// Ctor Parameters []
explicit WindowsConsoleDriver() ;

/// @brief Method .ctor addr 0x249c0f4 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method ReadKey addr 0x249c260 size 0x140 virtual true final true
 System::ConsoleKeyInfo ReadKey(bool intercept) ;

/// @brief Method IsModifierKey addr 0x249c4a8 size 0x34 virtual false final false
static bool IsModifierKey(int16_t virtualKeyCode) ;

/// @brief Method GetStdHandle addr 0x249c148 size 0x84 virtual false final false
static ::cordl_internals::intptr_t GetStdHandle(System::Handles handle) ;

/// @brief Method GetConsoleScreenBufferInfo addr 0x249c1cc size 0x94 virtual false final false
static bool GetConsoleScreenBufferInfo(::cordl_internals::intptr_t handle, ByRef<System::ConsoleScreenBufferInfo> info) ;

/// @brief Method ReadConsoleInput addr 0x249c3a0 size 0x108 virtual false final false
static bool ReadConsoleInput(::cordl_internals::intptr_t handle, ByRef<System::InputRecord> record, int32_t length, ByRef<int32_t> nread) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::WindowsConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(System::WindowsConsoleDriver, "System", "WindowsConsoleDriver");
