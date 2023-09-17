#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationStartParams;
}
// Type: ::AnimationStartParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13767))
// CS Name: AnimationStartParams
class CORDL_TYPE AnimationStartParams : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AnimationStartParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: " const&", def_value: None }]
constexpr AnimationStartParams(AnimationStartParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: "&&", def_value: None }]
constexpr AnimationStartParams(AnimationStartParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationStartParams(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnimationStartParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationStartParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationStartParams& operator=(AnimationStartParams&& o) noexcept = default;
  constexpr AnimationStartParams& operator=(AnimationStartParams const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__timeOffset, put=__set__timeOffset))  _timeOffset;

constexpr void __set__timeOffset(float_t value) ;

constexpr float_t __get__timeOffset() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;

 ::UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(::UnityEngine::Animation value) ;

constexpr ::UnityEngine::Animation __get__animation() const;


// Methods

/// @brief Method Start addr 0x1f74a70 size 0x2d8 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit AnimationStartParams() ;

/// @brief Method .ctor addr 0x1f74d48 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AnimationStartParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimationStartParams, "", "AnimationStartParams");
