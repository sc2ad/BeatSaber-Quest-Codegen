#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::IO {
class BinaryReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
class IConstructorStringGenerator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class VRController;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__State____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__SavedData;
}
namespace UnityEngine {
class Camera;
}
namespace System::IO {
class Stream;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__Keyframe;
}
namespace GlobalNamespace {
struct GlobalNamespace__VRControllersRecorder__Mode;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace UnityEngine {
class AnimationClip;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__TypeSerializationBinder;
}
namespace UnityEngine {
class TextAsset;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__State;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__VRControllersRecorder__Mode;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__Keyframe;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__SavedData;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__State;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__State____c;
}
namespace GlobalNamespace {
class GlobalNamespace__VRControllersRecorder__TypeSerializationBinder;
}
namespace GlobalNamespace {
class VRControllersRecorder;
}
// Type: ::TypeSerializationBinder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5927))
// CS Name: VRControllersRecorder::TypeSerializationBinder
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__TypeSerializationBinder : public System::Runtime::Serialization::SerializationBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__VRControllersRecorder__TypeSerializationBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__TypeSerializationBinder", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder(GlobalNamespace__VRControllersRecorder__TypeSerializationBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__TypeSerializationBinder", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder(GlobalNamespace__VRControllersRecorder__TypeSerializationBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__TypeSerializationBinder(void* ptr) noexcept : System::Runtime::Serialization::SerializationBinder(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder& operator=(GlobalNamespace__VRControllersRecorder__TypeSerializationBinder&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__TypeSerializationBinder& operator=(GlobalNamespace__VRControllersRecorder__TypeSerializationBinder const& o) noexcept = default;
                


// Methods

/// @brief Method BindToType addr 0x2197800 size 0x84 virtual true final false
 System::Type BindToType(::StringW assemblyName, ::StringW typeName) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__TypeSerializationBinder New_ctor() ;

/// @brief Method .ctor addr 0x2196b60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KeyframeSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5928))
// CS Name: VRControllersRecorder::SavedData::KeyframeSerializable
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable(GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable(GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable& operator=(GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable& operator=(GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__xPos1, put=__set__xPos1))  _xPos1;

constexpr void __set__xPos1(float_t value) ;

constexpr float_t __get__xPos1() const;

 float_t __declspec(property(get=__get__yPos1, put=__set__yPos1))  _yPos1;

constexpr void __set__yPos1(float_t value) ;

constexpr float_t __get__yPos1() const;

 float_t __declspec(property(get=__get__zPos1, put=__set__zPos1))  _zPos1;

constexpr void __set__zPos1(float_t value) ;

constexpr float_t __get__zPos1() const;

 float_t __declspec(property(get=__get__xPos2, put=__set__xPos2))  _xPos2;

constexpr void __set__xPos2(float_t value) ;

constexpr float_t __get__xPos2() const;

 float_t __declspec(property(get=__get__yPos2, put=__set__yPos2))  _yPos2;

constexpr void __set__yPos2(float_t value) ;

constexpr float_t __get__yPos2() const;

 float_t __declspec(property(get=__get__zPos2, put=__set__zPos2))  _zPos2;

constexpr void __set__zPos2(float_t value) ;

constexpr float_t __get__zPos2() const;

 float_t __declspec(property(get=__get__xPos3, put=__set__xPos3))  _xPos3;

constexpr void __set__xPos3(float_t value) ;

constexpr float_t __get__xPos3() const;

 float_t __declspec(property(get=__get__yPos3, put=__set__yPos3))  _yPos3;

constexpr void __set__yPos3(float_t value) ;

constexpr float_t __get__yPos3() const;

 float_t __declspec(property(get=__get__zPos3, put=__set__zPos3))  _zPos3;

constexpr void __set__zPos3(float_t value) ;

constexpr float_t __get__zPos3() const;

 float_t __declspec(property(get=__get__xRot1, put=__set__xRot1))  _xRot1;

constexpr void __set__xRot1(float_t value) ;

constexpr float_t __get__xRot1() const;

 float_t __declspec(property(get=__get__yRot1, put=__set__yRot1))  _yRot1;

constexpr void __set__yRot1(float_t value) ;

constexpr float_t __get__yRot1() const;

 float_t __declspec(property(get=__get__zRot1, put=__set__zRot1))  _zRot1;

constexpr void __set__zRot1(float_t value) ;

constexpr float_t __get__zRot1() const;

 float_t __declspec(property(get=__get__wRot1, put=__set__wRot1))  _wRot1;

constexpr void __set__wRot1(float_t value) ;

constexpr float_t __get__wRot1() const;

 float_t __declspec(property(get=__get__xRot2, put=__set__xRot2))  _xRot2;

constexpr void __set__xRot2(float_t value) ;

constexpr float_t __get__xRot2() const;

 float_t __declspec(property(get=__get__yRot2, put=__set__yRot2))  _yRot2;

constexpr void __set__yRot2(float_t value) ;

constexpr float_t __get__yRot2() const;

 float_t __declspec(property(get=__get__zRot2, put=__set__zRot2))  _zRot2;

constexpr void __set__zRot2(float_t value) ;

constexpr float_t __get__zRot2() const;

 float_t __declspec(property(get=__get__wRot2, put=__set__wRot2))  _wRot2;

constexpr void __set__wRot2(float_t value) ;

constexpr float_t __get__wRot2() const;

 float_t __declspec(property(get=__get__xRot3, put=__set__xRot3))  _xRot3;

constexpr void __set__xRot3(float_t value) ;

constexpr float_t __get__xRot3() const;

 float_t __declspec(property(get=__get__yRot3, put=__set__yRot3))  _yRot3;

constexpr void __set__yRot3(float_t value) ;

constexpr float_t __get__yRot3() const;

 float_t __declspec(property(get=__get__zRot3, put=__set__zRot3))  _zRot3;

constexpr void __set__zRot3(float_t value) ;

constexpr float_t __get__zRot3() const;

 float_t __declspec(property(get=__get__wRot3, put=__set__wRot3))  _wRot3;

constexpr void __set__wRot3(float_t value) ;

constexpr float_t __get__wRot3() const;

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;


// Methods

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable New_ctor() ;

/// @brief Method .ctor addr 0x2197884 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SavedData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5929))
// CS Name: VRControllersRecorder::SavedData
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__SavedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using KeyframeSerializable = GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__VRControllersRecorder__SavedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__SavedData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__SavedData(GlobalNamespace__VRControllersRecorder__SavedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__SavedData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__SavedData(GlobalNamespace__VRControllersRecorder__SavedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__SavedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__SavedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__SavedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__SavedData& operator=(GlobalNamespace__VRControllersRecorder__SavedData&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__SavedData& operator=(GlobalNamespace__VRControllersRecorder__SavedData const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable> __declspec(property(get=__get__keyframes, put=__set__keyframes))  _keyframes;

constexpr void __set__keyframes(::ArrayW<GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable> __get__keyframes() const;


// Methods

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData New_ctor() ;

/// @brief Method .ctor addr 0x2196018 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Mode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5930))
// CS Name: VRControllersRecorder::Mode
struct CORDL_TYPE GlobalNamespace__VRControllersRecorder__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__Mode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__VRControllersRecorder__Mode(GlobalNamespace__VRControllersRecorder__Mode const&) = default;
                    constexpr GlobalNamespace__VRControllersRecorder__Mode(GlobalNamespace__VRControllersRecorder__Mode&&) = default;
                    constexpr GlobalNamespace__VRControllersRecorder__Mode& operator=(GlobalNamespace__VRControllersRecorder__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__VRControllersRecorder__Mode& operator=(GlobalNamespace__VRControllersRecorder__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__VRControllersRecorder__Mode_Unwrapped : int32_t {
__Record = 0,
__Playback = 1,
__Off = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__VRControllersRecorder__Mode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__VRControllersRecorder__Mode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Record offset 0
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode const Record;

/// @brief Field Playback offset 0
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode const Playback;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode const Off;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Keyframe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5931))
// CS Name: VRControllersRecorder::Keyframe
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__Keyframe : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe>
constexpr operator  System::IEquatable_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IConstructorStringGenerator
constexpr operator  GlobalNamespace::IConstructorStringGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~GlobalNamespace__VRControllersRecorder__Keyframe() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__Keyframe", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__Keyframe(GlobalNamespace__VRControllersRecorder__Keyframe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__Keyframe", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__Keyframe(GlobalNamespace__VRControllersRecorder__Keyframe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__Keyframe(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__Keyframe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__Keyframe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__Keyframe& operator=(GlobalNamespace__VRControllersRecorder__Keyframe&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__Keyframe& operator=(GlobalNamespace__VRControllersRecorder__Keyframe const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_pos1, put=__set_pos1))  pos1;

constexpr void __set_pos1(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pos1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pos2, put=__set_pos2))  pos2;

constexpr void __set_pos2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pos2() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pos3, put=__set_pos3))  pos3;

constexpr void __set_pos3(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pos3() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rot1, put=__set_rot1))  rot1;

constexpr void __set_rot1(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rot1() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rot2, put=__set_rot2))  rot2;

constexpr void __set_rot2(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rot2() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rot3, put=__set_rot3))  rot3;

constexpr void __set_rot3(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rot3() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Properties

 UnityEngine::Pose __declspec(property(get=get_leftControllerPose))  leftControllerPose;

 UnityEngine::Pose __declspec(property(get=get_rightControllerPose))  rightControllerPose;

 UnityEngine::Pose __declspec(property(get=get_headPose))  headPose;


// Methods

/// @brief Method get_leftControllerPose addr 0x219788c size 0x28 virtual false final false
 UnityEngine::Pose get_leftControllerPose() ;

/// @brief Method get_rightControllerPose addr 0x21978b4 size 0x28 virtual false final false
 UnityEngine::Pose get_rightControllerPose() ;

/// @brief Method get_headPose addr 0x21978dc size 0x28 virtual false final false
 UnityEngine::Pose get_headPose() ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe New_ctor(UnityEngine::Pose leftController, UnityEngine::Pose rightController, UnityEngine::Pose head, float_t time) ;

/// @brief Method .ctor addr 0x2195ba8 size 0x70 virtual false final false
 void _ctor(UnityEngine::Pose leftController, UnityEngine::Pose rightController, UnityEngine::Pose head, float_t time) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe New_ctor(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, UnityEngine::Vector3 pos3, UnityEngine::Quaternion rot1, UnityEngine::Quaternion rot2, UnityEngine::Quaternion rot3, float_t time) ;

/// @brief Method .ctor addr 0x2197904 size 0xb4 virtual false final false
 void _ctor(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, UnityEngine::Vector3 pos3, UnityEngine::Quaternion rot1, UnityEngine::Quaternion rot2, UnityEngine::Quaternion rot3, float_t time) ;

/// @brief Method ToSerializable addr 0x2196020 size 0x98 virtual false final false
 GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable ToSerializable() ;

/// @brief Method FromSerializable addr 0x21979b8 size 0x164 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe FromSerializable(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable ks) ;

/// @brief Method WriteTo addr 0x2197b1c size 0xb0 virtual false final false
 void WriteTo(System::IO::BinaryWriter writer) ;

/// @brief Method ReadFrom addr 0x2197bcc size 0x184 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe ReadFrom(System::IO::BinaryReader reader) ;

/// @brief Method ToConstructorString addr 0x2197d50 size 0x1e0 virtual true final true
 ::StringW ToConstructorString() ;

/// @brief Method Equals addr 0x2197f30 size 0x1e0 virtual true final true
 bool Equals(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe other) ;

/// @brief Method Equals addr 0x2198110 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x21981ac size 0x11c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5932))
// CS Name: VRControllersRecorder::State::<>c
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__State____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__VRControllersRecorder__State____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__State____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__State____c(GlobalNamespace__VRControllersRecorder__State____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__State____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__State____c(GlobalNamespace__VRControllersRecorder__State____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__State____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__State____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__State____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__State____c& operator=(GlobalNamespace__VRControllersRecorder__State____c&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__State____c& operator=(GlobalNamespace__VRControllersRecorder__State____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c value) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c __get___9() ;

static System::Action_2<System::IO::BinaryWriter,GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Action_2<System::IO::BinaryWriter,GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> value) ;

static System::Action_2<System::IO::BinaryWriter,GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> __get___9__16_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c New_ctor() ;

/// @brief Method .ctor addr 0x2198658 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <WriteTo>b__16_0 addr 0x2198660 size 0x14 virtual false final false
 void _WriteTo_b__16_0(System::IO::BinaryWriter binaryWriter, GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe keyframe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::State
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5933))
// CS Name: VRControllersRecorder::State
class CORDL_TYPE GlobalNamespace__VRControllersRecorder__State : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__VRControllersRecorder__State() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__State", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__State(GlobalNamespace__VRControllersRecorder__State const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRControllersRecorder__State", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRControllersRecorder__State(GlobalNamespace__VRControllersRecorder__State&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRControllersRecorder__State(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRControllersRecorder__State& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__State& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRControllersRecorder__State& operator=(GlobalNamespace__VRControllersRecorder__State&& o) noexcept = default;
  constexpr GlobalNamespace__VRControllersRecorder__State& operator=(GlobalNamespace__VRControllersRecorder__State const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> __declspec(property(get=__get__keyframes, put=__set__keyframes))  _keyframes;

constexpr void __set__keyframes(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> __get__keyframes() const;

 UnityEngine::Pose __declspec(property(get=__get__leftControllerOffset, put=__set__leftControllerOffset))  _leftControllerOffset;

constexpr void __set__leftControllerOffset(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__leftControllerOffset() const;

 UnityEngine::Pose __declspec(property(get=__get__rightControllerOffset, put=__set__rightControllerOffset))  _rightControllerOffset;

constexpr void __set__rightControllerOffset(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__rightControllerOffset() const;

 uint32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(uint32_t value) ;

constexpr uint32_t __get__version() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> __declspec(property(get=get_keyframes))  keyframes;

 UnityEngine::Pose __declspec(property(get=get_leftControllerOffset))  leftControllerOffset;

 UnityEngine::Pose __declspec(property(get=get_rightControllerOffset))  rightControllerOffset;

 uint32_t __declspec(property(get=get_version))  version;


// Methods

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State New_ctor(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

/// @brief Method .ctor addr 0x21982c8 size 0xf0 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State New_ctor(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

/// @brief Method .ctor addr 0x2198424 size 0x78 virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State New_ctor(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset, uint32_t version) ;

/// @brief Method .ctor addr 0x21983b8 size 0x6c virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset, uint32_t version) ;

static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State New_ctor(GlobalNamespace::VRController leftController, GlobalNamespace::VRController rightController) ;

/// @brief Method .ctor addr 0x219498c size 0x108 virtual false final false
 void _ctor(GlobalNamespace::VRController leftController, GlobalNamespace::VRController rightController) ;

/// @brief Method get_keyframes addr 0x219849c size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> get_keyframes() ;

/// @brief Method get_leftControllerOffset addr 0x21984a4 size 0x14 virtual false final false
 UnityEngine::Pose get_leftControllerOffset() ;

/// @brief Method get_rightControllerOffset addr 0x21984b8 size 0x14 virtual false final false
 UnityEngine::Pose get_rightControllerOffset() ;

/// @brief Method get_version addr 0x21984cc size 0x8 virtual false final false
 uint32_t get_version() ;

/// @brief Method WriteTo addr 0x21960f8 size 0x158 virtual false final false
 void WriteTo(System::IO::BinaryWriter writer) ;

/// @brief Method ReadFrom addr 0x2196988 size 0x14c virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State ReadFrom(System::IO::BinaryReader reader) ;

/// @brief Method FromSavedData addr 0x21967c0 size 0x1c8 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State FromSavedData(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData data, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

/// @brief Method Upgrade addr 0x21984d4 size 0x120 virtual false final false
 GlobalNamespace::GlobalNamespace__VRControllersRecorder__State Upgrade(UnityEngine::Pose newLeftControllerOffset, UnityEngine::Pose newRightControllerOffset) ;

/// @brief Method AddKeyframe addr 0x2195c18 size 0xa8 virtual false final false
 void AddKeyframe(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe keyframe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VRControllersRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5934))
// CS Name: VRControllersRecorder
class CORDL_TYPE VRControllersRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__VRControllersRecorder__State;

using Keyframe = GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe;

using Mode = GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode;

using SavedData = GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData;

using TypeSerializationBinder = GlobalNamespace::GlobalNamespace__VRControllersRecorder__TypeSerializationBinder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~VRControllersRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: " const&", def_value: None }]
constexpr VRControllersRecorder(VRControllersRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: "&&", def_value: None }]
constexpr VRControllersRecorder(VRControllersRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRControllersRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRControllersRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRControllersRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRControllersRecorder& operator=(VRControllersRecorder&& o) noexcept = default;
  constexpr VRControllersRecorder& operator=(VRControllersRecorder const& o) noexcept = default;
                


// Fields

 UnityEngine::TextAsset __declspec(property(get=__get__recordingTextAsset, put=__set__recordingTextAsset))  _recordingTextAsset;

constexpr void __set__recordingTextAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get__recordingTextAsset() const;

 ::StringW __declspec(property(get=__get__recordingFileName, put=__set__recordingFileName))  _recordingFileName;

constexpr void __set__recordingFileName(::StringW value) ;

constexpr ::StringW __get__recordingFileName() const;

 GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode value) ;

constexpr GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode __get__mode() const;

 bool __declspec(property(get=__get__dontMoveHead, put=__set__dontMoveHead))  _dontMoveHead;

constexpr void __set__dontMoveHead(bool value) ;

constexpr bool __get__dontMoveHead() const;

 bool __declspec(property(get=__get__changeToNonVRCamera, put=__set__changeToNonVRCamera))  _changeToNonVRCamera;

constexpr void __set__changeToNonVRCamera(bool value) ;

constexpr bool __get__changeToNonVRCamera() const;

 bool __declspec(property(get=__get__adjustSabersPositionBasedOnHeadPosition, put=__set__adjustSabersPositionBasedOnHeadPosition))  _adjustSabersPositionBasedOnHeadPosition;

constexpr void __set__adjustSabersPositionBasedOnHeadPosition(bool value) ;

constexpr bool __get__adjustSabersPositionBasedOnHeadPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headRotationOffset, put=__set__headRotationOffset))  _headRotationOffset;

constexpr void __set__headRotationOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headRotationOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headPositionOffset, put=__set__headPositionOffset))  _headPositionOffset;

constexpr void __set__headPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headPositionOffset() const;

 float_t __declspec(property(get=__get__headSmooth, put=__set__headSmooth))  _headSmooth;

constexpr void __set__headSmooth(float_t value) ;

constexpr float_t __get__headSmooth() const;

 float_t __declspec(property(get=__get__cameraFOV, put=__set__cameraFOV))  _cameraFOV;

constexpr void __set__cameraFOV(float_t value) ;

constexpr float_t __get__cameraFOV() const;

 float_t __declspec(property(get=__get__controllersTimeOffset, put=__set__controllersTimeOffset))  _controllersTimeOffset;

constexpr void __set__controllersTimeOffset(float_t value) ;

constexpr float_t __get__controllersTimeOffset() const;

 float_t __declspec(property(get=__get__controllersSmooth, put=__set__controllersSmooth))  _controllersSmooth;

constexpr void __set__controllersSmooth(float_t value) ;

constexpr float_t __get__controllersSmooth() const;

 GlobalNamespace::VRController __declspec(property(get=__get__controller0, put=__set__controller0))  _controller0;

constexpr void __set__controller0(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__controller0() const;

 GlobalNamespace::VRController __declspec(property(get=__get__controller1, put=__set__controller1))  _controller1;

constexpr void __set__controller1(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__controller1() const;

 UnityEngine::Transform __declspec(property(get=__get__headTransform, put=__set__headTransform))  _headTransform;

constexpr void __set__headTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headTransform() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 UnityEngine::Camera __declspec(property(get=__get__recorderCamera, put=__set__recorderCamera))  _recorderCamera;

constexpr void __set__recorderCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__recorderCamera() const;

 UnityEngine::Transform __declspec(property(get=__get__spawnRotationTransform, put=__set__spawnRotationTransform))  _spawnRotationTransform;

constexpr void __set__spawnRotationTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__spawnRotationTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__originTransform, put=__set__originTransform))  _originTransform;

constexpr void __set__originTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originTransform() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 UnityEngine::Transform __declspec(property(get=__get__controller0Transform, put=__set__controller0Transform))  _controller0Transform;

constexpr void __set__controller0Transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__controller0Transform() const;

 UnityEngine::Transform __declspec(property(get=__get__controller1Transform, put=__set__controller1Transform))  _controller1Transform;

constexpr void __set__controller1Transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__controller1Transform() const;

 bool __declspec(property(get=__get__hasHead, put=__set__hasHead))  _hasHead;

constexpr void __set__hasHead(bool value) ;

constexpr bool __get__hasHead() const;

 bool __declspec(property(get=__get__hasController0, put=__set__hasController0))  _hasController0;

constexpr void __set__hasController0(bool value) ;

constexpr bool __get__hasController0() const;

 bool __declspec(property(get=__get__hasController1, put=__set__hasController1))  _hasController1;

constexpr void __set__hasController1(bool value) ;

constexpr bool __get__hasController1() const;

/// @brief Field kSavedDataRecorderVersion offset 0
static constexpr uint32_t  kSavedDataRecorderVersion{0u};

/// @brief Field kSavedDataWithOffsetRecorderVersion offset 0
static constexpr uint32_t  kSavedDataWithOffsetRecorderVersion{1u};

/// @brief Field kRecorderVersion offset 0
static constexpr uint32_t  kRecorderVersion{1u};

/// @brief Field kHeaderChar offset 0
static constexpr char16_t  kHeaderChar{v};

 GlobalNamespace::GlobalNamespace__VRControllersRecorder__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State value) ;

constexpr GlobalNamespace::GlobalNamespace__VRControllersRecorder__State __get__state() const;

 int32_t __declspec(property(get=__get__keyframeIndex, put=__set__keyframeIndex))  _keyframeIndex;

constexpr void __set__keyframeIndex(int32_t value) ;

constexpr int32_t __get__keyframeIndex() const;


// Properties

 GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode __declspec(property(get=get_mode, put=set_mode))  mode;

 UnityEngine::TextAsset __declspec(property(get=get_recordingTextAsset, put=set_recordingTextAsset))  recordingTextAsset;

 ::StringW __declspec(property(get=get_recordingFileName, put=set_recordingFileName))  recordingFileName;

 bool __declspec(property(get=get_changeToNonVRCamera, put=set_changeToNonVRCamera))  changeToNonVRCamera;

 ::StringW __declspec(property(get=get_path))  path;


// Methods

/// @brief Method set_mode addr 0x2193c00 size 0x8 virtual false final false
 void set_mode(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode value) ;

/// @brief Method get_mode addr 0x2193c08 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode get_mode() ;

/// @brief Method set_recordingTextAsset addr 0x2193c10 size 0x8 virtual false final false
 void set_recordingTextAsset(UnityEngine::TextAsset value) ;

/// @brief Method get_recordingTextAsset addr 0x2193c18 size 0x8 virtual false final false
 UnityEngine::TextAsset get_recordingTextAsset() ;

/// @brief Method set_recordingFileName addr 0x2193c20 size 0x8 virtual false final false
 void set_recordingFileName(::StringW value) ;

/// @brief Method get_recordingFileName addr 0x2193c28 size 0x8 virtual false final false
 ::StringW get_recordingFileName() ;

/// @brief Method set_changeToNonVRCamera addr 0x2193c30 size 0xc virtual false final false
 void set_changeToNonVRCamera(bool value) ;

/// @brief Method get_changeToNonVRCamera addr 0x2193c3c size 0x8 virtual false final false
 bool get_changeToNonVRCamera() ;

/// @brief Method Start addr 0x2193c44 size 0x598 virtual false final false
 void Start() ;

/// @brief Method CheckNodes addr 0x21941dc size 0x258 virtual false final false
 void CheckNodes() ;

/// @brief Method OnDestroy addr 0x2194a94 size 0x10 virtual false final false
 void OnDestroy() ;

/// @brief Method SetDefaultSettings addr 0x2194e4c size 0x84 virtual false final false
 void SetDefaultSettings() ;

/// @brief Method SetInGamePlaybackDefaultSettings addr 0x2194ed0 size 0x84 virtual false final false
 void SetInGamePlaybackDefaultSettings() ;

/// @brief Method PlaybackTick addr 0x2194f54 size 0x7c8 virtual false final false
 void PlaybackTick() ;

/// @brief Method SetPositionAndRotation addr 0x219571c size 0x104 virtual false final false
 void SetPositionAndRotation(UnityEngine::Transform transf, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion targetRot, float_t t) ;

/// @brief Method RecordTick addr 0x2195820 size 0x388 virtual false final false
 void RecordTick() ;

/// @brief Method Update addr 0x2195cc0 size 0xe4 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x2195da4 size 0x10 virtual false final false
 void LateUpdate() ;

/// @brief Method Save addr 0x2194aa4 size 0x3a8 virtual false final false
 void Save() ;

/// @brief Method GetSavedData addr 0x2195de4 size 0x234 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData GetSavedData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe> keyframes) ;

/// @brief Method WriteTo addr 0x2195db4 size 0x30 virtual false final false
static void WriteTo(System::IO::BinaryWriter writer, GlobalNamespace::GlobalNamespace__VRControllersRecorder__State state) ;

/// @brief Method WriteHeader addr 0x21960b8 size 0x40 virtual false final false
static void WriteHeader(System::IO::BinaryWriter writer) ;

/// @brief Method ReadHeader addr 0x2196250 size 0x4c virtual false final false
static uint32_t ReadHeader(System::IO::BinaryReader reader) ;

/// @brief Method Load addr 0x2194434 size 0x558 virtual false final false
 bool Load() ;

/// @brief Method get_path addr 0x219632c size 0xb4 virtual false final false
 ::StringW get_path() ;

/// @brief Method LoadState addr 0x219629c size 0x90 virtual false final false
 GlobalNamespace::GlobalNamespace__VRControllersRecorder__State LoadState(System::IO::Stream stream) ;

/// @brief Method LoadStateWithDefaultOffset addr 0x2196690 size 0xa0 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State LoadStateWithDefaultOffset(System::IO::Stream stream) ;

/// @brief Method LoadState addr 0x21963e0 size 0x2b0 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__State LoadState(System::IO::Stream stream, UnityEngine::Pose leftControllerOffset, UnityEngine::Pose rightControllerOffset) ;

/// @brief Method GetBinaryFormatter addr 0x2196ad4 size 0x8c virtual false final false
static System::Runtime::Serialization::Formatters::Binary::BinaryFormatter GetBinaryFormatter() ;

/// @brief Method LoadSavedData addr 0x2196730 size 0x90 virtual false final false
static GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData LoadSavedData(System::IO::Stream dataStream) ;

/// @brief Method SerializeSavedData addr 0x2196b68 size 0x34 virtual false final false
static void SerializeSavedData(System::IO::Stream dataStream, GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData savedData) ;

/// @brief Method CreateAnimationClipFromRecording addr 0x2196b9c size 0xbf8 virtual false final false
static UnityEngine::AnimationClip CreateAnimationClipFromRecording(::StringW recordingfilePath) ;

static GlobalNamespace::VRControllersRecorder New_ctor() ;

/// @brief Method .ctor addr 0x2197794 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Mode, "", "VRControllersRecorder/Mode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__Keyframe, "", "VRControllersRecorder/Keyframe");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData, "", "VRControllersRecorder/SavedData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__SavedData__KeyframeSerializable, "", "VRControllersRecorder/SavedData/KeyframeSerializable");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State, "", "VRControllersRecorder/State");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__State____c, "", "VRControllersRecorder/State/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRControllersRecorder__TypeSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRControllersRecorder__TypeSerializationBinder, "", "VRControllersRecorder/TypeSerializationBinder");
NEED_NO_BOX(GlobalNamespace::VRControllersRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder, "", "VRControllersRecorder");
