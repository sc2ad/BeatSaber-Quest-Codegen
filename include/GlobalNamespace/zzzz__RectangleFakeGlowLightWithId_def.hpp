#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class RectangleFakeGlow;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlowLightWithId;
}
// Type: ::RectangleFakeGlowLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5091))
// CS Name: RectangleFakeGlowLightWithId
class CORDL_TYPE RectangleFakeGlowLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RectangleFakeGlowLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: " const&", def_value: None }]
constexpr RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: "&&", def_value: None }]
constexpr RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectangleFakeGlowLightWithId(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr RectangleFakeGlowLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectangleFakeGlowLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectangleFakeGlowLightWithId& operator=(RectangleFakeGlowLightWithId&& o) noexcept = default;
  constexpr RectangleFakeGlowLightWithId& operator=(RectangleFakeGlowLightWithId const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 float_t __declspec(property(get=__get__alphaMul, put=__set__alphaMul))  _alphaMul;

constexpr void __set__alphaMul(float_t value) ;

constexpr float_t __get__alphaMul() const;

 ::GlobalNamespace::RectangleFakeGlow __declspec(property(get=__get__rectangleFakeGlow, put=__set__rectangleFakeGlow))  _rectangleFakeGlow;

constexpr void __set__rectangleFakeGlow(::GlobalNamespace::RectangleFakeGlow value) ;

constexpr ::GlobalNamespace::RectangleFakeGlow __get__rectangleFakeGlow() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x226a244 size 0x20 virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x226a264 size 0x2c virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit RectangleFakeGlowLightWithId() ;

/// @brief Method .ctor addr 0x226a290 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RectangleFakeGlowLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectangleFakeGlowLightWithId, "", "RectangleFakeGlowLightWithId");
