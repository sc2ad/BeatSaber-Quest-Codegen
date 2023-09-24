#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class AssemblyLoadEventArgs;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventHandler;
}
// Type: System::AssemblyLoadEventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2352))
// CS Name: System.AssemblyLoadEventHandler
class CORDL_TYPE AssemblyLoadEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AssemblyLoadEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: " const&", def_value: None }]
constexpr AssemblyLoadEventHandler(AssemblyLoadEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: "&&", def_value: None }]
constexpr AssemblyLoadEventHandler(AssemblyLoadEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyLoadEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr AssemblyLoadEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyLoadEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyLoadEventHandler& operator=(AssemblyLoadEventHandler&& o) noexcept = default;
  constexpr AssemblyLoadEventHandler& operator=(AssemblyLoadEventHandler const& o) noexcept = default;
                


// Methods

static System::AssemblyLoadEventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x23b46a8 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x23b47d8 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::AssemblyLoadEventArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AssemblyLoadEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventHandler, "System", "AssemblyLoadEventHandler");
