#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class ConsoleCancelEventArgs;
}
// Forward declare root types
namespace System {
class ConsoleCancelEventHandler;
}
// Type: System::ConsoleCancelEventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2515))
// CS Name: System.ConsoleCancelEventHandler
class CORDL_TYPE ConsoleCancelEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ConsoleCancelEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: " const&", def_value: None }]
constexpr ConsoleCancelEventHandler(ConsoleCancelEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: "&&", def_value: None }]
constexpr ConsoleCancelEventHandler(ConsoleCancelEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConsoleCancelEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ConsoleCancelEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConsoleCancelEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConsoleCancelEventHandler& operator=(ConsoleCancelEventHandler&& o) noexcept = default;
  constexpr ConsoleCancelEventHandler& operator=(ConsoleCancelEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ConsoleCancelEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2461730 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2461860 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, ::System::ConsoleCancelEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ConsoleCancelEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleCancelEventHandler, "System", "ConsoleCancelEventHandler");
