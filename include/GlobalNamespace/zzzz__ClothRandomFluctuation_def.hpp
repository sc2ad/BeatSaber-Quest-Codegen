#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Cloth;
}
// Forward declare root types
namespace GlobalNamespace {
class ClothRandomFluctuation;
}
namespace GlobalNamespace {
class GlobalNamespace__ClothRandomFluctuation__SineLayer;
}
// Type: ::SineLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3992))
// CS Name: ClothRandomFluctuation::SineLayer
class CORDL_TYPE GlobalNamespace__ClothRandomFluctuation__SineLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__ClothRandomFluctuation__SineLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ClothRandomFluctuation__SineLayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer(GlobalNamespace__ClothRandomFluctuation__SineLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ClothRandomFluctuation__SineLayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer(GlobalNamespace__ClothRandomFluctuation__SineLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ClothRandomFluctuation__SineLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer& operator=(GlobalNamespace__ClothRandomFluctuation__SineLayer&& o) noexcept = default;
  constexpr GlobalNamespace__ClothRandomFluctuation__SineLayer& operator=(GlobalNamespace__ClothRandomFluctuation__SineLayer const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(float_t value) ;

constexpr float_t __get_multiplier() const;

 float_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(float_t value) ;

constexpr float_t __get_offset() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__ClothRandomFluctuation__SineLayer() ;

/// @brief Method .ctor addr 0x20af67c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClothRandomFluctuation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3993))
// CS Name: ClothRandomFluctuation
class CORDL_TYPE ClothRandomFluctuation : public UnityEngine::MonoBehaviour {
public:
// Declarations
using SineLayer = GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ClothRandomFluctuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: " const&", def_value: None }]
constexpr ClothRandomFluctuation(ClothRandomFluctuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "&&", def_value: None }]
constexpr ClothRandomFluctuation(ClothRandomFluctuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClothRandomFluctuation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ClothRandomFluctuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClothRandomFluctuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClothRandomFluctuation& operator=(ClothRandomFluctuation&& o) noexcept = default;
  constexpr ClothRandomFluctuation& operator=(ClothRandomFluctuation const& o) noexcept = default;
                


// Fields

 UnityEngine::Cloth __declspec(property(get=__get__cloth, put=__set__cloth))  _cloth;

constexpr void __set__cloth(UnityEngine::Cloth value) ;

constexpr UnityEngine::Cloth __get__cloth() const;

 bool __declspec(property(get=__get__useLocalExternalFluctuations, put=__set__useLocalExternalFluctuations))  _useLocalExternalFluctuations;

constexpr void __set__useLocalExternalFluctuations(bool value) ;

constexpr bool __get__useLocalExternalFluctuations() const;

 UnityEngine::Vector3 __declspec(property(get=__get__externalFluctuations, put=__set__externalFluctuations))  _externalFluctuations;

constexpr void __set__externalFluctuations(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__externalFluctuations() const;

 bool __declspec(property(get=__get__useLocalRandomFluctuations, put=__set__useLocalRandomFluctuations))  _useLocalRandomFluctuations;

constexpr void __set__useLocalRandomFluctuations(bool value) ;

constexpr bool __get__useLocalRandomFluctuations() const;

 UnityEngine::Vector3 __declspec(property(get=__get__minFluctuations, put=__set__minFluctuations))  _minFluctuations;

constexpr void __set__minFluctuations(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__minFluctuations() const;

 UnityEngine::Vector3 __declspec(property(get=__get__maxFluctuations, put=__set__maxFluctuations))  _maxFluctuations;

constexpr void __set__maxFluctuations(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__maxFluctuations() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer> __declspec(property(get=__get__compoundSins, put=__set__compoundSins))  _compoundSins;

constexpr void __set__compoundSins(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer> __get__compoundSins() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;


// Methods

/// @brief Method Update addr 0x20af3f8 size 0x8 virtual false final false
 void Update() ;

/// @brief Method FluctuateCloth addr 0x20af400 size 0x170 virtual false final false
 void FluctuateCloth(UnityEngine::Cloth cloth) ;

/// @brief Method GetNoise addr 0x20af570 size 0x104 virtual false final false
 float_t GetNoise(float_t time, float_t offset) ;

// Ctor Parameters []
explicit ClothRandomFluctuation() ;

/// @brief Method .ctor addr 0x20af674 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ClothRandomFluctuation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClothRandomFluctuation, "", "ClothRandomFluctuation");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ClothRandomFluctuation__SineLayer, "", "ClothRandomFluctuation/SineLayer");
