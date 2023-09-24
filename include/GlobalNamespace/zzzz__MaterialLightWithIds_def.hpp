#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
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
class MaterialLightWithIds;
}
// Type: ::MaterialLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14713))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14707))
// CS Name: MaterialLightWithIds
class CORDL_TYPE MaterialLightWithIds : public GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~MaterialLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: " const&", def_value: None }]
constexpr MaterialLightWithIds(MaterialLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: "&&", def_value: None }]
constexpr MaterialLightWithIds(MaterialLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialLightWithIds(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithIds(ptr) {
}


  constexpr MaterialLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialLightWithIds& operator=(MaterialLightWithIds&& o) noexcept = default;
  constexpr MaterialLightWithIds& operator=(MaterialLightWithIds const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;

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

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;

 int32_t __declspec(property(get=__get__propertyId, put=__set__propertyId))  _propertyId;

constexpr void __set__propertyId(int32_t value) ;

constexpr int32_t __get__propertyId() const;


// Methods

/// @brief Method Awake addr 0x1f9f344 size 0x84 virtual true final false
 void Awake() ;

/// @brief Method ColorWasSet addr 0x1f9f3c8 size 0x140 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

static GlobalNamespace::MaterialLightWithIds New_ctor() ;

/// @brief Method .ctor addr 0x1f9f508 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialLightWithIds, "", "MaterialLightWithIds");
