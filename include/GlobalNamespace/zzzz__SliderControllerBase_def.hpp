#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderControllerBase;
}
// Type: ::SliderControllerBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4927))
// CS Name: SliderControllerBase
class CORDL_TYPE SliderControllerBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SliderControllerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: " const&", def_value: None }]
constexpr SliderControllerBase(SliderControllerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: "&&", def_value: None }]
constexpr SliderControllerBase(SliderControllerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderControllerBase(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderControllerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderControllerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderControllerBase& operator=(SliderControllerBase&& o) noexcept = default;
  constexpr SliderControllerBase& operator=(SliderControllerBase const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 ::GlobalNamespace::CutoutAnimateEffect __declspec(property(get=__get__cutoutAnimateEffect, put=__set__cutoutAnimateEffect))  _cutoutAnimateEffect;

constexpr void __set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect value) ;

constexpr ::GlobalNamespace::CutoutAnimateEffect __get__cutoutAnimateEffect() const;

 bool __declspec(property(get=__get__dissolving, put=__set__dissolving))  _dissolving;

constexpr void __set__dissolving(bool value) ;

constexpr bool __get__dissolving() const;


// Methods

/// @brief Method AnimateCutout addr 0x223e398 size 0x28 virtual false final false
 void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration) ;

// Ctor Parameters []
explicit SliderControllerBase() ;

/// @brief Method .ctor addr 0x223e3c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SliderControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControllerBase, "", "SliderControllerBase");
