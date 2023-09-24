#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include <cmath>
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockFloatCurve;
}
// Type: ::MaterialPropertyBlockFloatCurve
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14728))
// CS Name: MaterialPropertyBlockFloatCurve
class CORDL_TYPE MaterialPropertyBlockFloatCurve : public GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MaterialPropertyBlockFloatCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockFloatCurve(void* ptr) noexcept : GlobalNamespace::MaterialPropertyBlockAnimator(ptr) {
}


  constexpr MaterialPropertyBlockFloatCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockFloatCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockFloatCurve& operator=(MaterialPropertyBlockFloatCurve&& o) noexcept = default;
  constexpr MaterialPropertyBlockFloatCurve& operator=(MaterialPropertyBlockFloatCurve const& o) noexcept = default;
                


// Fields

 UnityEngine::AnimationCurve __declspec(property(get=__get__curve, put=__set__curve))  _curve;

constexpr void __set__curve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__curve() const;

 float_t __declspec(property(get=__get__valueMultiplier, put=__set__valueMultiplier))  _valueMultiplier;

constexpr void __set__valueMultiplier(float_t value) ;

constexpr float_t __get__valueMultiplier() const;

 float_t __declspec(property(get=__get__speedMultiplier, put=__set__speedMultiplier))  _speedMultiplier;

constexpr void __set__speedMultiplier(float_t value) ;

constexpr float_t __get__speedMultiplier() const;


// Methods

/// @brief Method SetProperty addr 0x1fa2638 size 0x98 virtual true final false
 void SetProperty() ;

static GlobalNamespace::MaterialPropertyBlockFloatCurve New_ctor() ;

/// @brief Method .ctor addr 0x1fa26d0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockFloatCurve);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockFloatCurve, "", "MaterialPropertyBlockFloatCurve");
