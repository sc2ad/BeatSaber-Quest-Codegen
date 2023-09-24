#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
// Forward declare root types
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
}
// Type: ::InstancedMaterialLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14690))
// CS Name: InstancedMaterialLightWithId
class CORDL_TYPE InstancedMaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~InstancedMaterialLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: " const&", def_value: None }]
constexpr InstancedMaterialLightWithId(InstancedMaterialLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: "&&", def_value: None }]
constexpr InstancedMaterialLightWithId(InstancedMaterialLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstancedMaterialLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr InstancedMaterialLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstancedMaterialLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstancedMaterialLightWithId& operator=(InstancedMaterialLightWithId&& o) noexcept = default;
  constexpr InstancedMaterialLightWithId& operator=(InstancedMaterialLightWithId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MaterialPropertyBlockColorSetter __declspec(property(get=__get__materialPropertyBlockColorSetter, put=__set__materialPropertyBlockColorSetter))  _materialPropertyBlockColorSetter;

constexpr void __set__materialPropertyBlockColorSetter(GlobalNamespace::MaterialPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::MaterialPropertyBlockColorSetter __get__materialPropertyBlockColorSetter() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 bool __declspec(property(get=__get__hdr, put=__set__hdr))  _hdr;

constexpr void __set__hdr(bool value) ;

constexpr bool __get__hdr() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 bool __declspec(property(get=__get__startColorWasSet, put=__set__startColorWasSet))  _startColorWasSet;

constexpr void __set__startColorWasSet(bool value) ;

constexpr bool __get__startColorWasSet() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9cd58 size 0x84 virtual true final false
 void ColorWasSet(UnityEngine::Color newColor) ;

static GlobalNamespace::InstancedMaterialLightWithId New_ctor() ;

/// @brief Method .ctor addr 0x1f9cddc size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::InstancedMaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancedMaterialLightWithId, "", "InstancedMaterialLightWithId");
