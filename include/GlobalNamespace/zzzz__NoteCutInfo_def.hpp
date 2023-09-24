#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__NoteCutInfo__FailReason;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class ISaberMovementData;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NoteCutInfo__FailReason;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Type: ::FailReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15113))
// CS Name: NoteCutInfo::FailReason
struct CORDL_TYPE GlobalNamespace__NoteCutInfo__FailReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NoteCutInfo__FailReason(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NoteCutInfo__FailReason(GlobalNamespace__NoteCutInfo__FailReason const&) = default;
                    constexpr GlobalNamespace__NoteCutInfo__FailReason(GlobalNamespace__NoteCutInfo__FailReason&&) = default;
                    constexpr GlobalNamespace__NoteCutInfo__FailReason& operator=(GlobalNamespace__NoteCutInfo__FailReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NoteCutInfo__FailReason& operator=(GlobalNamespace__NoteCutInfo__FailReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteCutInfo__FailReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NoteCutInfo__FailReason_Unwrapped : int32_t {
__None = 0,
__TooSoon = 1,
__WrongColor = 2,
__CutHarder = 3,
__WrongDirection = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NoteCutInfo__FailReason_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NoteCutInfo__FailReason_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason const None;

/// @brief Field TooSoon offset 0
static GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason const TooSoon;

/// @brief Field WrongColor offset 0
static GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason const WrongColor;

/// @brief Field CutHarder offset 0
static GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason const CutHarder;

/// @brief Field WrongDirection offset 0
static GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason const WrongDirection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15114))
// CS Name: NoteCutInfo
struct CORDL_TYPE NoteCutInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using FailReason = GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason;

// Ctor Parameters [CppParam { name: "noteData", ty: "GlobalNamespace::NoteData", modifiers: "", def_value: None }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wasCutTooSoon", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "saberDir", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "saberType", ty: "GlobalNamespace::SaberType", modifiers: "", def_value: None }, CppParam { name: "timeDeviation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutPoint", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cutNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cutAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "inverseWorldRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "noteRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "notePosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "saberMovementData", ty: "GlobalNamespace::ISaberMovementData", modifiers: "", def_value: None }]
constexpr NoteCutInfo(GlobalNamespace::NoteData noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, UnityEngine::Vector3 saberDir, GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float_t cutAngle, float_t cutDistanceToCenter, UnityEngine::Quaternion worldRotation, UnityEngine::Quaternion inverseWorldRotation, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 notePosition, GlobalNamespace::ISaberMovementData saberMovementData) noexcept;


                    constexpr NoteCutInfo(NoteCutInfo const&) = default;
                    constexpr NoteCutInfo(NoteCutInfo&&) = default;
                    constexpr NoteCutInfo& operator=(NoteCutInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NoteCutInfo& operator=(NoteCutInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NoteCutInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::NoteData __declspec(property(get=__get_noteData, put=__set_noteData))  noteData;

constexpr void __set_noteData(GlobalNamespace::NoteData value) ;

constexpr GlobalNamespace::NoteData __get_noteData() const;

 bool __declspec(property(get=__get_speedOK, put=__set_speedOK))  speedOK;

constexpr void __set_speedOK(bool value) ;

constexpr bool __get_speedOK() const;

 bool __declspec(property(get=__get_directionOK, put=__set_directionOK))  directionOK;

constexpr void __set_directionOK(bool value) ;

constexpr bool __get_directionOK() const;

 bool __declspec(property(get=__get_saberTypeOK, put=__set_saberTypeOK))  saberTypeOK;

constexpr void __set_saberTypeOK(bool value) ;

constexpr bool __get_saberTypeOK() const;

 bool __declspec(property(get=__get_wasCutTooSoon, put=__set_wasCutTooSoon))  wasCutTooSoon;

constexpr void __set_wasCutTooSoon(bool value) ;

constexpr bool __get_wasCutTooSoon() const;

 float_t __declspec(property(get=__get_saberSpeed, put=__set_saberSpeed))  saberSpeed;

constexpr void __set_saberSpeed(float_t value) ;

constexpr float_t __get_saberSpeed() const;

 UnityEngine::Vector3 __declspec(property(get=__get_saberDir, put=__set_saberDir))  saberDir;

constexpr void __set_saberDir(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_saberDir() const;

 GlobalNamespace::SaberType __declspec(property(get=__get_saberType, put=__set_saberType))  saberType;

constexpr void __set_saberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get_saberType() const;

 float_t __declspec(property(get=__get_timeDeviation, put=__set_timeDeviation))  timeDeviation;

constexpr void __set_timeDeviation(float_t value) ;

constexpr float_t __get_timeDeviation() const;

 float_t __declspec(property(get=__get_cutDirDeviation, put=__set_cutDirDeviation))  cutDirDeviation;

constexpr void __set_cutDirDeviation(float_t value) ;

constexpr float_t __get_cutDirDeviation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_cutPoint, put=__set_cutPoint))  cutPoint;

constexpr void __set_cutPoint(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_cutPoint() const;

 UnityEngine::Vector3 __declspec(property(get=__get_cutNormal, put=__set_cutNormal))  cutNormal;

constexpr void __set_cutNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_cutNormal() const;

 float_t __declspec(property(get=__get_cutAngle, put=__set_cutAngle))  cutAngle;

constexpr void __set_cutAngle(float_t value) ;

constexpr float_t __get_cutAngle() const;

 float_t __declspec(property(get=__get_cutDistanceToCenter, put=__set_cutDistanceToCenter))  cutDistanceToCenter;

constexpr void __set_cutDistanceToCenter(float_t value) ;

constexpr float_t __get_cutDistanceToCenter() const;

 UnityEngine::Quaternion __declspec(property(get=__get_worldRotation, put=__set_worldRotation))  worldRotation;

constexpr void __set_worldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_worldRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_inverseWorldRotation, put=__set_inverseWorldRotation))  inverseWorldRotation;

constexpr void __set_inverseWorldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_inverseWorldRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_noteRotation, put=__set_noteRotation))  noteRotation;

constexpr void __set_noteRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_noteRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_notePosition, put=__set_notePosition))  notePosition;

constexpr void __set_notePosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_notePosition() const;

 GlobalNamespace::ISaberMovementData __declspec(property(get=__get_saberMovementData, put=__set_saberMovementData))  saberMovementData;

constexpr void __set_saberMovementData(GlobalNamespace::ISaberMovementData value) ;

constexpr GlobalNamespace::ISaberMovementData __get_saberMovementData() const;


// Properties

 bool __declspec(property(get=get_allIsOK))  allIsOK;

 bool __declspec(property(get=get_allExceptSaberTypeIsOK))  allExceptSaberTypeIsOK;

 GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason __declspec(property(get=get_failReason))  failReason;


// Methods

/// @brief Method get_allIsOK addr 0x1216f58 size 0x30 virtual false final false
 bool get_allIsOK() ;

/// @brief Method get_allExceptSaberTypeIsOK addr 0x1216f88 size 0x28 virtual false final false
 bool get_allExceptSaberTypeIsOK() ;

/// @brief Method get_failReason addr 0x1216fb0 size 0x44 virtual false final false
 GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason get_failReason() ;

/// @brief Method .ctor addr 0x1216ff4 size 0x234 virtual false final false
 void _ctor(GlobalNamespace::NoteData noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, UnityEngine::Vector3 saberDir, GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float_t cutDistanceToCenter, float_t cutAngle, UnityEngine::Quaternion worldRotation, UnityEngine::Quaternion inverseWorldRotation, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 notePosition, GlobalNamespace::ISaberMovementData saberMovementData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteCutInfo__FailReason, "", "NoteCutInfo/FailReason");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfo, "", "NoteCutInfo");
