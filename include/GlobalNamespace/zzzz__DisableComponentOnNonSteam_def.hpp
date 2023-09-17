#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableComponentOnNonSteam;
}
// Type: ::DisableComponentOnNonSteam
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5451))
// CS Name: DisableComponentOnNonSteam
class CORDL_TYPE DisableComponentOnNonSteam : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableComponentOnNonSteam() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableComponentOnNonSteam", modifiers: " const&", def_value: None }]
constexpr DisableComponentOnNonSteam(DisableComponentOnNonSteam const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableComponentOnNonSteam", modifiers: "&&", def_value: None }]
constexpr DisableComponentOnNonSteam(DisableComponentOnNonSteam&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableComponentOnNonSteam(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableComponentOnNonSteam& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableComponentOnNonSteam& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableComponentOnNonSteam& operator=(DisableComponentOnNonSteam&& o) noexcept = default;
  constexpr DisableComponentOnNonSteam& operator=(DisableComponentOnNonSteam const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MonoBehaviour __declspec(property(get=__get__component, put=__set__component))  _component;

constexpr void __set__component(::UnityEngine::MonoBehaviour value) ;

constexpr ::UnityEngine::MonoBehaviour __get__component() const;


// Methods

/// @brief Method Awake addr 0x2115aec size 0x20 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit DisableComponentOnNonSteam() ;

/// @brief Method .ctor addr 0x2115b0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DisableComponentOnNonSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableComponentOnNonSteam, "", "DisableComponentOnNonSteam");
