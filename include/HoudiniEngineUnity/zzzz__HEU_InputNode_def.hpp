#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputNodeType;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputObjectType;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputActions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputActions;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputNodeType;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputObjectType;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
// Type: ::InputNodeType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9582))
// CS Name: HoudiniEngineUnity.HEU_InputNode::InputNodeType
struct CORDL_TYPE HoudiniEngineUnity__HEU_InputNode__InputNodeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputNode__InputNodeType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_InputNode__InputNodeType(HoudiniEngineUnity__HEU_InputNode__InputNodeType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputNodeType(HoudiniEngineUnity__HEU_InputNode__InputNodeType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputNodeType& operator=(HoudiniEngineUnity__HEU_InputNode__InputNodeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputNodeType& operator=(HoudiniEngineUnity__HEU_InputNode__InputNodeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputNode__InputNodeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_InputNode__InputNodeType_Unwrapped : int32_t {
__CONNECTION = 0,
__NODE = 1,
__PARAMETER = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_InputNode__InputNodeType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_InputNode__InputNodeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CONNECTION offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType const CONNECTION;

/// @brief Field NODE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType const NODE;

/// @brief Field PARAMETER offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType const PARAMETER;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::InputObjectType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9583))
// CS Name: HoudiniEngineUnity.HEU_InputNode::InputObjectType
struct CORDL_TYPE HoudiniEngineUnity__HEU_InputNode__InputObjectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputNode__InputObjectType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_InputNode__InputObjectType(HoudiniEngineUnity__HEU_InputNode__InputObjectType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputObjectType(HoudiniEngineUnity__HEU_InputNode__InputObjectType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputObjectType& operator=(HoudiniEngineUnity__HEU_InputNode__InputObjectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputObjectType& operator=(HoudiniEngineUnity__HEU_InputNode__InputObjectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputNode__InputObjectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_InputNode__InputObjectType_Unwrapped : int32_t {
__HDA = 0,
__UNITY_MESH = 1,
__CURVE = 2,
__TERRAIN = 3,
__BOUNDING_BOX = 4,
__TILEMAP = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_InputNode__InputObjectType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_InputNode__InputObjectType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HDA offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const HDA;

/// @brief Field UNITY_MESH offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const UNITY_MESH;

/// @brief Field CURVE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const CURVE;

/// @brief Field TERRAIN offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const TERRAIN;

/// @brief Field BOUNDING_BOX offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const BOUNDING_BOX;

/// @brief Field TILEMAP offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType const TILEMAP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::InternalObjectType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9584))
// CS Name: HoudiniEngineUnity.HEU_InputNode::InternalObjectType
struct CORDL_TYPE HoudiniEngineUnity__HEU_InputNode__InternalObjectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputNode__InternalObjectType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_InputNode__InternalObjectType(HoudiniEngineUnity__HEU_InputNode__InternalObjectType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InternalObjectType(HoudiniEngineUnity__HEU_InputNode__InternalObjectType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InternalObjectType& operator=(HoudiniEngineUnity__HEU_InputNode__InternalObjectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_InputNode__InternalObjectType& operator=(HoudiniEngineUnity__HEU_InputNode__InternalObjectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputNode__InternalObjectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_InputNode__InternalObjectType_Unwrapped : int32_t {
__UNKNOWN = 0,
__HDA = 1,
__UNITY_MESH = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_InputNode__InternalObjectType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_InputNode__InternalObjectType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UNKNOWN offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType const UNKNOWN;

/// @brief Field HDA offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType const HDA;

/// @brief Field UNITY_MESH offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType const UNITY_MESH;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::InputActions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9585))
// CS Name: HoudiniEngineUnity.HEU_InputNode::InputActions
struct CORDL_TYPE HoudiniEngineUnity__HEU_InputNode__InputActions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputNode__InputActions(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_InputNode__InputActions(HoudiniEngineUnity__HEU_InputNode__InputActions const&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputActions(HoudiniEngineUnity__HEU_InputNode__InputActions&&) = default;
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputActions& operator=(HoudiniEngineUnity__HEU_InputNode__InputActions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_InputNode__InputActions& operator=(HoudiniEngineUnity__HEU_InputNode__InputActions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputNode__InputActions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_InputNode__InputActions_Unwrapped : int32_t {
__ACTION = 0,
__DELETE = 1,
__INSERT = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_InputNode__InputActions_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_InputNode__InputActions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ACTION offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions const ACTION;

/// @brief Field DELETE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions const DELETE;

/// @brief Field INSERT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions const INSERT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputNode
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9586))
// CS Name: HoudiniEngineUnity.HEU_InputNode
class CORDL_TYPE HEU_InputNode : public UnityEngine::ScriptableObject {
public:
// Declarations
using InputActions = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions;

using InternalObjectType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType;

using InputObjectType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType;

using InputNodeType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputNode>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputNode>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~HEU_InputNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: " const&", def_value: None }]
constexpr HEU_InputNode(HEU_InputNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: "&&", def_value: None }]
constexpr HEU_InputNode(HEU_InputNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputNode(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_InputNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputNode& operator=(HEU_InputNode&& o) noexcept = default;
  constexpr HEU_InputNode& operator=(HEU_InputNode const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType __declspec(property(get=__get__inputNodeType, put=__set__inputNodeType))  _inputNodeType;

constexpr void __set__inputNodeType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType __get__inputNodeType() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __declspec(property(get=__get__inputObjectType, put=__set__inputObjectType))  _inputObjectType;

constexpr void __set__inputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __get__inputObjectType() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __declspec(property(get=__get__pendingInputObjectType, put=__set__pendingInputObjectType))  _pendingInputObjectType;

constexpr void __set__pendingInputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __get__pendingInputObjectType() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> __declspec(property(get=__get__inputObjects, put=__set__inputObjects))  _inputObjects;

constexpr void __set__inputObjects(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> __get__inputObjects() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__inputObjectsConnectedAssetIDs, put=__set__inputObjectsConnectedAssetIDs))  _inputObjectsConnectedAssetIDs;

constexpr void __set__inputObjectsConnectedAssetIDs(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get__inputObjectsConnectedAssetIDs() const;

 UnityEngine::GameObject __declspec(property(get=__get__inputAsset, put=__set__inputAsset))  _inputAsset;

constexpr void __set__inputAsset(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__inputAsset() const;

 UnityEngine::GameObject __declspec(property(get=__get__connectedInputAsset, put=__set__connectedInputAsset))  _connectedInputAsset;

constexpr void __set__connectedInputAsset(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__connectedInputAsset() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo> __declspec(property(get=__get__inputAssetInfos, put=__set__inputAssetInfos))  _inputAssetInfos;

constexpr void __set__inputAssetInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo> __get__inputAssetInfos() const;

 int32_t __declspec(property(get=__get__nodeID, put=__set__nodeID))  _nodeID;

constexpr void __set__nodeID(int32_t value) ;

constexpr int32_t __get__nodeID() const;

 int32_t __declspec(property(get=__get__inputIndex, put=__set__inputIndex))  _inputIndex;

constexpr void __set__inputIndex(int32_t value) ;

constexpr int32_t __get__inputIndex() const;

 bool __declspec(property(get=__get__requiresCook, put=__set__requiresCook))  _requiresCook;

constexpr void __set__requiresCook(bool value) ;

constexpr bool __get__requiresCook() const;

 bool __declspec(property(get=__get__requiresUpload, put=__set__requiresUpload))  _requiresUpload;

constexpr void __set__requiresUpload(bool value) ;

constexpr bool __get__requiresUpload() const;

 ::StringW __declspec(property(get=__get__inputName, put=__set__inputName))  _inputName;

constexpr void __set__inputName(::StringW value) ;

constexpr ::StringW __get__inputName() const;

 ::StringW __declspec(property(get=__get__labelName, put=__set__labelName))  _labelName;

constexpr void __set__labelName(::StringW value) ;

constexpr ::StringW __get__labelName() const;

 ::StringW __declspec(property(get=__get__paramName, put=__set__paramName))  _paramName;

constexpr void __set__paramName(::StringW value) ;

constexpr ::StringW __get__paramName() const;

 int32_t __declspec(property(get=__get__connectedNodeID, put=__set__connectedNodeID))  _connectedNodeID;

constexpr void __set__connectedNodeID(int32_t value) ;

constexpr int32_t __get__connectedNodeID() const;

 bool __declspec(property(get=__get__keepWorldTransform, put=__set__keepWorldTransform))  _keepWorldTransform;

constexpr void __set__keepWorldTransform(bool value) ;

constexpr bool __get__keepWorldTransform() const;

 bool __declspec(property(get=__get__packGeometryBeforeMerging, put=__set__packGeometryBeforeMerging))  _packGeometryBeforeMerging;

constexpr void __set__packGeometryBeforeMerging(bool value) ;

constexpr bool __get__packGeometryBeforeMerging() const;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__parentAsset, put=__set__parentAsset))  _parentAsset;

constexpr void __set__parentAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__parentAsset() const;

 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings __declspec(property(get=__get__tilemapSettings, put=__set__tilemapSettings))  _tilemapSettings;

constexpr void __set__tilemapSettings(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings value) ;

constexpr HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings __get__tilemapSettings() const;

 HoudiniEngineUnity::HEU_InputNodeUICache __declspec(property(get=__get__uiCache, put=__set__uiCache))  _uiCache;

constexpr void __set__uiCache(HoudiniEngineUnity::HEU_InputNodeUICache value) ;

constexpr HoudiniEngineUnity::HEU_InputNodeUICache __get__uiCache() const;


// Properties

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType __declspec(property(get=get_InputType))  InputType;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __declspec(property(get=get_ThisInputObjectType))  ThisInputObjectType;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __declspec(property(get=get_PendingInputObjectType, put=set_PendingInputObjectType))  PendingInputObjectType;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> __declspec(property(get=get_InputObjects))  InputObjects;

 int32_t __declspec(property(get=get_InputNodeID))  InputNodeID;

 bool __declspec(property(get=get_RequiresCook, put=set_RequiresCook))  RequiresCook;

 bool __declspec(property(get=get_RequiresUpload, put=set_RequiresUpload))  RequiresUpload;

 ::StringW __declspec(property(get=get_InputName))  InputName;

 ::StringW __declspec(property(get=get_LabelName))  LabelName;

 ::StringW __declspec(property(get=get_ParamName, put=set_ParamName))  ParamName;

 bool __declspec(property(get=get_KeepWorldTransform, put=set_KeepWorldTransform))  KeepWorldTransform;

 bool __declspec(property(get=get_PackGeometryBeforeMerging, put=set_PackGeometryBeforeMerging))  PackGeometryBeforeMerging;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=get_ParentAsset))  ParentAsset;

 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings __declspec(property(get=get_TilemapSettings))  TilemapSettings;


// Methods

/// @brief Method get_InputType addr 0x1ffa090 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType get_InputType() ;

/// @brief Method get_ThisInputObjectType addr 0x1ffa098 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType get_ThisInputObjectType() ;

/// @brief Method get_PendingInputObjectType addr 0x1ffa0a0 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType get_PendingInputObjectType() ;

/// @brief Method set_PendingInputObjectType addr 0x1ffa0a8 size 0x8 virtual false final false
 void set_PendingInputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value) ;

/// @brief Method get_InputObjects addr 0x1ffa0b0 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> get_InputObjects() ;

/// @brief Method get_InputNodeID addr 0x1ffa0b8 size 0x8 virtual false final false
 int32_t get_InputNodeID() ;

/// @brief Method get_RequiresCook addr 0x1ffa0c0 size 0x8 virtual false final false
 bool get_RequiresCook() ;

/// @brief Method set_RequiresCook addr 0x1ffa0c8 size 0xc virtual false final false
 void set_RequiresCook(bool value) ;

/// @brief Method get_RequiresUpload addr 0x1ffa0d4 size 0x8 virtual false final false
 bool get_RequiresUpload() ;

/// @brief Method set_RequiresUpload addr 0x1ffa0dc size 0xc virtual false final false
 void set_RequiresUpload(bool value) ;

/// @brief Method get_InputName addr 0x1ffa0e8 size 0x8 virtual false final false
 ::StringW get_InputName() ;

/// @brief Method get_LabelName addr 0x1ffa0f0 size 0x8 virtual false final false
 ::StringW get_LabelName() ;

/// @brief Method get_ParamName addr 0x1ffa0f8 size 0x8 virtual false final false
 ::StringW get_ParamName() ;

/// @brief Method set_ParamName addr 0x1ffa100 size 0x8 virtual false final false
 void set_ParamName(::StringW value) ;

/// @brief Method get_KeepWorldTransform addr 0x1ffa108 size 0x8 virtual false final false
 bool get_KeepWorldTransform() ;

/// @brief Method set_KeepWorldTransform addr 0x1ffa110 size 0xc virtual false final false
 void set_KeepWorldTransform(bool value) ;

/// @brief Method get_PackGeometryBeforeMerging addr 0x1ffa11c size 0x8 virtual false final false
 bool get_PackGeometryBeforeMerging() ;

/// @brief Method set_PackGeometryBeforeMerging addr 0x1ffa124 size 0xc virtual false final false
 void set_PackGeometryBeforeMerging(bool value) ;

/// @brief Method get_ParentAsset addr 0x1ffa130 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset get_ParentAsset() ;

/// @brief Method IsAssetInput addr 0x1ffa138 size 0x10 virtual false final false
 bool IsAssetInput() ;

/// @brief Method get_TilemapSettings addr 0x1ffa148 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings get_TilemapSettings() ;

/// @brief Method CreateSetupInput addr 0x1ffa150 size 0x90 virtual false final false
static HoudiniEngineUnity::HEU_InputNode CreateSetupInput(int32_t nodeID, int32_t inputIndex, ::StringW inputName, ::StringW labelName, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType inputNodeType, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method SetInputNodeID addr 0x1ffa1e0 size 0x8 virtual false final false
 void SetInputNodeID(int32_t nodeID) ;

/// @brief Method DestroyAllData addr 0x1ffa1e8 size 0x1c virtual false final false
 void DestroyAllData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ResetInputObjectTransforms addr 0x1ffa4e4 size 0xec virtual false final false
 void ResetInputObjectTransforms() ;

/// @brief Method ResetInputNode addr 0x1ffa5d0 size 0x4c virtual false final false
 void ResetInputNode(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method InsertInputEntry addr 0x1ffa69c size 0x258 virtual false final false
 void InsertInputEntry(int32_t index, UnityEngine::GameObject newInputGameObject) ;

/// @brief Method GetInputEntryGameObject addr 0x1ffa9ec size 0x23c virtual false final false
 UnityEngine::GameObject GetInputEntryGameObject(int32_t index) ;

/// @brief Method AddInputEntryAtEnd addr 0x1ffac28 size 0x8c virtual false final false
 void AddInputEntryAtEnd(UnityEngine::GameObject newEntryGameObject) ;

/// @brief Method AddInputEntryAtEndMesh addr 0x1ffae24 size 0x2c virtual false final false
 HoudiniEngineUnity::HEU_InputObjectInfo AddInputEntryAtEndMesh(UnityEngine::GameObject newEntryGameObject) ;

/// @brief Method RemoveAllInputEntries addr 0x1ffa43c size 0xa8 virtual false final false
 void RemoveAllInputEntries() ;

/// @brief Method NumInputEntries addr 0x1ffae50 size 0x84 virtual false final false
 int32_t NumInputEntries() ;

/// @brief Method ChangeInputType addr 0x1ffa66c size 0x30 virtual false final false
 void ChangeInputType(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType newType) ;

/// @brief Method ResetConnectionForForceUpdate addr 0x1ffa61c size 0x50 virtual false final false
 void ResetConnectionForForceUpdate(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadInput addr 0x1ffb454 size 0x3fc virtual false final false
 void UploadInput(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadHDAInput addr 0x1ffb850 size 0x1c0 virtual false final false
 void UploadHDAInput(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadUnityInput addr 0x1ffba10 size 0x59c virtual false final false
 void UploadUnityInput(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method AreAnyInputHDAsConnected addr 0x1ffaed4 size 0x1b4 virtual false final false
 bool AreAnyInputHDAsConnected() ;

/// @brief Method ReconnectToUpstreamAsset addr 0x1ffc4b0 size 0x274 virtual false final false
 void ReconnectToUpstreamAsset() ;

/// @brief Method CreateInputObjectInfo addr 0x1ffa914 size 0x68 virtual false final false
 HoudiniEngineUnity::HEU_InputObjectInfo CreateInputObjectInfo(UnityEngine::GameObject inputGameObject) ;

/// @brief Method CreateInputHDAInfo addr 0x1ffa97c size 0x70 virtual false final false
 HoudiniEngineUnity::HEU_InputHDAInfo CreateInputHDAInfo(UnityEngine::GameObject inputGameObject) ;

/// @brief Method InternalAddInputObjectAtEnd addr 0x1ffacb4 size 0xb8 virtual false final false
 HoudiniEngineUnity::HEU_InputObjectInfo InternalAddInputObjectAtEnd(UnityEngine::GameObject newInputGameObject) ;

/// @brief Method InternalAddInputHDAAtEnd addr 0x1ffad6c size 0xb8 virtual false final false
 HoudiniEngineUnity::HEU_InputHDAInfo InternalAddInputHDAAtEnd(UnityEngine::GameObject newInputHDA) ;

/// @brief Method DisconnectConnectedMergeNode addr 0x1ffb088 size 0x214 virtual false final false
 void DisconnectConnectedMergeNode(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ClearConnectedInputHDAs addr 0x1ffb29c size 0x1b8 virtual false final false
 void ClearConnectedInputHDAs() ;

/// @brief Method ConnectToMergeObject addr 0x1ffbfac size 0x180 virtual false final false
 void ConnectToMergeObject(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DisconnectAndDestroyInputs addr 0x1ffa20c size 0x230 virtual false final false
 void DisconnectAndDestroyInputs(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetConnectedInputCount addr 0x1ffc820 size 0x84 virtual false final false
 int32_t GetConnectedInputCount() ;

/// @brief Method GetConnectedNodeID addr 0x1ffc8a4 size 0xd8 virtual false final false
 int32_t GetConnectedNodeID(int32_t index) ;

/// @brief Method UploadObjectMergeTransformType addr 0x1ffc12c size 0x114 virtual false final false
 bool UploadObjectMergeTransformType(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadObjectMergePackGeometry addr 0x1ffc240 size 0x114 virtual false final false
 bool UploadObjectMergePackGeometry(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method HasInputNodeTransformChanged addr 0x1ffc97c size 0x25c virtual false final false
 bool HasInputNodeTransformChanged() ;

/// @brief Method UploadInputObjectTransforms addr 0x1ffcbd8 size 0x188 virtual false final false
 void UploadInputObjectTransforms(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UpdateOnAssetRecreation addr 0x1ffcd60 size 0x16c virtual false final false
 void UpdateOnAssetRecreation(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method CopyInputValuesTo addr 0x1ffcecc size 0x444 virtual false final false
 void CopyInputValuesTo(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputNode destInputNode) ;

/// @brief Method PopulateInputPreset addr 0x1ffd334 size 0x58c virtual false final false
 void PopulateInputPreset(HoudiniEngineUnity::HEU_InputPreset inputPreset) ;

/// @brief Method LoadPreset addr 0x1ffd8c0 size 0x524 virtual false final false
 void LoadPreset(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputPreset inputPreset) ;

/// @brief Method FindAddToInputHDA addr 0x1ffdde4 size 0x158 virtual false final false
 bool FindAddToInputHDA(::StringW gameObjectName) ;

/// @brief Method NotifyParentRemovedInput addr 0x1ffdf3c size 0x88 virtual false final false
 void NotifyParentRemovedInput() ;

/// @brief Method ClearUICache addr 0x1ffa204 size 0x8 virtual false final false
 void ClearUICache() ;

/// @brief Method HandleSelectedObjectsForInputObjects addr 0x1ffdfc4 size 0x11c virtual false final false
 void HandleSelectedObjectsForInputObjects(::ArrayW<UnityEngine::GameObject> selectedObjects) ;

/// @brief Method HandleSelectedObjectsForInputHDAs addr 0x1ffe0e0 size 0x11c virtual false final false
 void HandleSelectedObjectsForInputHDAs(::ArrayW<UnityEngine::GameObject> selectedObjects) ;

/// @brief Method IsEquivalentTo addr 0x1ffe1fc size 0x414 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_InputNode other) ;

/// @brief Method GetInternalObjectType addr 0x1ffa8f4 size 0x20 virtual false final false
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType GetInternalObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType type) ;

static HoudiniEngineUnity::HEU_InputNode New_ctor() ;

/// @brief Method .ctor addr 0x1ffe610 size 0x14c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions, "HoudiniEngineUnity", "HEU_InputNode/InputActions");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType, "HoudiniEngineUnity", "HEU_InputNode/InputNodeType");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, "HoudiniEngineUnity", "HEU_InputNode/InputObjectType");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType, "HoudiniEngineUnity", "HEU_InputNode/InternalObjectType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputNode);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputNode, "HoudiniEngineUnity", "HEU_InputNode");
