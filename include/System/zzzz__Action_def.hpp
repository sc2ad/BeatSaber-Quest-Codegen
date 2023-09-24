#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class Action;
}
// Type: System::Action
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2322))
// CS Name: System.Action
class CORDL_TYPE Action : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: " const&", def_value: None }]
constexpr Action(Action const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "&&", def_value: None }]
constexpr Action(Action&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action& operator=(Action&& o) noexcept = default;
  constexpr Action& operator=(Action const& o) noexcept = default;
                


// Methods

static System::Action New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x23b2588 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x23b2644 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Action);
DEFINE_IL2CPP_ARG_TYPE(System::Action, "System", "Action");
