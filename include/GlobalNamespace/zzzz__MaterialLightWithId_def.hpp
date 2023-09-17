#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialLightWithId;
}
// Type: ::MaterialLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14706))
// CS Name: MaterialLightWithId
class CORDL_TYPE MaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MaterialLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: " const&", def_value: None }]
constexpr MaterialLightWithId(MaterialLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "&&", def_value: None }]
constexpr MaterialLightWithId(MaterialLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialLightWithId(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr MaterialLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialLightWithId& operator=(MaterialLightWithId&& o) noexcept = default;
  constexpr MaterialLightWithId& operator=(MaterialLightWithId const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 bool __declspec(property(get=__get__setAlphaOnly, put=__set__setAlphaOnly))  _setAlphaOnly;

constexpr void __set__setAlphaOnly(bool value) ;

constexpr bool __get__setAlphaOnly() const;

 bool __declspec(property(get=__get__alphaIntoColor, put=__set__alphaIntoColor))  _alphaIntoColor;

constexpr void __set__alphaIntoColor(bool value) ;

constexpr bool __get__alphaIntoColor() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;

 ::StringW __declspec(property(get=__get__colorProperty, put=__set__colorProperty))  _colorProperty;

constexpr void __set__colorProperty(::StringW value) ;

constexpr ::StringW __get__colorProperty() const;

 float_t __declspec(property(get=__get__alphaIntensity, put=__set__alphaIntensity))  _alphaIntensity;

constexpr void __set__alphaIntensity(float_t value) ;

constexpr float_t __get__alphaIntensity() const;

 bool __declspec(property(get=__get__multiplyColorWithAlpha, put=__set__multiplyColorWithAlpha))  _multiplyColorWithAlpha;

constexpr void __set__multiplyColorWithAlpha(bool value) ;

constexpr bool __get__multiplyColorWithAlpha() const;

 bool __declspec(property(get=__get__multiplyColor, put=__set__multiplyColor))  _multiplyColor;

constexpr void __set__multiplyColor(bool value) ;

constexpr bool __get__multiplyColor() const;

 float_t __declspec(property(get=__get__colorMultiplier, put=__set__colorMultiplier))  _colorMultiplier;

constexpr void __set__colorMultiplier(float_t value) ;

constexpr float_t __get__colorMultiplier() const;

static ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

static ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;

 int32_t __declspec(property(get=__get__propertyId, put=__set__propertyId))  _propertyId;

constexpr void __set__propertyId(int32_t value) ;

constexpr int32_t __get__propertyId() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1f9f0cc size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x1f9f0d8 size 0x80 virtual false final false
 void Awake() ;

/// @brief Method ColorWasSet addr 0x1f9f158 size 0x188 virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit MaterialLightWithId() ;

/// @brief Method .ctor addr 0x1f9f2e0 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialLightWithId, "", "MaterialLightWithId");
