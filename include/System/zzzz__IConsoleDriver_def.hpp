#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class IConsoleDriver;
}
// Type: System::IConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2601))
// CS Name: System.IConsoleDriver
class CORDL_TYPE IConsoleDriver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConsoleDriver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConsoleDriver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReadKey addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ConsoleKeyInfo ReadKey(bool intercept) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(System::IConsoleDriver, "System", "IConsoleDriver");
