#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBoneCapsule;
}
// Type: ::OVRBoneCapsule
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8961))
// CS Name: OVRBoneCapsule
class CORDL_TYPE OVRBoneCapsule : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRBoneCapsule() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: " const&", def_value: None }]
constexpr OVRBoneCapsule(OVRBoneCapsule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: "&&", def_value: None }]
constexpr OVRBoneCapsule(OVRBoneCapsule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRBoneCapsule(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRBoneCapsule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRBoneCapsule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRBoneCapsule& operator=(OVRBoneCapsule&& o) noexcept = default;
  constexpr OVRBoneCapsule& operator=(OVRBoneCapsule const& o) noexcept = default;
                


// Fields

 int16_t __declspec(property(get=__get__BoneIndex_k__BackingField, put=__set__BoneIndex_k__BackingField))  _BoneIndex_k__BackingField;

constexpr void __set__BoneIndex_k__BackingField(int16_t value) ;

constexpr int16_t __get__BoneIndex_k__BackingField() const;

 UnityEngine::Rigidbody __declspec(property(get=__get__CapsuleRigidbody_k__BackingField, put=__set__CapsuleRigidbody_k__BackingField))  _CapsuleRigidbody_k__BackingField;

constexpr void __set__CapsuleRigidbody_k__BackingField(UnityEngine::Rigidbody value) ;

constexpr UnityEngine::Rigidbody __get__CapsuleRigidbody_k__BackingField() const;

 UnityEngine::CapsuleCollider __declspec(property(get=__get__CapsuleCollider_k__BackingField, put=__set__CapsuleCollider_k__BackingField))  _CapsuleCollider_k__BackingField;

constexpr void __set__CapsuleCollider_k__BackingField(UnityEngine::CapsuleCollider value) ;

constexpr UnityEngine::CapsuleCollider __get__CapsuleCollider_k__BackingField() const;


// Properties

 int16_t __declspec(property(get=get_BoneIndex, put=set_BoneIndex))  BoneIndex;

 UnityEngine::Rigidbody __declspec(property(get=get_CapsuleRigidbody, put=set_CapsuleRigidbody))  CapsuleRigidbody;

 UnityEngine::CapsuleCollider __declspec(property(get=get_CapsuleCollider, put=set_CapsuleCollider))  CapsuleCollider;


// Methods

/// @brief Method get_BoneIndex addr 0x2633714 size 0x8 virtual false final false
 int16_t get_BoneIndex() ;

/// @brief Method set_BoneIndex addr 0x263371c size 0x8 virtual false final false
 void set_BoneIndex(int16_t value) ;

/// @brief Method get_CapsuleRigidbody addr 0x2633724 size 0x8 virtual false final false
 UnityEngine::Rigidbody get_CapsuleRigidbody() ;

/// @brief Method set_CapsuleRigidbody addr 0x263372c size 0x8 virtual false final false
 void set_CapsuleRigidbody(UnityEngine::Rigidbody value) ;

/// @brief Method get_CapsuleCollider addr 0x2633734 size 0x8 virtual false final false
 UnityEngine::CapsuleCollider get_CapsuleCollider() ;

/// @brief Method set_CapsuleCollider addr 0x263373c size 0x8 virtual false final false
 void set_CapsuleCollider(UnityEngine::CapsuleCollider value) ;

// Ctor Parameters []
explicit OVRBoneCapsule() ;

/// @brief Method .ctor addr 0x2632e80 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "boneIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "capsuleRigidBody", ty: "UnityEngine::Rigidbody", modifiers: "", def_value: None }, CppParam { name: "capsuleCollider", ty: "UnityEngine::CapsuleCollider", modifiers: "", def_value: None }]
explicit OVRBoneCapsule(int16_t boneIndex, UnityEngine::Rigidbody capsuleRigidBody, UnityEngine::CapsuleCollider capsuleCollider) ;

/// @brief Method .ctor addr 0x2633744 size 0x3c virtual false final false
 void _ctor(int16_t boneIndex, UnityEngine::Rigidbody capsuleRigidBody, UnityEngine::CapsuleCollider capsuleCollider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRBoneCapsule);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoneCapsule, "", "OVRBoneCapsule");
