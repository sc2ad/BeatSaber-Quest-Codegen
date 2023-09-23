#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Type: ::BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5545))
// CS Name: BaseTransitionSO
class CORDL_TYPE BaseTransitionSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: " const&", def_value: None }]
constexpr BaseTransitionSO(BaseTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: "&&", def_value: None }]
constexpr BaseTransitionSO(BaseTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseTransitionSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BaseTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseTransitionSO& operator=(BaseTransitionSO&& o) noexcept = default;
  constexpr BaseTransitionSO& operator=(BaseTransitionSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TransitionTimingSO __declspec(property(get=__get__transitionTiming, put=__set__transitionTiming))  _transitionTiming;

constexpr void __set__transitionTiming(GlobalNamespace::TransitionTimingSO value) ;

constexpr GlobalNamespace::TransitionTimingSO __get__transitionTiming() const;


// Properties

 GlobalNamespace::EaseType __declspec(property(get=get_easeType))  easeType;

 float_t __declspec(property(get=get_easeDuration))  easeDuration;


// Methods

/// @brief Method get_easeType addr 0x2127e70 size 0x1c virtual false final false
 GlobalNamespace::EaseType get_easeType() ;

/// @brief Method get_easeDuration addr 0x2127e8c size 0x1c virtual false final false
 float_t get_easeDuration() ;

// Ctor Parameters []
explicit BaseTransitionSO() ;

/// @brief Method .ctor addr 0x2127ea8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BaseTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseTransitionSO, "", "BaseTransitionSO");
