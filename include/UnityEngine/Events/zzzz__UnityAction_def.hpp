#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Events {
class UnityAction;
}
// Type: UnityEngine.Events::UnityAction
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10406))
// CS Name: UnityEngine.Events.UnityAction
class CORDL_TYPE UnityAction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction", modifiers: " const&", def_value: None }]
constexpr UnityAction(UnityAction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction", modifiers: "&&", def_value: None }]
constexpr UnityAction(UnityAction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityAction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction& operator=(UnityAction&& o) noexcept = default;
  constexpr UnityAction& operator=(UnityAction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b81050 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b8110c size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::UnityAction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityAction, "UnityEngine.Events", "UnityAction");
