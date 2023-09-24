#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__DynamicBone__Particle;
}
namespace GlobalNamespace {
struct GlobalNamespace__DynamicBone__UpdateMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__DynamicBone__FreezeAxis;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class DynamicBoneColliderBase;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__DynamicBone__FreezeAxis;
}
namespace GlobalNamespace {
struct GlobalNamespace__DynamicBone__UpdateMode;
}
namespace GlobalNamespace {
class DynamicBone;
}
namespace GlobalNamespace {
class GlobalNamespace__DynamicBone__Particle;
}
// Type: ::UpdateMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15898))
// CS Name: DynamicBone::UpdateMode
struct CORDL_TYPE GlobalNamespace__DynamicBone__UpdateMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DynamicBone__UpdateMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__DynamicBone__UpdateMode(GlobalNamespace__DynamicBone__UpdateMode const&) = default;
                    constexpr GlobalNamespace__DynamicBone__UpdateMode(GlobalNamespace__DynamicBone__UpdateMode&&) = default;
                    constexpr GlobalNamespace__DynamicBone__UpdateMode& operator=(GlobalNamespace__DynamicBone__UpdateMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DynamicBone__UpdateMode& operator=(GlobalNamespace__DynamicBone__UpdateMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DynamicBone__UpdateMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__DynamicBone__UpdateMode_Unwrapped : int32_t {
__Normal = 0,
__AnimatePhysics = 1,
__UnscaledTime = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__DynamicBone__UpdateMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__DynamicBone__UpdateMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode const Normal;

/// @brief Field AnimatePhysics offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode const AnimatePhysics;

/// @brief Field UnscaledTime offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode const UnscaledTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FreezeAxis
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15899))
// CS Name: DynamicBone::FreezeAxis
struct CORDL_TYPE GlobalNamespace__DynamicBone__FreezeAxis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DynamicBone__FreezeAxis(int32_t value__) noexcept;


                    constexpr GlobalNamespace__DynamicBone__FreezeAxis(GlobalNamespace__DynamicBone__FreezeAxis const&) = default;
                    constexpr GlobalNamespace__DynamicBone__FreezeAxis(GlobalNamespace__DynamicBone__FreezeAxis&&) = default;
                    constexpr GlobalNamespace__DynamicBone__FreezeAxis& operator=(GlobalNamespace__DynamicBone__FreezeAxis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DynamicBone__FreezeAxis& operator=(GlobalNamespace__DynamicBone__FreezeAxis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DynamicBone__FreezeAxis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__DynamicBone__FreezeAxis_Unwrapped : int32_t {
__None = 0,
__X = 1,
__Y = 2,
__Z = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__DynamicBone__FreezeAxis_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__DynamicBone__FreezeAxis_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis const None;

/// @brief Field X offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis const X;

/// @brief Field Y offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis const Y;

/// @brief Field Z offset 0
static GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis const Z;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Particle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15900))
// CS Name: DynamicBone::Particle
class CORDL_TYPE GlobalNamespace__DynamicBone__Particle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~GlobalNamespace__DynamicBone__Particle() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DynamicBone__Particle", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DynamicBone__Particle(GlobalNamespace__DynamicBone__Particle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DynamicBone__Particle", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DynamicBone__Particle(GlobalNamespace__DynamicBone__Particle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DynamicBone__Particle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DynamicBone__Particle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DynamicBone__Particle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DynamicBone__Particle& operator=(GlobalNamespace__DynamicBone__Particle&& o) noexcept = default;
  constexpr GlobalNamespace__DynamicBone__Particle& operator=(GlobalNamespace__DynamicBone__Particle const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_Transform() const;

 int32_t __declspec(property(get=__get_m_ParentIndex, put=__set_m_ParentIndex))  m_ParentIndex;

constexpr void __set_m_ParentIndex(int32_t value) ;

constexpr int32_t __get_m_ParentIndex() const;

 float_t __declspec(property(get=__get_m_Damping, put=__set_m_Damping))  m_Damping;

constexpr void __set_m_Damping(float_t value) ;

constexpr float_t __get_m_Damping() const;

 float_t __declspec(property(get=__get_m_Elasticity, put=__set_m_Elasticity))  m_Elasticity;

constexpr void __set_m_Elasticity(float_t value) ;

constexpr float_t __get_m_Elasticity() const;

 float_t __declspec(property(get=__get_m_Stiffness, put=__set_m_Stiffness))  m_Stiffness;

constexpr void __set_m_Stiffness(float_t value) ;

constexpr float_t __get_m_Stiffness() const;

 float_t __declspec(property(get=__get_m_Inert, put=__set_m_Inert))  m_Inert;

constexpr void __set_m_Inert(float_t value) ;

constexpr float_t __get_m_Inert() const;

 float_t __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(float_t value) ;

constexpr float_t __get_m_Radius() const;

 float_t __declspec(property(get=__get_m_BoneLength, put=__set_m_BoneLength))  m_BoneLength;

constexpr void __set_m_BoneLength(float_t value) ;

constexpr float_t __get_m_BoneLength() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_PrevPosition, put=__set_m_PrevPosition))  m_PrevPosition;

constexpr void __set_m_PrevPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_PrevPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_EndOffset, put=__set_m_EndOffset))  m_EndOffset;

constexpr void __set_m_EndOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_EndOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_InitLocalPosition, put=__set_m_InitLocalPosition))  m_InitLocalPosition;

constexpr void __set_m_InitLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_InitLocalPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_InitLocalRotation, put=__set_m_InitLocalRotation))  m_InitLocalRotation;

constexpr void __set_m_InitLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_InitLocalRotation() const;


// Methods

static GlobalNamespace::GlobalNamespace__DynamicBone__Particle New_ctor() ;

/// @brief Method .ctor addr 0x11a5c54 size 0xdc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DynamicBone
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15901))
// CS Name: DynamicBone
class CORDL_TYPE DynamicBone : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Particle = GlobalNamespace::GlobalNamespace__DynamicBone__Particle;

using FreezeAxis = GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis;

using UpdateMode = GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~DynamicBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBone", modifiers: " const&", def_value: None }]
constexpr DynamicBone(DynamicBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBone", modifiers: "&&", def_value: None }]
constexpr DynamicBone(DynamicBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicBone(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DynamicBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicBone& operator=(DynamicBone&& o) noexcept = default;
  constexpr DynamicBone& operator=(DynamicBone const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_m_Root, put=__set_m_Root))  m_Root;

constexpr void __set_m_Root(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_Root() const;

 float_t __declspec(property(get=__get_m_UpdateRate, put=__set_m_UpdateRate))  m_UpdateRate;

constexpr void __set_m_UpdateRate(float_t value) ;

constexpr float_t __get_m_UpdateRate() const;

 GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode __declspec(property(get=__get_m_UpdateMode, put=__set_m_UpdateMode))  m_UpdateMode;

constexpr void __set_m_UpdateMode(GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode value) ;

constexpr GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode __get_m_UpdateMode() const;

 float_t __declspec(property(get=__get_m_Damping, put=__set_m_Damping))  m_Damping;

constexpr void __set_m_Damping(float_t value) ;

constexpr float_t __get_m_Damping() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_DampingDistrib, put=__set_m_DampingDistrib))  m_DampingDistrib;

constexpr void __set_m_DampingDistrib(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_DampingDistrib() const;

 float_t __declspec(property(get=__get_m_Elasticity, put=__set_m_Elasticity))  m_Elasticity;

constexpr void __set_m_Elasticity(float_t value) ;

constexpr float_t __get_m_Elasticity() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_ElasticityDistrib, put=__set_m_ElasticityDistrib))  m_ElasticityDistrib;

constexpr void __set_m_ElasticityDistrib(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_ElasticityDistrib() const;

 float_t __declspec(property(get=__get_m_Stiffness, put=__set_m_Stiffness))  m_Stiffness;

constexpr void __set_m_Stiffness(float_t value) ;

constexpr float_t __get_m_Stiffness() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_StiffnessDistrib, put=__set_m_StiffnessDistrib))  m_StiffnessDistrib;

constexpr void __set_m_StiffnessDistrib(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_StiffnessDistrib() const;

 float_t __declspec(property(get=__get_m_Inert, put=__set_m_Inert))  m_Inert;

constexpr void __set_m_Inert(float_t value) ;

constexpr float_t __get_m_Inert() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_InertDistrib, put=__set_m_InertDistrib))  m_InertDistrib;

constexpr void __set_m_InertDistrib(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_InertDistrib() const;

 float_t __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(float_t value) ;

constexpr float_t __get_m_Radius() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_RadiusDistrib, put=__set_m_RadiusDistrib))  m_RadiusDistrib;

constexpr void __set_m_RadiusDistrib(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_RadiusDistrib() const;

 float_t __declspec(property(get=__get_m_EndLength, put=__set_m_EndLength))  m_EndLength;

constexpr void __set_m_EndLength(float_t value) ;

constexpr float_t __get_m_EndLength() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_EndOffset, put=__set_m_EndOffset))  m_EndOffset;

constexpr void __set_m_EndOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_EndOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Gravity, put=__set_m_Gravity))  m_Gravity;

constexpr void __set_m_Gravity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Gravity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Force, put=__set_m_Force))  m_Force;

constexpr void __set_m_Force(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Force() const;

 System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase> __declspec(property(get=__get_m_Colliders, put=__set_m_Colliders))  m_Colliders;

constexpr void __set_m_Colliders(System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase> __get_m_Colliders() const;

 System::Collections::Generic::List_1<UnityEngine::Transform> __declspec(property(get=__get_m_Exclusions, put=__set_m_Exclusions))  m_Exclusions;

constexpr void __set_m_Exclusions(System::Collections::Generic::List_1<UnityEngine::Transform> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Transform> __get_m_Exclusions() const;

 GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis __declspec(property(get=__get_m_FreezeAxis, put=__set_m_FreezeAxis))  m_FreezeAxis;

constexpr void __set_m_FreezeAxis(GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis value) ;

constexpr GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis __get_m_FreezeAxis() const;

 bool __declspec(property(get=__get_m_DistantDisable, put=__set_m_DistantDisable))  m_DistantDisable;

constexpr void __set_m_DistantDisable(bool value) ;

constexpr bool __get_m_DistantDisable() const;

 UnityEngine::Transform __declspec(property(get=__get_m_ReferenceObject, put=__set_m_ReferenceObject))  m_ReferenceObject;

constexpr void __set_m_ReferenceObject(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_ReferenceObject() const;

 float_t __declspec(property(get=__get_m_DistanceToObject, put=__set_m_DistanceToObject))  m_DistanceToObject;

constexpr void __set_m_DistanceToObject(float_t value) ;

constexpr float_t __get_m_DistanceToObject() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_LocalGravity, put=__set_m_LocalGravity))  m_LocalGravity;

constexpr void __set_m_LocalGravity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_LocalGravity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_ObjectMove, put=__set_m_ObjectMove))  m_ObjectMove;

constexpr void __set_m_ObjectMove(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_ObjectMove() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_ObjectPrevPosition, put=__set_m_ObjectPrevPosition))  m_ObjectPrevPosition;

constexpr void __set_m_ObjectPrevPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_ObjectPrevPosition() const;

 float_t __declspec(property(get=__get_m_BoneTotalLength, put=__set_m_BoneTotalLength))  m_BoneTotalLength;

constexpr void __set_m_BoneTotalLength(float_t value) ;

constexpr float_t __get_m_BoneTotalLength() const;

 float_t __declspec(property(get=__get_m_ObjectScale, put=__set_m_ObjectScale))  m_ObjectScale;

constexpr void __set_m_ObjectScale(float_t value) ;

constexpr float_t __get_m_ObjectScale() const;

 float_t __declspec(property(get=__get_m_Time, put=__set_m_Time))  m_Time;

constexpr void __set_m_Time(float_t value) ;

constexpr float_t __get_m_Time() const;

 float_t __declspec(property(get=__get_m_Weight, put=__set_m_Weight))  m_Weight;

constexpr void __set_m_Weight(float_t value) ;

constexpr float_t __get_m_Weight() const;

 bool __declspec(property(get=__get_m_DistantDisabled, put=__set_m_DistantDisabled))  m_DistantDisabled;

constexpr void __set_m_DistantDisabled(bool value) ;

constexpr bool __get_m_DistantDisabled() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DynamicBone__Particle> __declspec(property(get=__get_m_Particles, put=__set_m_Particles))  m_Particles;

constexpr void __set_m_Particles(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DynamicBone__Particle> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DynamicBone__Particle> __get_m_Particles() const;


// Methods

/// @brief Method Start addr 0x11a39e8 size 0x4 virtual false final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x11a3b58 size 0x30 virtual false final false
 void FixedUpdate() ;

/// @brief Method Update addr 0x11a3bac size 0x30 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x11a3bdc size 0x50 virtual false final false
 void LateUpdate() ;

/// @brief Method PreUpdate addr 0x11a3b88 size 0x24 virtual false final false
 void PreUpdate() ;

/// @brief Method CheckDistance addr 0x11a3c2c size 0x178 virtual false final false
 void CheckDistance() ;

/// @brief Method OnEnable addr 0x11a41b4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x11a41b8 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method OnValidate addr 0x11a41bc size 0xac virtual false final false
 void OnValidate() ;

/// @brief Method OnDrawGizmosSelected addr 0x11a4268 size 0x190 virtual false final false
 void OnDrawGizmosSelected() ;

/// @brief Method SetWeight addr 0x11a43f8 size 0x50 virtual false final false
 void SetWeight(float_t w) ;

/// @brief Method GetWeight addr 0x11a4448 size 0x8 virtual false final false
 float_t GetWeight() ;

/// @brief Method UpdateDynamicBones addr 0x11a3da4 size 0x1c4 virtual false final false
 void UpdateDynamicBones(float_t t) ;

/// @brief Method SetupParticles addr 0x11a39ec size 0x16c virtual false final false
 void SetupParticles() ;

/// @brief Method AppendParticles addr 0x11a53d0 size 0x5c8 virtual false final false
 void AppendParticles(UnityEngine::Transform b, int32_t parentIndex, float_t boneLength) ;

/// @brief Method UpdateParameters addr 0x11a5998 size 0x2bc virtual false final false
 void UpdateParameters() ;

/// @brief Method InitTransforms addr 0x11a3f68 size 0x104 virtual false final false
 void InitTransforms() ;

/// @brief Method ResetParticlesPosition addr 0x11a406c size 0x148 virtual false final false
 void ResetParticlesPosition() ;

/// @brief Method UpdateParticles1 addr 0x11a4450 size 0x264 virtual false final false
 void UpdateParticles1() ;

/// @brief Method UpdateParticles2 addr 0x11a46b4 size 0x61c virtual false final false
 void UpdateParticles2() ;

/// @brief Method SkipUpdateParticles addr 0x11a4cd0 size 0x4a4 virtual false final false
 void SkipUpdateParticles() ;

/// @brief Method MirrorVector addr 0x11a5d30 size 0x34 virtual false final false
static UnityEngine::Vector3 MirrorVector(UnityEngine::Vector3 v, UnityEngine::Vector3 axis) ;

/// @brief Method ApplyParticlesToTransforms addr 0x11a5174 size 0x25c virtual false final false
 void ApplyParticlesToTransforms() ;

static GlobalNamespace::DynamicBone New_ctor() ;

/// @brief Method .ctor addr 0x11a5d64 size 0x150 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DynamicBone__FreezeAxis, "", "DynamicBone/FreezeAxis");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DynamicBone__UpdateMode, "", "DynamicBone/UpdateMode");
NEED_NO_BOX(GlobalNamespace::DynamicBone);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone, "", "DynamicBone");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DynamicBone__Particle);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DynamicBone__Particle, "", "DynamicBone/Particle");
