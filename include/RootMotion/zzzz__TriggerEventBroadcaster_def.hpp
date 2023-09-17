#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace RootMotion {
class TriggerEventBroadcaster;
}
// Type: RootMotion::TriggerEventBroadcaster
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12442))
// CS Name: RootMotion.TriggerEventBroadcaster
class CORDL_TYPE TriggerEventBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TriggerEventBroadcaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: " const&", def_value: None }]
constexpr TriggerEventBroadcaster(TriggerEventBroadcaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: "&&", def_value: None }]
constexpr TriggerEventBroadcaster(TriggerEventBroadcaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriggerEventBroadcaster(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TriggerEventBroadcaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriggerEventBroadcaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriggerEventBroadcaster& operator=(TriggerEventBroadcaster&& o) noexcept = default;
  constexpr TriggerEventBroadcaster& operator=(TriggerEventBroadcaster const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_target() const;


// Methods

/// @brief Method OnTriggerEnter addr 0x11b556c size 0xb4 virtual false final false
 void OnTriggerEnter(::UnityEngine::Collider collider) ;

/// @brief Method OnTriggerStay addr 0x11b5620 size 0xb4 virtual false final false
 void OnTriggerStay(::UnityEngine::Collider collider) ;

/// @brief Method OnTriggerExit addr 0x11b56d4 size 0xb4 virtual false final false
 void OnTriggerExit(::UnityEngine::Collider collider) ;

// Ctor Parameters []
explicit TriggerEventBroadcaster() ;

/// @brief Method .ctor addr 0x11b5788 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::TriggerEventBroadcaster);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TriggerEventBroadcaster, "RootMotion", "TriggerEventBroadcaster");
