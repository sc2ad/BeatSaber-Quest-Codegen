#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Color;
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
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair;
}
namespace GlobalNamespace {
class SetSaberBladeParams;
}
// Type: ::PropertyTintColorPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5394))
// CS Name: SetSaberBladeParams::PropertyTintColorPair
class CORDL_TYPE GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair(GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair(GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair& operator=(GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair&& o) noexcept = default;
  constexpr GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair& operator=(GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_tintColor, put=__set_tintColor))  tintColor;

constexpr void __set_tintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_tintColor() const;

 ::StringW __declspec(property(get=__get_property, put=__set_property))  property;

constexpr void __set_property(::StringW value) ;

constexpr ::StringW __get_property() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair() ;

/// @brief Method .ctor addr 0x210cbc8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSaberBladeParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5395))
// CS Name: SetSaberBladeParams
class CORDL_TYPE SetSaberBladeParams : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyTintColorPair = GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SetSaberBladeParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: " const&", def_value: None }]
constexpr SetSaberBladeParams(SetSaberBladeParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: "&&", def_value: None }]
constexpr SetSaberBladeParams(SetSaberBladeParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetSaberBladeParams(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetSaberBladeParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetSaberBladeParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetSaberBladeParams& operator=(SetSaberBladeParams&& o) noexcept = default;
  constexpr SetSaberBladeParams& operator=(SetSaberBladeParams const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::SaberTypeObject value) ;

constexpr GlobalNamespace::SaberTypeObject __get__saber() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair> __declspec(property(get=__get__propertyTintColorPairs, put=__set__propertyTintColorPairs))  _propertyTintColorPairs;

constexpr void __set__propertyTintColorPairs(::ArrayW<GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair> __get__propertyTintColorPairs() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;


// Methods

/// @brief Method Start addr 0x210cabc size 0x104 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit SetSaberBladeParams() ;

/// @brief Method .ctor addr 0x210cbc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SetSaberBladeParams__PropertyTintColorPair, "", "SetSaberBladeParams/PropertyTintColorPair");
NEED_NO_BOX(GlobalNamespace::SetSaberBladeParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberBladeParams, "", "SetSaberBladeParams");
