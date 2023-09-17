#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState;
}
// Type: ::ThumbstickDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8472))
// CS Name: OVRGLTFAnimatinonNode::ThumbstickDirection
struct CORDL_TYPE ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection(____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection(____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection&&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped : int32_t {
__None = 0,
__North = 1,
__NorthEast = 2,
__East = 3,
__SouthEast = 4,
__South = 5,
__SouthWest = 6,
__West = 7,
__NorthWest = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const None;

/// @brief Field North offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const North;

/// @brief Field NorthEast offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const NorthEast;

/// @brief Field East offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const East;

/// @brief Field SouthEast offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const SouthEast;

/// @brief Field South offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const South;

/// @brief Field SouthWest offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const SouthWest;

/// @brief Field West offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const West;

/// @brief Field NorthWest offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection const NorthWest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRGLTFTransformType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8473))
// CS Name: OVRGLTFAnimatinonNode::OVRGLTFTransformType
struct CORDL_TYPE ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType&&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped : int32_t {
__None = 0,
__Translation = 1,
__Rotation = 2,
__Scale = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const None;

/// @brief Field Translation offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Translation;

/// @brief Field Rotation offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Rotation;

/// @brief Field Scale offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Scale;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRInterpolationType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8474))
// CS Name: OVRGLTFAnimatinonNode::OVRInterpolationType
struct CORDL_TYPE ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType&&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped : int32_t {
__None = 0,
__LINEAR = 1,
__STEP = 2,
__CUBICSPLINE = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const None;

/// @brief Field LINEAR offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const LINEAR;

/// @brief Field STEP offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const STEP;

/// @brief Field CUBICSPLINE offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType const CUBICSPLINE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InputNodeState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8475))
// CS Name: OVRGLTFAnimatinonNode::InputNodeState
struct CORDL_TYPE ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vecT", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState(bool down, float_t t, ::UnityEngine::Vector2 vecT) noexcept;


                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState(____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState const&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState(____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState&&) = default;
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState& operator=(____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_down, put=__set_down))  down;

constexpr void __set_down(bool value) ;

constexpr bool __get_down() const;

 float_t __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(float_t value) ;

constexpr float_t __get_t() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_vecT, put=__set_vecT))  vecT;

constexpr void __set_vecT(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_vecT() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRGLTFAnimatinonNode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8476))
// CS Name: OVRGLTFAnimatinonNode
class CORDL_TYPE OVRGLTFAnimatinonNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InputNodeState = ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState;

using OVRInterpolationType = ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType;

using OVRGLTFTransformType = ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType;

using ThumbstickDirection = ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~OVRGLTFAnimatinonNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: " const&", def_value: None }]
constexpr OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "&&", def_value: None }]
constexpr OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFAnimatinonNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRGLTFAnimatinonNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGLTFAnimatinonNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGLTFAnimatinonNode& operator=(OVRGLTFAnimatinonNode&& o) noexcept = default;
  constexpr OVRGLTFAnimatinonNode& operator=(OVRGLTFAnimatinonNode const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OVRGLTFInputNode __declspec(property(get=__get_m_intputNodeType, put=__set_m_intputNodeType))  m_intputNodeType;

constexpr void __set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode value) ;

constexpr ::GlobalNamespace::OVRGLTFInputNode __get_m_intputNodeType() const;

 ::OVRSimpleJSON::JSONNode __declspec(property(get=__get_m_jsonData, put=__set_m_jsonData))  m_jsonData;

constexpr void __set_m_jsonData(::OVRSimpleJSON::JSONNode value) ;

constexpr ::OVRSimpleJSON::JSONNode __get_m_jsonData() const;

 ::GlobalNamespace::OVRBinaryChunk __declspec(property(get=__get_m_binaryChunk, put=__set_m_binaryChunk))  m_binaryChunk;

constexpr void __set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value) ;

constexpr ::GlobalNamespace::OVRBinaryChunk __get_m_binaryChunk() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_gameObj, put=__set_m_gameObj))  m_gameObj;

constexpr void __set_m_gameObj(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_gameObj() const;

 ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState __declspec(property(get=__get_m_inputNodeState, put=__set_m_inputNodeState))  m_inputNodeState;

constexpr void __set_m_inputNodeState(::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState __get_m_inputNodeState() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __declspec(property(get=__get_m_translations, put=__set_m_translations))  m_translations;

constexpr void __set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __get_m_translations() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Quaternion> __declspec(property(get=__get_m_rotations, put=__set_m_rotations))  m_rotations;

constexpr void __set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion> __get_m_rotations() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __declspec(property(get=__get_m_scales, put=__set_m_scales))  m_scales;

constexpr void __set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __get_m_scales() const;

static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t> __declspec(property(get=__get_InputNodeKeyFrames, put=__set_InputNodeKeyFrames))  InputNodeKeyFrames;

static void __set_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t> value) ;

static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t> __get_InputNodeKeyFrames() ;

static ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_ThumbStickKeyFrames, put=__set_ThumbStickKeyFrames))  ThumbStickKeyFrames;

static void __set_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t> value) ;

static ::System::Collections::Generic::List_1<int32_t> __get_ThumbStickKeyFrames() ;

static ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get_CardDirections, put=__set_CardDirections))  CardDirections;

static void __set_CardDirections(::ArrayW<::UnityEngine::Vector2> value) ;

static ::ArrayW<::UnityEngine::Vector2> __get_CardDirections() ;


// Methods

// Ctor Parameters [CppParam { name: "jsonData", ty: "::OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }, CppParam { name: "binaryChunk", ty: "::GlobalNamespace::OVRBinaryChunk", modifiers: "", def_value: None }, CppParam { name: "inputNodeType", ty: "::GlobalNamespace::OVRGLTFInputNode", modifiers: "", def_value: None }, CppParam { name: "gameObj", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }]
explicit OVRGLTFAnimatinonNode(::OVRSimpleJSON::JSONNode jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk, ::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject gameObj) ;

/// @brief Method .ctor addr 0x25b2a84 size 0x2d4 virtual false final false
 void _ctor(::OVRSimpleJSON::JSONNode jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk, ::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject gameObj) ;

/// @brief Method AddChannel addr 0x25b2d60 size 0x154 virtual false final false
 void AddChannel(::OVRSimpleJSON::JSONNode channel, ::OVRSimpleJSON::JSONNode samplers) ;

/// @brief Method UpdatePose addr 0x25b3588 size 0x18c virtual false final false
 void UpdatePose(bool down) ;

/// @brief Method UpdatePose addr 0x25b3714 size 0x2e4 virtual false final false
 void UpdatePose(float_t t) ;

/// @brief Method UpdatePose addr 0x25b39f8 size 0x320 virtual false final false
 void UpdatePose(::UnityEngine::Vector2 joystick) ;

/// @brief Method GetCardinalThumbsticks addr 0x25b3d18 size 0x1bc virtual false final false
 ::System::Tuple_2<::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection> GetCardinalThumbsticks(::UnityEngine::Vector2 joystick) ;

/// @brief Method GetCardinalWeights addr 0x25b3ed4 size 0x158 virtual false final false
 ::UnityEngine::Vector2 GetCardinalWeights(::UnityEngine::Vector2 joystick, ::System::Tuple_2<::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection> cardinals) ;

/// @brief Method ProcessAnimationSampler addr 0x25b2fd0 size 0x5b8 virtual false final false
 void ProcessAnimationSampler(::OVRSimpleJSON::JSONNode samplerNode, int32_t nodeId, ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType transformType) ;

/// @brief Method GetTransformType addr 0x25b2eb4 size 0x11c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType GetTransformType(::StringW transform) ;

/// @brief Method ToOVRInterpolationType addr 0x25b402c size 0x154 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType ToOVRInterpolationType(::StringW interpolationType) ;

/// @brief Method CopyData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CopyData(::System::Collections::Generic::List_1<T> dest, ::ArrayW<T> src) ;

/// @brief Method CloneVector3 addr 0x25b2d58 size 0x4 virtual false final false
 ::UnityEngine::Vector3 CloneVector3(::UnityEngine::Vector3 v) ;

/// @brief Method CloneQuaternion addr 0x25b2d5c size 0x4 virtual false final false
 ::UnityEngine::Quaternion CloneQuaternion(::UnityEngine::Quaternion q) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRGLTFTransformType, "", "OVRGLTFAnimatinonNode/OVRGLTFTransformType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__OVRInterpolationType, "", "OVRGLTFAnimatinonNode/OVRInterpolationType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__ThumbstickDirection, "", "OVRGLTFAnimatinonNode/ThumbstickDirection");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimatinonNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode, "", "OVRGLTFAnimatinonNode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRGLTFAnimatinonNode__InputNodeState, "", "OVRGLTFAnimatinonNode/InputNodeState");
