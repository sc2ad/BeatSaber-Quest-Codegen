#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeleton__BoneId;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBone;
}
// Type: ::OVRBone
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8960))
// CS Name: OVRBone
class CORDL_TYPE OVRBone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBone", modifiers: " const&", def_value: None }]
constexpr OVRBone(OVRBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBone", modifiers: "&&", def_value: None }]
constexpr OVRBone(OVRBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRBone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRBone& operator=(OVRBone&& o) noexcept = default;
  constexpr OVRBone& operator=(OVRBone const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId __declspec(property(get=__get__Id_k__BackingField, put=__set__Id_k__BackingField))  _Id_k__BackingField;

constexpr void __set__Id_k__BackingField(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId __get__Id_k__BackingField() const;

 int16_t __declspec(property(get=__get__ParentBoneIndex_k__BackingField, put=__set__ParentBoneIndex_k__BackingField))  _ParentBoneIndex_k__BackingField;

constexpr void __set__ParentBoneIndex_k__BackingField(int16_t value) ;

constexpr int16_t __get__ParentBoneIndex_k__BackingField() const;

 ::UnityEngine::Transform __declspec(property(get=__get__Transform_k__BackingField, put=__set__Transform_k__BackingField))  _Transform_k__BackingField;

constexpr void __set__Transform_k__BackingField(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__Transform_k__BackingField() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId __declspec(property(get=get_Id, put=set_Id))  Id;

 int16_t __declspec(property(get=get_ParentBoneIndex, put=set_ParentBoneIndex))  ParentBoneIndex;

 ::UnityEngine::Transform __declspec(property(get=get_Transform, put=set_Transform))  Transform;


// Methods

/// @brief Method get_Id addr 0x26336a4 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId get_Id() ;

/// @brief Method set_Id addr 0x26336ac size 0x8 virtual false final false
 void set_Id(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId value) ;

/// @brief Method get_ParentBoneIndex addr 0x26336b4 size 0x8 virtual false final false
 int16_t get_ParentBoneIndex() ;

/// @brief Method set_ParentBoneIndex addr 0x26336bc size 0x8 virtual false final false
 void set_ParentBoneIndex(int16_t value) ;

/// @brief Method get_Transform addr 0x26336c4 size 0x8 virtual false final false
 ::UnityEngine::Transform get_Transform() ;

/// @brief Method set_Transform addr 0x26336cc size 0x8 virtual false final false
 void set_Transform(::UnityEngine::Transform value) ;

// Ctor Parameters []
explicit OVRBone() ;

/// @brief Method .ctor addr 0x2632960 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "id", ty: "::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId", modifiers: "", def_value: None }, CppParam { name: "parentBoneIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "trans", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit OVRBone(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform trans) ;

/// @brief Method .ctor addr 0x26336d4 size 0x40 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform trans) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRBone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBone, "", "OVRBone");
