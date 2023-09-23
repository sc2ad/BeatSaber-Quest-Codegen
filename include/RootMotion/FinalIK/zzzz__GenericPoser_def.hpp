#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GenericPoser;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__GenericPoser__Map;
}
// Type: ::Map
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12556))
// CS Name: RootMotion.FinalIK.GenericPoser::Map
class CORDL_TYPE RootMotion__FinalIK__GenericPoser__Map : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RootMotion__FinalIK__GenericPoser__Map() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__GenericPoser__Map", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__GenericPoser__Map(RootMotion__FinalIK__GenericPoser__Map const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__GenericPoser__Map", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__GenericPoser__Map(RootMotion__FinalIK__GenericPoser__Map&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__GenericPoser__Map(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__GenericPoser__Map& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__GenericPoser__Map& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__GenericPoser__Map& operator=(RootMotion__FinalIK__GenericPoser__Map&& o) noexcept = default;
  constexpr RootMotion__FinalIK__GenericPoser__Map& operator=(RootMotion__FinalIK__GenericPoser__Map const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_bone, put=__set_bone))  bone;

constexpr void __set_bone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bone() const;

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalPosition, put=__set_defaultLocalPosition))  defaultLocalPosition;

constexpr void __set_defaultLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_defaultLocalPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_defaultLocalRotation() const;


// Methods

// Ctor Parameters [CppParam { name: "bone", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "target", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__GenericPoser__Map(UnityEngine::Transform bone, UnityEngine::Transform target) ;

/// @brief Method .ctor addr 0x12007c4 size 0x30 virtual false final false
 void _ctor(UnityEngine::Transform bone, UnityEngine::Transform target) ;

/// @brief Method StoreDefaultState addr 0x1200b00 size 0x44 virtual false final false
 void StoreDefaultState() ;

/// @brief Method FixTransform addr 0x1200ac0 size 0x40 virtual false final false
 void FixTransform() ;

/// @brief Method Update addr 0x1200944 size 0x120 virtual false final false
 void Update(float_t localRotationWeight, float_t localPositionWeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::GenericPoser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12557))
// CS Name: RootMotion.FinalIK.GenericPoser
class CORDL_TYPE GenericPoser : public RootMotion::FinalIK::Poser {
public:
// Declarations
using Map = RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GenericPoser() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: " const&", def_value: None }]
constexpr GenericPoser(GenericPoser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "&&", def_value: None }]
constexpr GenericPoser(GenericPoser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPoser(void* ptr) noexcept : RootMotion::FinalIK::Poser(ptr) {
}


  constexpr GenericPoser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPoser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPoser& operator=(GenericPoser&& o) noexcept = default;
  constexpr GenericPoser& operator=(GenericPoser const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map> __get_maps() const;


// Methods

/// @brief Method AutoMapping addr 0x12004d8 size 0x258 virtual true final false
 void AutoMapping() ;

/// @brief Method InitiatePoser addr 0x1200850 size 0x4 virtual true final false
 void InitiatePoser() ;

/// @brief Method UpdatePoser addr 0x1200854 size 0xf0 virtual true final false
 void UpdatePoser() ;

/// @brief Method FixPoserTransforms addr 0x1200a64 size 0x5c virtual true final false
 void FixPoserTransforms() ;

/// @brief Method StoreDefaultState addr 0x12007f4 size 0x5c virtual false final false
 void StoreDefaultState() ;

/// @brief Method GetTargetNamed addr 0x1200730 size 0x94 virtual false final false
 UnityEngine::Transform GetTargetNamed(::StringW tName, ::ArrayW<UnityEngine::Transform> array) ;

// Ctor Parameters []
explicit GenericPoser() ;

/// @brief Method .ctor addr 0x1200b44 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::GenericPoser);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GenericPoser, "RootMotion.FinalIK", "GenericPoser");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__GenericPoser__Map, "RootMotion.FinalIK", "GenericPoser/Map");
