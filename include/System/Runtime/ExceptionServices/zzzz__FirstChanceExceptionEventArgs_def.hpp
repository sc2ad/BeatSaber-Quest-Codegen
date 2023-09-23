#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
// Type: System.Runtime.ExceptionServices::FirstChanceExceptionEventArgs
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3340))
// CS Name: System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs
class CORDL_TYPE FirstChanceExceptionEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FirstChanceExceptionEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: " const&", def_value: None }]
constexpr FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: "&&", def_value: None }]
constexpr FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FirstChanceExceptionEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr FirstChanceExceptionEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FirstChanceExceptionEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FirstChanceExceptionEventArgs& operator=(FirstChanceExceptionEventArgs&& o) noexcept = default;
  constexpr FirstChanceExceptionEventArgs& operator=(FirstChanceExceptionEventArgs const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ExceptionServices
NEED_NO_BOX(System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs, "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
