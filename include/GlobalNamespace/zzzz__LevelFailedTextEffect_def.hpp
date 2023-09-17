#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
// Type: ::LevelFailedTextEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4978))
// CS Name: LevelFailedTextEffect
class CORDL_TYPE LevelFailedTextEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LevelFailedTextEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: " const&", def_value: None }]
constexpr LevelFailedTextEffect(LevelFailedTextEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: "&&", def_value: None }]
constexpr LevelFailedTextEffect(LevelFailedTextEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelFailedTextEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LevelFailedTextEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelFailedTextEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelFailedTextEffect& operator=(LevelFailedTextEffect&& o) noexcept = default;
  constexpr LevelFailedTextEffect& operator=(LevelFailedTextEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;


// Methods

/// @brief Method ShowEffect addr 0x225207c size 0x3c virtual false final false
 void ShowEffect() ;

// Ctor Parameters []
explicit LevelFailedTextEffect() ;

/// @brief Method .ctor addr 0x22520b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextEffect, "", "LevelFailedTextEffect");
