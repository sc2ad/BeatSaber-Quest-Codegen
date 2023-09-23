#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
// Type: ::BoxCuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5374))
// CS Name: BoxCuttableBySaber
class CORDL_TYPE BoxCuttableBySaber : public GlobalNamespace::CuttableBySaber {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BoxCuttableBySaber() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: " const&", def_value: None }]
constexpr BoxCuttableBySaber(BoxCuttableBySaber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "&&", def_value: None }]
constexpr BoxCuttableBySaber(BoxCuttableBySaber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoxCuttableBySaber(void* ptr) noexcept : GlobalNamespace::CuttableBySaber(ptr) {
}


  constexpr BoxCuttableBySaber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoxCuttableBySaber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoxCuttableBySaber& operator=(BoxCuttableBySaber&& o) noexcept = default;
  constexpr BoxCuttableBySaber& operator=(BoxCuttableBySaber const& o) noexcept = default;
                


// Fields

 UnityEngine::BoxCollider __declspec(property(get=__get__collider, put=__set__collider))  _collider;

constexpr void __set__collider(UnityEngine::BoxCollider value) ;

constexpr UnityEngine::BoxCollider __get__collider() const;

 bool __declspec(property(get=__get__canBeCut, put=__set__canBeCut))  _canBeCut;

constexpr void __set__canBeCut(bool value) ;

constexpr bool __get__canBeCut() const;

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;


// Properties

 float_t __declspec(property(get=get_radius))  radius;

 bool __declspec(property(get=get_canBeCut, put=set_canBeCut))  canBeCut;

 UnityEngine::Vector3 __declspec(property(get=get_colliderSize, put=set_colliderSize))  colliderSize;

 UnityEngine::Vector3 __declspec(property(get=get_colliderCenter, put=set_colliderCenter))  colliderCenter;


// Methods

/// @brief Method get_radius addr 0x210a440 size 0x8 virtual true final false
 float_t get_radius() ;

/// @brief Method set_canBeCut addr 0x210a448 size 0x38 virtual true final false
 void set_canBeCut(bool value) ;

/// @brief Method get_canBeCut addr 0x210a480 size 0x8 virtual true final false
 bool get_canBeCut() ;

/// @brief Method set_colliderSize addr 0x210a488 size 0x28 virtual false final false
 void set_colliderSize(UnityEngine::Vector3 value) ;

/// @brief Method get_colliderSize addr 0x210a518 size 0x1c virtual false final false
 UnityEngine::Vector3 get_colliderSize() ;

/// @brief Method set_colliderCenter addr 0x210a534 size 0x1c virtual false final false
 void set_colliderCenter(UnityEngine::Vector3 value) ;

/// @brief Method get_colliderCenter addr 0x210a550 size 0x1c virtual false final false
 UnityEngine::Vector3 get_colliderCenter() ;

/// @brief Method Awake addr 0x210a56c size 0x30 virtual false final false
 void Awake() ;

/// @brief Method Cut addr 0x210a59c size 0x34 virtual true final false
 void Cut(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

/// @brief Method SetColliderCenterAndSize addr 0x210a5fc size 0x58 virtual false final false
 void SetColliderCenterAndSize(UnityEngine::Vector3 center, UnityEngine::Vector3 size) ;

/// @brief Method RefreshRadius addr 0x210a4b0 size 0x68 virtual false final false
 void RefreshRadius() ;

// Ctor Parameters []
explicit BoxCuttableBySaber() ;

/// @brief Method .ctor addr 0x210a654 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BoxCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoxCuttableBySaber, "", "BoxCuttableBySaber");
