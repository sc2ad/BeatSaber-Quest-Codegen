#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Reflection {
class Assembly;
}
namespace System {
class ResolveEventArgs;
}
// Forward declare root types
namespace System {
class ResolveEventHandler;
}
// Type: System::ResolveEventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2465))
// CS Name: System.ResolveEventHandler
class CORDL_TYPE ResolveEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ResolveEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventHandler", modifiers: " const&", def_value: None }]
constexpr ResolveEventHandler(ResolveEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventHandler", modifiers: "&&", def_value: None }]
constexpr ResolveEventHandler(ResolveEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResolveEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ResolveEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResolveEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResolveEventHandler& operator=(ResolveEventHandler&& o) noexcept = default;
  constexpr ResolveEventHandler& operator=(ResolveEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ResolveEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2451fac size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24520dc size 0x14 virtual true final false
 System::Reflection::Assembly Invoke(::bs_hook::Il2CppWrapperType sender, System::ResolveEventArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ResolveEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::ResolveEventHandler, "System", "ResolveEventHandler");
