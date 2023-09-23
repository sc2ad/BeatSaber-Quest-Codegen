#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimPoser;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__AimPoser__Pose;
}
// Type: ::Pose
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12573))
// CS Name: RootMotion.FinalIK.AimPoser::Pose
class CORDL_TYPE RootMotion__FinalIK__AimPoser__Pose : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__AimPoser__Pose() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__AimPoser__Pose", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__AimPoser__Pose(RootMotion__FinalIK__AimPoser__Pose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__AimPoser__Pose", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__AimPoser__Pose(RootMotion__FinalIK__AimPoser__Pose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__AimPoser__Pose(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__AimPoser__Pose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__AimPoser__Pose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__AimPoser__Pose& operator=(RootMotion__FinalIK__AimPoser__Pose&& o) noexcept = default;
  constexpr RootMotion__FinalIK__AimPoser__Pose& operator=(RootMotion__FinalIK__AimPoser__Pose const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_visualize, put=__set_visualize))  visualize;

constexpr void __set_visualize(bool value) ;

constexpr bool __get_visualize() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_direction() const;

 float_t __declspec(property(get=__get_yaw, put=__set_yaw))  yaw;

constexpr void __set_yaw(float_t value) ;

constexpr float_t __get_yaw() const;

 float_t __declspec(property(get=__get_pitch, put=__set_pitch))  pitch;

constexpr void __set_pitch(float_t value) ;

constexpr float_t __get_pitch() const;

 float_t __declspec(property(get=__get_angleBuffer, put=__set_angleBuffer))  angleBuffer;

constexpr void __set_angleBuffer(float_t value) ;

constexpr float_t __get_angleBuffer() const;


// Methods

/// @brief Method IsInDirection addr 0x1206d58 size 0x4b0 virtual false final false
 bool IsInDirection(UnityEngine::Vector3 d) ;

/// @brief Method SetAngleBuffer addr 0x12072c8 size 0x8 virtual false final false
 void SetAngleBuffer(float_t value) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__AimPoser__Pose() ;

/// @brief Method .ctor addr 0x12072d0 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::AimPoser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12574))
// CS Name: RootMotion.FinalIK.AimPoser
class CORDL_TYPE AimPoser : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pose = RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AimPoser() = default;

// Ctor Parameters [CppParam { name: "", ty: "AimPoser", modifiers: " const&", def_value: None }]
constexpr AimPoser(AimPoser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AimPoser", modifiers: "&&", def_value: None }]
constexpr AimPoser(AimPoser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AimPoser(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AimPoser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AimPoser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AimPoser& operator=(AimPoser&& o) noexcept = default;
  constexpr AimPoser& operator=(AimPoser const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_angleBuffer, put=__set_angleBuffer))  angleBuffer;

constexpr void __set_angleBuffer(float_t value) ;

constexpr float_t __get_angleBuffer() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose> __declspec(property(get=__get_poses, put=__set_poses))  poses;

constexpr void __set_poses(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose> __get_poses() const;


// Methods

/// @brief Method GetPose addr 0x1206c88 size 0xd0 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose GetPose(UnityEngine::Vector3 localDirection) ;

/// @brief Method SetPoseActive addr 0x1207208 size 0x60 virtual false final false
 void SetPoseActive(RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose pose) ;

// Ctor Parameters []
explicit AimPoser() ;

/// @brief Method .ctor addr 0x1207268 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::AimPoser);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimPoser, "RootMotion.FinalIK", "AimPoser");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__AimPoser__Pose, "RootMotion.FinalIK", "AimPoser/Pose");
