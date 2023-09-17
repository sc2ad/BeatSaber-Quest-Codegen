#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MonobehaviourCallbacksOrderDebuger;
}
// Type: ::MonobehaviourCallbacksOrderDebuger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13813))
// CS Name: MonobehaviourCallbacksOrderDebuger
class CORDL_TYPE MonobehaviourCallbacksOrderDebuger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonobehaviourCallbacksOrderDebuger() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonobehaviourCallbacksOrderDebuger", modifiers: " const&", def_value: None }]
constexpr MonobehaviourCallbacksOrderDebuger(MonobehaviourCallbacksOrderDebuger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonobehaviourCallbacksOrderDebuger", modifiers: "&&", def_value: None }]
constexpr MonobehaviourCallbacksOrderDebuger(MonobehaviourCallbacksOrderDebuger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonobehaviourCallbacksOrderDebuger(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MonobehaviourCallbacksOrderDebuger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonobehaviourCallbacksOrderDebuger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonobehaviourCallbacksOrderDebuger& operator=(MonobehaviourCallbacksOrderDebuger&& o) noexcept = default;
  constexpr MonobehaviourCallbacksOrderDebuger& operator=(MonobehaviourCallbacksOrderDebuger const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x1f78e68 size 0xa4 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f78f0c size 0xa4 virtual false final false
 void OnEnable() ;

/// @brief Method Start addr 0x1f78fb0 size 0xa4 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit MonobehaviourCallbacksOrderDebuger() ;

/// @brief Method .ctor addr 0x1f79054 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger, "", "MonobehaviourCallbacksOrderDebuger");
