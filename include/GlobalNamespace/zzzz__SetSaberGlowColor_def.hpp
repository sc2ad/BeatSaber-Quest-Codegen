#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair;
}
// Type: ::PropertyTintColorPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5397))
// CS Name: SetSaberGlowColor::PropertyTintColorPair
class CORDL_TYPE ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair(____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair(____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair& operator=(____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair&& o) noexcept = default;
  constexpr ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair& operator=(____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Color __declspec(property(get=__get_tintColor, put=__set_tintColor))  tintColor;

constexpr void __set_tintColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_tintColor() const;

 ::StringW __declspec(property(get=__get_property, put=__set_property))  property;

constexpr void __set_property(::StringW value) ;

constexpr ::StringW __get_property() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair() ;

/// @brief Method .ctor addr 0x210ce54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSaberGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5398))
// CS Name: SetSaberGlowColor
class CORDL_TYPE SetSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyTintColorPair = ::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SetSaberGlowColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: " const&", def_value: None }]
constexpr SetSaberGlowColor(SetSaberGlowColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: "&&", def_value: None }]
constexpr SetSaberGlowColor(SetSaberGlowColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetSaberGlowColor(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetSaberGlowColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetSaberGlowColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetSaberGlowColor& operator=(SetSaberGlowColor&& o) noexcept = default;
  constexpr SetSaberGlowColor& operator=(SetSaberGlowColor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saberTypeObject, put=__set__saberTypeObject))  _saberTypeObject;

constexpr void __set__saberTypeObject(::GlobalNamespace::SaberTypeObject value) ;

constexpr ::GlobalNamespace::SaberTypeObject __get__saberTypeObject() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair> __declspec(property(get=__get__propertyTintColorPairs, put=__set__propertyTintColorPairs))  _propertyTintColorPairs;

constexpr void __set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair> __get__propertyTintColorPairs() const;

 ::GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager value) ;

constexpr ::GlobalNamespace::ColorManager __get__colorManager() const;

 ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

constexpr ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() const;

 ::GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(::GlobalNamespace::SaberType value) ;

constexpr ::GlobalNamespace::SaberType __get__saberType() const;


// Properties

 ::GlobalNamespace::SaberType __declspec(property(put=set_saberType))  saberType;


// Methods

/// @brief Method set_saberType addr 0x210c6e4 size 0xc virtual false final false
 void set_saberType(::GlobalNamespace::SaberType value) ;

/// @brief Method Start addr 0x210cdcc size 0x80 virtual false final false
 void Start() ;

/// @brief Method SetColors addr 0x210ccb4 size 0x118 virtual false final false
 void SetColors() ;

// Ctor Parameters []
explicit SetSaberGlowColor() ;

/// @brief Method .ctor addr 0x210ce4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SetSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberGlowColor, "", "SetSaberGlowColor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SetSaberGlowColor__PropertyTintColorPair, "", "SetSaberGlowColor/PropertyTintColorPair");
