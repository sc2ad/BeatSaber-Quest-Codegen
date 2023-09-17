#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class OneTimeLightColorEffect;
}
// Type: ::OneTimeLightColorEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4986))
// CS Name: OneTimeLightColorEffect
class CORDL_TYPE OneTimeLightColorEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OneTimeLightColorEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: " const&", def_value: None }]
constexpr OneTimeLightColorEffect(OneTimeLightColorEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: "&&", def_value: None }]
constexpr OneTimeLightColorEffect(OneTimeLightColorEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OneTimeLightColorEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OneTimeLightColorEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OneTimeLightColorEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OneTimeLightColorEffect& operator=(OneTimeLightColorEffect&& o) noexcept = default;
  constexpr OneTimeLightColorEffect& operator=(OneTimeLightColorEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__color() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;

 int32_t __declspec(property(get=__get__lightsId, put=__set__lightsId))  _lightsId;

constexpr void __set__lightsId(int32_t value) ;

constexpr int32_t __get__lightsId() const;

 ::GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightWithIdManager, put=__set__lightWithIdManager))  _lightWithIdManager;

constexpr void __set__lightWithIdManager(::GlobalNamespace::LightWithIdManager value) ;

constexpr ::GlobalNamespace::LightWithIdManager __get__lightWithIdManager() const;


// Methods

/// @brief Method Update addr 0x2252eb8 size 0x5c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OneTimeLightColorEffect() ;

/// @brief Method .ctor addr 0x2252f14 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OneTimeLightColorEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OneTimeLightColorEffect, "", "OneTimeLightColorEffect");
