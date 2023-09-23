#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIKCalibrator__CalibrationData;
}
namespace RootMotion::FinalIK {
class VRIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIKRootController;
}
// Type: RootMotion.FinalIK::VRIKRootController
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12616))
// CS Name: RootMotion.FinalIK.VRIKRootController
class CORDL_TYPE VRIKRootController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~VRIKRootController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: " const&", def_value: None }]
constexpr VRIKRootController(VRIKRootController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: "&&", def_value: None }]
constexpr VRIKRootController(VRIKRootController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRIKRootController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRIKRootController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRIKRootController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRIKRootController& operator=(VRIKRootController&& o) noexcept = default;
  constexpr VRIKRootController& operator=(VRIKRootController const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__pelvisTargetRight_k__BackingField, put=__set__pelvisTargetRight_k__BackingField))  _pelvisTargetRight_k__BackingField;

constexpr void __set__pelvisTargetRight_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__pelvisTargetRight_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get_pelvisTarget, put=__set_pelvisTarget))  pelvisTarget;

constexpr void __set_pelvisTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_pelvisTarget() const;

 UnityEngine::Transform __declspec(property(get=__get_leftFootTarget, put=__set_leftFootTarget))  leftFootTarget;

constexpr void __set_leftFootTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftFootTarget() const;

 UnityEngine::Transform __declspec(property(get=__get_rightFootTarget, put=__set_rightFootTarget))  rightFootTarget;

constexpr void __set_rightFootTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightFootTarget() const;

 RootMotion::FinalIK::VRIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::VRIK value) ;

constexpr RootMotion::FinalIK::VRIK __get_ik() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_pelvisTargetRight, put=set_pelvisTargetRight))  pelvisTargetRight;


// Methods

/// @brief Method get_pelvisTargetRight addr 0x121051c size 0xc virtual false final false
 UnityEngine::Vector3 get_pelvisTargetRight() ;

/// @brief Method set_pelvisTargetRight addr 0x1210528 size 0xc virtual false final false
 void set_pelvisTargetRight(UnityEngine::Vector3 value) ;

/// @brief Method Awake addr 0x1210534 size 0xf4 virtual false final false
 void Awake() ;

/// @brief Method Calibrate addr 0x120f200 size 0x1c0 virtual false final false
 void Calibrate() ;

/// @brief Method Calibrate addr 0x1210010 size 0x158 virtual false final false
 void Calibrate(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData data) ;

/// @brief Method OnPreUpdate addr 0x1210628 size 0x3c8 virtual false final false
 void OnPreUpdate() ;

/// @brief Method OnDestroy addr 0x12109f0 size 0x10c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit VRIKRootController() ;

/// @brief Method .ctor addr 0x1210afc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::VRIKRootController);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKRootController, "RootMotion.FinalIK", "VRIKRootController");
