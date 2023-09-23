#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
// Forward declare root types
namespace System {
class NullConsoleDriver;
}
// Type: System::NullConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2611))
// CS Name: System.NullConsoleDriver
class CORDL_TYPE NullConsoleDriver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IConsoleDriver
constexpr operator  System::IConsoleDriver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NullConsoleDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: " const&", def_value: None }]
constexpr NullConsoleDriver(NullConsoleDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "&&", def_value: None }]
constexpr NullConsoleDriver(NullConsoleDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullConsoleDriver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NullConsoleDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullConsoleDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullConsoleDriver& operator=(NullConsoleDriver&& o) noexcept = default;
  constexpr NullConsoleDriver& operator=(NullConsoleDriver const& o) noexcept = default;
                


// Fields

static System::ConsoleKeyInfo __declspec(property(get=__get_EmptyConsoleKeyInfo, put=__set_EmptyConsoleKeyInfo))  EmptyConsoleKeyInfo;

static void __set_EmptyConsoleKeyInfo(System::ConsoleKeyInfo value) ;

static System::ConsoleKeyInfo __get_EmptyConsoleKeyInfo() ;


// Methods

/// @brief Method ReadKey addr 0x249080c size 0x5c virtual true final true
 System::ConsoleKeyInfo ReadKey(bool intercept) ;

// Ctor Parameters []
explicit NullConsoleDriver() ;

/// @brief Method .ctor addr 0x2489428 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::NullConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(System::NullConsoleDriver, "System", "NullConsoleDriver");
