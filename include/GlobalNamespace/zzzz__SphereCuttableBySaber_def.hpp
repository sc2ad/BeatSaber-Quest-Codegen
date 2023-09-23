#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SphereCuttableBySaber;
}
// Type: ::SphereCuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5400))
// CS Name: SphereCuttableBySaber
class CORDL_TYPE SphereCuttableBySaber : public GlobalNamespace::CuttableBySaber {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SphereCuttableBySaber() = default;

// Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: " const&", def_value: None }]
constexpr SphereCuttableBySaber(SphereCuttableBySaber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: "&&", def_value: None }]
constexpr SphereCuttableBySaber(SphereCuttableBySaber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SphereCuttableBySaber(void* ptr) noexcept : GlobalNamespace::CuttableBySaber(ptr) {
}


  constexpr SphereCuttableBySaber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SphereCuttableBySaber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SphereCuttableBySaber& operator=(SphereCuttableBySaber&& o) noexcept = default;
  constexpr SphereCuttableBySaber& operator=(SphereCuttableBySaber const& o) noexcept = default;
                


// Fields

 UnityEngine::SphereCollider __declspec(property(get=__get__collider, put=__set__collider))  _collider;

constexpr void __set__collider(UnityEngine::SphereCollider value) ;

constexpr UnityEngine::SphereCollider __get__collider() const;

 bool __declspec(property(get=__get__canBeCut, put=__set__canBeCut))  _canBeCut;

constexpr void __set__canBeCut(bool value) ;

constexpr bool __get__canBeCut() const;


// Properties

 float_t __declspec(property(get=get_radius))  radius;

 bool __declspec(property(get=get_canBeCut, put=set_canBeCut))  canBeCut;


// Methods

/// @brief Method get_radius addr 0x210ced4 size 0x1c virtual true final false
 float_t get_radius() ;

/// @brief Method set_canBeCut addr 0x210cef0 size 0x38 virtual true final false
 void set_canBeCut(bool value) ;

/// @brief Method get_canBeCut addr 0x210cf28 size 0x8 virtual true final false
 bool get_canBeCut() ;

/// @brief Method Awake addr 0x210cf30 size 0x2c virtual false final false
 void Awake() ;

/// @brief Method Cut addr 0x210cf5c size 0x34 virtual true final false
 void Cut(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

// Ctor Parameters []
explicit SphereCuttableBySaber() ;

/// @brief Method .ctor addr 0x210cf90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SphereCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SphereCuttableBySaber, "", "SphereCuttableBySaber");
