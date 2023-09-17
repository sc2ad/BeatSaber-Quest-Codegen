#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Animator;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Joint;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RagdollUtility;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__RagdollUtility__Child;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__RagdollUtility__Rigidbone;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21;
}
// Type: ::Rigidbone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12560))
// CS Name: RootMotion.FinalIK.RagdollUtility::Rigidbone
class CORDL_TYPE ____RootMotion__FinalIK__RagdollUtility__Rigidbone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~____RootMotion__FinalIK__RagdollUtility__Rigidbone() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility__Rigidbone", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone(____RootMotion__FinalIK__RagdollUtility__Rigidbone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility__Rigidbone", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone(____RootMotion__FinalIK__RagdollUtility__Rigidbone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__RagdollUtility__Rigidbone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone& operator=(____RootMotion__FinalIK__RagdollUtility__Rigidbone&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__RagdollUtility__Rigidbone& operator=(____RootMotion__FinalIK__RagdollUtility__Rigidbone const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Rigidbody __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(::UnityEngine::Rigidbody value) ;

constexpr ::UnityEngine::Rigidbody __get_r() const;

 ::UnityEngine::Transform __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_t() const;

 ::UnityEngine::Collider __declspec(property(get=__get_collider, put=__set_collider))  collider;

constexpr void __set_collider(::UnityEngine::Collider value) ;

constexpr ::UnityEngine::Collider __get_collider() const;

 ::UnityEngine::Joint __declspec(property(get=__get_joint, put=__set_joint))  joint;

constexpr void __set_joint(::UnityEngine::Joint value) ;

constexpr ::UnityEngine::Joint __get_joint() const;

 ::UnityEngine::Rigidbody __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(::UnityEngine::Rigidbody value) ;

constexpr ::UnityEngine::Rigidbody __get_c() const;

 bool __declspec(property(get=__get_updateAnchor, put=__set_updateAnchor))  updateAnchor;

constexpr void __set_updateAnchor(bool value) ;

constexpr bool __get_updateAnchor() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_deltaPosition, put=__set_deltaPosition))  deltaPosition;

constexpr void __set_deltaPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_deltaPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_deltaRotation, put=__set_deltaRotation))  deltaRotation;

constexpr void __set_deltaRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_deltaRotation() const;

 float_t __declspec(property(get=__get_deltaTime, put=__set_deltaTime))  deltaTime;

constexpr void __set_deltaTime(float_t value) ;

constexpr float_t __get_deltaTime() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_lastPosition, put=__set_lastPosition))  lastPosition;

constexpr void __set_lastPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_lastPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_lastRotation, put=__set_lastRotation))  lastRotation;

constexpr void __set_lastRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_lastRotation() const;


// Methods

// Ctor Parameters [CppParam { name: "r", ty: "::UnityEngine::Rigidbody", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__RagdollUtility__Rigidbone(::UnityEngine::Rigidbody r) ;

/// @brief Method .ctor addr 0x1201828 size 0x154 virtual false final false
 void _ctor(::UnityEngine::Rigidbody r) ;

/// @brief Method RecordVelocity addr 0x1202370 size 0xd4 virtual false final false
 void RecordVelocity() ;

/// @brief Method WakeUp addr 0x1202130 size 0x240 virtual false final false
 void WakeUp(float_t velocityWeight, float_t angularVelocityWeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Child
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12561))
// CS Name: RootMotion.FinalIK.RagdollUtility::Child
class CORDL_TYPE ____RootMotion__FinalIK__RagdollUtility__Child : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____RootMotion__FinalIK__RagdollUtility__Child() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility__Child", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility__Child(____RootMotion__FinalIK__RagdollUtility__Child const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility__Child", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility__Child(____RootMotion__FinalIK__RagdollUtility__Child&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__RagdollUtility__Child(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__RagdollUtility__Child& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility__Child& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility__Child& operator=(____RootMotion__FinalIK__RagdollUtility__Child&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__RagdollUtility__Child& operator=(____RootMotion__FinalIK__RagdollUtility__Child const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_t() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_localPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_localRotation, put=__set_localRotation))  localRotation;

constexpr void __set_localRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_localRotation() const;


// Methods

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__RagdollUtility__Child(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x120197c size 0x5c virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

/// @brief Method FixTransform addr 0x1202488 size 0x110 virtual false final false
 void FixTransform(float_t weight) ;

/// @brief Method StoreLocalState addr 0x1202444 size 0x44 virtual false final false
 void StoreLocalState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::<DisableRagdollSmooth>d__21
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12562))
// CS Name: RootMotion.FinalIK.RagdollUtility::<DisableRagdollSmooth>d__21
class CORDL_TYPE ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21(____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21(____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21& operator=(____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21& operator=(____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::RootMotion::FinalIK::RagdollUtility __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::RootMotion::FinalIK::RagdollUtility value) ;

constexpr ::RootMotion::FinalIK::RagdollUtility __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21(int32_t __1__state) ;

/// @brief Method .ctor addr 0x12019d8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x12027a8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x12027ac size 0x1e0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x120298c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1202994 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x12029d4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::RagdollUtility
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12563))
// CS Name: RootMotion.FinalIK.RagdollUtility
class CORDL_TYPE RagdollUtility : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisableRagdollSmooth_d__21 = ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21;

using Child = ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child;

using Rigidbone = ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~RagdollUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "RagdollUtility", modifiers: " const&", def_value: None }]
constexpr RagdollUtility(RagdollUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RagdollUtility", modifiers: "&&", def_value: None }]
constexpr RagdollUtility(RagdollUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RagdollUtility(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RagdollUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RagdollUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RagdollUtility& operator=(RagdollUtility&& o) noexcept = default;
  constexpr RagdollUtility& operator=(RagdollUtility const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::IK value) ;

constexpr ::RootMotion::FinalIK::IK __get_ik() const;

 float_t __declspec(property(get=__get_ragdollToAnimationTime, put=__set_ragdollToAnimationTime))  ragdollToAnimationTime;

constexpr void __set_ragdollToAnimationTime(float_t value) ;

constexpr float_t __get_ragdollToAnimationTime() const;

 bool __declspec(property(get=__get_applyIkOnRagdoll, put=__set_applyIkOnRagdoll))  applyIkOnRagdoll;

constexpr void __set_applyIkOnRagdoll(bool value) ;

constexpr bool __get_applyIkOnRagdoll() const;

 float_t __declspec(property(get=__get_applyVelocity, put=__set_applyVelocity))  applyVelocity;

constexpr void __set_applyVelocity(float_t value) ;

constexpr float_t __get_applyVelocity() const;

 float_t __declspec(property(get=__get_applyAngularVelocity, put=__set_applyAngularVelocity))  applyAngularVelocity;

constexpr void __set_applyAngularVelocity(float_t value) ;

constexpr float_t __get_applyAngularVelocity() const;

 ::UnityEngine::Animator __declspec(property(get=__get_animator, put=__set_animator))  animator;

constexpr void __set_animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get_animator() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone> __declspec(property(get=__get_rigidbones, put=__set_rigidbones))  rigidbones;

constexpr void __set_rigidbones(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone> __get_rigidbones() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child> __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child> __get_children() const;

 bool __declspec(property(get=__get_enableRagdollFlag, put=__set_enableRagdollFlag))  enableRagdollFlag;

constexpr void __set_enableRagdollFlag(bool value) ;

constexpr bool __get_enableRagdollFlag() const;

 ::UnityEngine::AnimatorUpdateMode __declspec(property(get=__get_animatorUpdateMode, put=__set_animatorUpdateMode))  animatorUpdateMode;

constexpr void __set_animatorUpdateMode(::UnityEngine::AnimatorUpdateMode value) ;

constexpr ::UnityEngine::AnimatorUpdateMode __get_animatorUpdateMode() const;

 ::ArrayW<::RootMotion::FinalIK::IK> __declspec(property(get=__get_allIKComponents, put=__set_allIKComponents))  allIKComponents;

constexpr void __set_allIKComponents(::ArrayW<::RootMotion::FinalIK::IK> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK> __get_allIKComponents() const;

 ::ArrayW<bool> __declspec(property(get=__get_fixTransforms, put=__set_fixTransforms))  fixTransforms;

constexpr void __set_fixTransforms(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_fixTransforms() const;

 float_t __declspec(property(get=__get_ragdollWeight, put=__set_ragdollWeight))  ragdollWeight;

constexpr void __set_ragdollWeight(float_t value) ;

constexpr float_t __get_ragdollWeight() const;

 float_t __declspec(property(get=__get_ragdollWeightV, put=__set_ragdollWeightV))  ragdollWeightV;

constexpr void __set_ragdollWeightV(float_t value) ;

constexpr float_t __get_ragdollWeightV() const;

 bool __declspec(property(get=__get_fixedFrame, put=__set_fixedFrame))  fixedFrame;

constexpr void __set_fixedFrame(bool value) ;

constexpr bool __get_fixedFrame() const;

 ::ArrayW<bool> __declspec(property(get=__get_disabledIKComponents, put=__set_disabledIKComponents))  disabledIKComponents;

constexpr void __set_disabledIKComponents(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_disabledIKComponents() const;


// Properties

 bool __declspec(property(get=get_isRagdoll))  isRagdoll;

 bool __declspec(property(get=get_ikUsed))  ikUsed;


// Methods

/// @brief Method EnableRagdoll addr 0x1201280 size 0x2c virtual false final false
 void EnableRagdoll() ;

/// @brief Method DisableRagdoll addr 0x1201310 size 0x48 virtual false final false
 void DisableRagdoll() ;

/// @brief Method Start addr 0x120141c size 0x40c virtual false final false
 void Start() ;

/// @brief Method DisableRagdollSmooth addr 0x12013b4 size 0x68 virtual false final false
 ::System::Collections::IEnumerator DisableRagdollSmooth() ;

/// @brief Method Update addr 0x1201a00 size 0x228 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x1201c28 size 0x34 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x1201cc8 size 0x70 virtual false final false
 void LateUpdate() ;

/// @brief Method AfterLastIK addr 0x1201eb8 size 0x24 virtual false final false
 void AfterLastIK() ;

/// @brief Method AfterAnimation addr 0x1201d38 size 0x2c virtual false final false
 void AfterAnimation() ;

/// @brief Method OnFinalPose addr 0x1201e84 size 0x34 virtual false final false
 void OnFinalPose() ;

/// @brief Method RagdollEnabler addr 0x1201f38 size 0x1f8 virtual false final false
 void RagdollEnabler() ;

/// @brief Method get_isRagdoll addr 0x12012ac size 0x64 virtual false final false
 bool get_isRagdoll() ;

/// @brief Method RecordVelocities addr 0x1201edc size 0x5c virtual false final false
 void RecordVelocities() ;

/// @brief Method get_ikUsed addr 0x1201d64 size 0x120 virtual false final false
 bool get_ikUsed() ;

/// @brief Method StoreLocalState addr 0x1201358 size 0x5c virtual false final false
 void StoreLocalState() ;

/// @brief Method FixTransforms addr 0x1201c5c size 0x6c virtual false final false
 void FixTransforms(float_t weight) ;

/// @brief Method OnDestroy addr 0x1202598 size 0x118 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit RagdollUtility() ;

/// @brief Method .ctor addr 0x12026b0 size 0xf8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::RagdollUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RagdollUtility, "RootMotion.FinalIK", "RagdollUtility");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child, "RootMotion.FinalIK", "RagdollUtility/Child");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone, "RootMotion.FinalIK", "RagdollUtility/Rigidbone");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21, "RootMotion.FinalIK", "RagdollUtility/<DisableRagdollSmooth>d__21");
