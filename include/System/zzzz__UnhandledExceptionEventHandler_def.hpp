#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class UnhandledExceptionEventArgs;
}
// Forward declare root types
namespace System {
class UnhandledExceptionEventHandler;
}
// Type: System::UnhandledExceptionEventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2502))
// CS Name: System.UnhandledExceptionEventHandler
class CORDL_TYPE UnhandledExceptionEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnhandledExceptionEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventHandler", modifiers: " const&", def_value: None }]
constexpr UnhandledExceptionEventHandler(UnhandledExceptionEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventHandler", modifiers: "&&", def_value: None }]
constexpr UnhandledExceptionEventHandler(UnhandledExceptionEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnhandledExceptionEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnhandledExceptionEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnhandledExceptionEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnhandledExceptionEventHandler& operator=(UnhandledExceptionEventHandler&& o) noexcept = default;
  constexpr UnhandledExceptionEventHandler& operator=(UnhandledExceptionEventHandler const& o) noexcept = default;
                


// Methods

static System::UnhandledExceptionEventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x245fbbc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x245fcec size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::UnhandledExceptionEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::UnhandledExceptionEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::UnhandledExceptionEventHandler, "System", "UnhandledExceptionEventHandler");
