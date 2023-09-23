#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_InstanceInputUIState;
}
namespace HoudiniEngineUnity {
class BakedEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_RecookPreset;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Collider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_PreAssetEvent;
}
namespace HoudiniEngineUnity {
class HEU_AssetSerializedMetaData;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace HoudiniEngineUnity {
class HEU_BakedDataEvent;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class CookedEvent;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_ReloadDataEvent;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace UnityEngine {
class Object;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
class HEU_AssetPreset;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class ReloadEvent;
}
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_HoudiniAsset____c;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0;
}
// Type: ::HEU_AssetType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9571))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::HEU_AssetType
struct CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType(HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType(HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType_Unwrapped : int32_t {
__TYPE_INVALID = 0,
__TYPE_HDA = 1,
__TYPE_CURVE = 2,
__TYPE_INPUT = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TYPE_INVALID offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const TYPE_INVALID;

/// @brief Field TYPE_HDA offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const TYPE_HDA;

/// @brief Field TYPE_CURVE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const TYPE_CURVE;

/// @brief Field TYPE_INPUT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType const TYPE_INPUT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::AssetBuildAction
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9572))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::AssetBuildAction
struct CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction(HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction(HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction&&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction_Unwrapped : int32_t {
__NONE = 0,
__RELOAD = 1,
__COOK = 2,
__INVALID = 3,
__STRIP_HEDATA = 4,
__DUPLICATE = 5,
__RESET_PARAMS = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const NONE;

/// @brief Field RELOAD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const RELOAD;

/// @brief Field COOK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const COOK;

/// @brief Field INVALID offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const INVALID;

/// @brief Field STRIP_HEDATA offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const STRIP_HEDATA;

/// @brief Field DUPLICATE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const DUPLICATE;

/// @brief Field RESET_PARAMS offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction const RESET_PARAMS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::AssetCookStatus
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9573))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::AssetCookStatus
struct CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus&&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus_Unwrapped : int32_t {
__NONE = 0,
__COOKING = 1,
__POSTCOOK = 2,
__LOADING = 3,
__POSTLOAD = 4,
__PRELOAD = 5,
__SELECT_SUBASSET = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const NONE;

/// @brief Field COOKING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const COOKING;

/// @brief Field POSTCOOK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const POSTCOOK;

/// @brief Field LOADING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const LOADING;

/// @brief Field POSTLOAD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const POSTLOAD;

/// @brief Field PRELOAD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const PRELOAD;

/// @brief Field SELECT_SUBASSET offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus const SELECT_SUBASSET;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::AssetCookResult
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9574))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::AssetCookResult
struct CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult const&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult&&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult_Unwrapped : int32_t {
__NONE = 0,
__SUCCESS = 1,
__ERRORED = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult const NONE;

/// @brief Field SUCCESS offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult const SUCCESS;

/// @brief Field ERRORED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult const ERRORED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::UpdateUIDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9575))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::UpdateUIDelegate
class CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate(HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate(HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1ff9794 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1ff9850 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x1ff9864 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1ff9884 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::AssetInstantiationMethod
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9576))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::AssetInstantiationMethod
struct CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod(HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod const&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod(HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod&&) = default;
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod& operator=(HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod_Unwrapped : int32_t {
__DEFAULT = 0,
__DUPLICATED = 1,
__UNDO = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod const DEFAULT;

/// @brief Field DUPLICATED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod const DUPLICATED;

/// @brief Field UNDO offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod const UNDO;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass281_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9577))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::<>c__DisplayClass281_0
class CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __declspec(property(get=__get_previousTransformValues, put=__set_previousTransformValues))  previousTransformValues;

constexpr void __set_previousTransformValues(System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __get_previousTransformValues() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0() ;

/// @brief Method .ctor addr 0x1ff9890 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BakeToExistingPrefab>b__0 addr 0x1ff9898 size 0x10c virtual false final false
 void _BakeToExistingPrefab_b__0(UnityEngine::Transform trans) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9578))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::<>c
class CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_HoudiniAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c(HoudiniEngineUnity__HEU_HoudiniAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c(HoudiniEngineUnity__HEU_HoudiniAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c __get___9() ;

static System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> __declspec(property(get=__get___9__309_0, put=__set___9__309_0))  __9__309_0;

static void __set___9__309_0(System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> value) ;

static System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> __get___9__309_0() ;

static System::Func_2<HoudiniEngineUnity::HEU_ObjectNode,bool> __declspec(property(get=__get___9__364_0, put=__set___9__364_0))  __9__364_0;

static void __set___9__364_0(System::Func_2<HoudiniEngineUnity::HEU_ObjectNode,bool> value) ;

static System::Func_2<HoudiniEngineUnity::HEU_ObjectNode,bool> __get___9__364_0() ;

static System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> __declspec(property(get=__get___9__364_1, put=__set___9__364_1))  __9__364_1;

static void __set___9__364_1(System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> value) ;

static System::Func_2<HoudiniEngineUnity::HEU_Curve,bool> __get___9__364_1() ;

static System::Func_2<HoudiniEngineUnity::HEU_MaterialData,bool> __declspec(property(get=__get___9__364_2, put=__set___9__364_2))  __9__364_2;

static void __set___9__364_2(System::Func_2<HoudiniEngineUnity::HEU_MaterialData,bool> value) ;

static System::Func_2<HoudiniEngineUnity::HEU_MaterialData,bool> __get___9__364_2() ;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_HoudiniAsset____c() ;

/// @brief Method .ctor addr 0x1ff9a08 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ClearInvalidCurves>b__309_0 addr 0x1ff9a10 size 0x5c virtual false final false
 bool _ClearInvalidCurves_b__309_0(HoudiniEngineUnity::HEU_Curve curve) ;

/// @brief Method <ClearInvalidLists>b__364_0 addr 0x1ff9a6c size 0x5c virtual false final false
 bool _ClearInvalidLists_b__364_0(HoudiniEngineUnity::HEU_ObjectNode node) ;

/// @brief Method <ClearInvalidLists>b__364_1 addr 0x1ff9ac8 size 0x5c virtual false final false
 bool _ClearInvalidLists_b__364_1(HoudiniEngineUnity::HEU_Curve curve) ;

/// @brief Method <ClearInvalidLists>b__364_2 addr 0x1ff9b24 size 0x5c virtual false final false
 bool _ClearInvalidLists_b__364_2(HoudiniEngineUnity::HEU_MaterialData data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass365_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9579))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset::<>c__DisplayClass365_0
class CORDL_TYPE HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0& operator=(HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0 const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get_newAsset, put=__set_newAsset))  newAsset;

constexpr void __set_newAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get_newAsset() const;

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;

 System::Predicate_1<HoudiniEngineUnity::HEU_Curve> __declspec(property(get=__get___9__0, put=__set___9__0))  __9__0;

constexpr void __set___9__0(System::Predicate_1<HoudiniEngineUnity::HEU_Curve> value) ;

constexpr System::Predicate_1<HoudiniEngineUnity::HEU_Curve> __get___9__0() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0() ;

/// @brief Method .ctor addr 0x1ff9b80 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CopyPropertiesTo>b__0 addr 0x1ff9b88 size 0x7c virtual false final false
 bool _CopyPropertiesTo_b__0(HoudiniEngineUnity::HEU_Curve curve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_HoudiniAsset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9580))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset
class CORDL_TYPE HEU_HoudiniAsset : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass365_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0;

using __c = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c;

using __c__DisplayClass281_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0;

using AssetInstantiationMethod = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod;

using UpdateUIDelegate = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate;

using AssetCookResult = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult;

using AssetCookStatus = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus;

using AssetBuildAction = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction;

using HEU_AssetType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HoudiniAsset>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HoudiniAsset>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x278};

virtual ~HEU_HoudiniAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset", modifiers: " const&", def_value: None }]
constexpr HEU_HoudiniAsset(HEU_HoudiniAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset", modifiers: "&&", def_value: None }]
constexpr HEU_HoudiniAsset(HEU_HoudiniAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HoudiniAsset(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_HoudiniAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HoudiniAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HoudiniAsset& operator=(HEU_HoudiniAsset&& o) noexcept = default;
  constexpr HEU_HoudiniAsset& operator=(HEU_HoudiniAsset const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType __declspec(property(get=__get__assetType, put=__set__assetType))  _assetType;

constexpr void __set__assetType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType __get__assetType() const;

 HoudiniEngineUnity::HAPI_AssetInfo __declspec(property(get=__get__assetInfo, put=__set__assetInfo))  _assetInfo;

constexpr void __set__assetInfo(HoudiniEngineUnity::HAPI_AssetInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AssetInfo __get__assetInfo() const;

 HoudiniEngineUnity::HAPI_NodeInfo __declspec(property(get=__get__nodeInfo, put=__set__nodeInfo))  _nodeInfo;

constexpr void __set__nodeInfo(HoudiniEngineUnity::HAPI_NodeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_NodeInfo __get__nodeInfo() const;

 ::StringW __declspec(property(get=__get__assetName, put=__set__assetName))  _assetName;

constexpr void __set__assetName(::StringW value) ;

constexpr ::StringW __get__assetName() const;

 ::StringW __declspec(property(get=__get__assetOpName, put=__set__assetOpName))  _assetOpName;

constexpr void __set__assetOpName(::StringW value) ;

constexpr ::StringW __get__assetOpName() const;

 ::StringW __declspec(property(get=__get__assetHelp, put=__set__assetHelp))  _assetHelp;

constexpr void __set__assetHelp(::StringW value) ;

constexpr ::StringW __get__assetHelp() const;

 int32_t __declspec(property(get=__get__assetID, put=__set__assetID))  _assetID;

constexpr void __set__assetID(int32_t value) ;

constexpr int32_t __get__assetID() const;

 ::StringW __declspec(property(get=__get__assetPath, put=__set__assetPath))  _assetPath;

constexpr void __set__assetPath(::StringW value) ;

constexpr ::StringW __get__assetPath() const;

 bool __declspec(property(get=__get__loadAssetFromMemory, put=__set__loadAssetFromMemory))  _loadAssetFromMemory;

constexpr void __set__loadAssetFromMemory(bool value) ;

constexpr bool __get__loadAssetFromMemory() const;

 bool __declspec(property(get=__get__alwaysOverwriteOnLoad, put=__set__alwaysOverwriteOnLoad))  _alwaysOverwriteOnLoad;

constexpr void __set__alwaysOverwriteOnLoad(bool value) ;

constexpr bool __get__alwaysOverwriteOnLoad() const;

 UnityEngine::Object __declspec(property(get=__get__assetFileObject, put=__set__assetFileObject))  _assetFileObject;

constexpr void __set__assetFileObject(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get__assetFileObject() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectNode> __declspec(property(get=__get__objectNodes, put=__set__objectNodes))  _objectNodes;

constexpr void __set__objectNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectNode> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectNode> __get__objectNodes() const;

 UnityEngine::GameObject __declspec(property(get=__get__rootGameObject, put=__set__rootGameObject))  _rootGameObject;

constexpr void __set__rootGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__rootGameObject() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __declspec(property(get=__get__materialCache, put=__set__materialCache))  _materialCache;

constexpr void __set__materialCache(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __get__materialCache() const;

 HoudiniEngineUnity::HEU_Parameters __declspec(property(get=__get__parameters, put=__set__parameters))  _parameters;

constexpr void __set__parameters(HoudiniEngineUnity::HEU_Parameters value) ;

constexpr HoudiniEngineUnity::HEU_Parameters __get__parameters() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get__lastSyncedTransformMatrix, put=__set__lastSyncedTransformMatrix))  _lastSyncedTransformMatrix;

constexpr void __set__lastSyncedTransformMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get__lastSyncedTransformMatrix() const;

 ::StringW __declspec(property(get=__get__assetCacheFolderPath, put=__set__assetCacheFolderPath))  _assetCacheFolderPath;

constexpr void __set__assetCacheFolderPath(::StringW value) ;

constexpr ::StringW __get__assetCacheFolderPath() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__subassetNames, put=__set__subassetNames))  _subassetNames;

constexpr void __set__subassetNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__subassetNames() const;

 int32_t __declspec(property(get=__get__selectedSubassetIndex, put=__set__selectedSubassetIndex))  _selectedSubassetIndex;

constexpr void __set__selectedSubassetIndex(int32_t value) ;

constexpr int32_t __get__selectedSubassetIndex() const;

 HoudiniEngineUnity::HEU_AssetPreset __declspec(property(get=__get__savedAssetPreset, put=__set__savedAssetPreset))  _savedAssetPreset;

constexpr void __set__savedAssetPreset(HoudiniEngineUnity::HEU_AssetPreset value) ;

constexpr HoudiniEngineUnity::HEU_AssetPreset __get__savedAssetPreset() const;

 HoudiniEngineUnity::HEU_RecookPreset __declspec(property(get=__get__recookPreset, put=__set__recookPreset))  _recookPreset;

constexpr void __set__recookPreset(HoudiniEngineUnity::HEU_RecookPreset value) ;

constexpr HoudiniEngineUnity::HEU_RecookPreset __get__recookPreset() const;

 int32_t __declspec(property(get=__get__totalCookCount, put=__set__totalCookCount))  _totalCookCount;

constexpr void __set__totalCookCount(int32_t value) ;

constexpr int32_t __get__totalCookCount() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction __declspec(property(get=__get__requestBuildAction, put=__set__requestBuildAction))  _requestBuildAction;

constexpr void __set__requestBuildAction(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction __get__requestBuildAction() const;

 bool __declspec(property(get=__get__checkParameterChangeForCook, put=__set__checkParameterChangeForCook))  _checkParameterChangeForCook;

constexpr void __set__checkParameterChangeForCook(bool value) ;

constexpr bool __get__checkParameterChangeForCook() const;

 bool __declspec(property(get=__get__skipCookCheck, put=__set__skipCookCheck))  _skipCookCheck;

constexpr void __set__skipCookCheck(bool value) ;

constexpr bool __get__skipCookCheck() const;

 bool __declspec(property(get=__get__uploadParameters, put=__set__uploadParameters))  _uploadParameters;

constexpr void __set__uploadParameters(bool value) ;

constexpr bool __get__uploadParameters() const;

 bool __declspec(property(get=__get__forceUploadInputs, put=__set__forceUploadInputs))  _forceUploadInputs;

constexpr void __set__forceUploadInputs(bool value) ;

constexpr bool __get__forceUploadInputs() const;

 bool __declspec(property(get=__get__upstreamCookChanged, put=__set__upstreamCookChanged))  _upstreamCookChanged;

constexpr void __set__upstreamCookChanged(bool value) ;

constexpr bool __get__upstreamCookChanged() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus __declspec(property(get=__get__cookStatus, put=__set__cookStatus))  _cookStatus;

constexpr void __set__cookStatus(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus __get__cookStatus() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult __declspec(property(get=__get__lastCookResult, put=__set__lastCookResult))  _lastCookResult;

constexpr void __set__lastCookResult(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult __get__lastCookResult() const;

 bool __declspec(property(get=__get__isCookingAssetReloaded, put=__set__isCookingAssetReloaded))  _isCookingAssetReloaded;

constexpr void __set__isCookingAssetReloaded(bool value) ;

constexpr bool __get__isCookingAssetReloaded() const;

 bool __declspec(property(get=__get__bForceUpdate, put=__set__bForceUpdate))  _bForceUpdate;

constexpr void __set__bForceUpdate(bool value) ;

constexpr bool __get__bForceUpdate() const;

 int64_t __declspec(property(get=__get__sessionID, put=__set__sessionID))  _sessionID;

constexpr void __set__sessionID(int64_t value) ;

constexpr int64_t __get__sessionID() const;

 bool __declspec(property(get=__get__WarnedPrefabNotSupported_k__BackingField, put=__set__WarnedPrefabNotSupported_k__BackingField))  _WarnedPrefabNotSupported_k__BackingField;

constexpr void __set__WarnedPrefabNotSupported_k__BackingField(bool value) ;

constexpr bool __get__WarnedPrefabNotSupported_k__BackingField() const;

 bool __declspec(property(get=__get__uiLocked, put=__set__uiLocked))  _uiLocked;

constexpr void __set__uiLocked(bool value) ;

constexpr bool __get__uiLocked() const;

 bool __declspec(property(get=__get__showHDAOptions, put=__set__showHDAOptions))  _showHDAOptions;

constexpr void __set__showHDAOptions(bool value) ;

constexpr bool __get__showHDAOptions() const;

 bool __declspec(property(get=__get__showGenerateSection, put=__set__showGenerateSection))  _showGenerateSection;

constexpr void __set__showGenerateSection(bool value) ;

constexpr bool __get__showGenerateSection() const;

 bool __declspec(property(get=__get__showBakeSection, put=__set__showBakeSection))  _showBakeSection;

constexpr void __set__showBakeSection(bool value) ;

constexpr bool __get__showBakeSection() const;

 bool __declspec(property(get=__get__showEventsSection, put=__set__showEventsSection))  _showEventsSection;

constexpr void __set__showEventsSection(bool value) ;

constexpr bool __get__showEventsSection() const;

 bool __declspec(property(get=__get__showCurvesSection, put=__set__showCurvesSection))  _showCurvesSection;

constexpr void __set__showCurvesSection(bool value) ;

constexpr bool __get__showCurvesSection() const;

 bool __declspec(property(get=__get__showInputNodesSection, put=__set__showInputNodesSection))  _showInputNodesSection;

constexpr void __set__showInputNodesSection(bool value) ;

constexpr bool __get__showInputNodesSection() const;

 bool __declspec(property(get=__get__showToolsSection, put=__set__showToolsSection))  _showToolsSection;

constexpr void __set__showToolsSection(bool value) ;

constexpr bool __get__showToolsSection() const;

 bool __declspec(property(get=__get__showTerrainSection, put=__set__showTerrainSection))  _showTerrainSection;

constexpr void __set__showTerrainSection(bool value) ;

constexpr bool __get__showTerrainSection() const;

 HoudiniEngineUnity::HEU_InstanceInputUIState __declspec(property(get=__get__instanceInputUIState, put=__set__instanceInputUIState))  _instanceInputUIState;

constexpr void __set__instanceInputUIState(HoudiniEngineUnity::HEU_InstanceInputUIState value) ;

constexpr HoudiniEngineUnity::HEU_InstanceInputUIState __get__instanceInputUIState() const;

 HoudiniEngineUnity::ReloadEvent __declspec(property(get=__get__reloadEvent, put=__set__reloadEvent))  _reloadEvent;

constexpr void __set__reloadEvent(HoudiniEngineUnity::ReloadEvent value) ;

constexpr HoudiniEngineUnity::ReloadEvent __get__reloadEvent() const;

 HoudiniEngineUnity::CookedEvent __declspec(property(get=__get__cookedEvent, put=__set__cookedEvent))  _cookedEvent;

constexpr void __set__cookedEvent(HoudiniEngineUnity::CookedEvent value) ;

constexpr HoudiniEngineUnity::CookedEvent __get__cookedEvent() const;

 HoudiniEngineUnity::BakedEvent __declspec(property(get=__get__bakedEvent, put=__set__bakedEvent))  _bakedEvent;

constexpr void __set__bakedEvent(HoudiniEngineUnity::BakedEvent value) ;

constexpr HoudiniEngineUnity::BakedEvent __get__bakedEvent() const;

 HoudiniEngineUnity::HEU_ReloadDataEvent __declspec(property(get=__get__reloadDataEvent, put=__set__reloadDataEvent))  _reloadDataEvent;

constexpr void __set__reloadDataEvent(HoudiniEngineUnity::HEU_ReloadDataEvent value) ;

constexpr HoudiniEngineUnity::HEU_ReloadDataEvent __get__reloadDataEvent() const;

 HoudiniEngineUnity::HEU_CookedDataEvent __declspec(property(get=__get__cookedDataEvent, put=__set__cookedDataEvent))  _cookedDataEvent;

constexpr void __set__cookedDataEvent(HoudiniEngineUnity::HEU_CookedDataEvent value) ;

constexpr HoudiniEngineUnity::HEU_CookedDataEvent __get__cookedDataEvent() const;

 HoudiniEngineUnity::HEU_BakedDataEvent __declspec(property(get=__get__bakedDataEvent, put=__set__bakedDataEvent))  _bakedDataEvent;

constexpr void __set__bakedDataEvent(HoudiniEngineUnity::HEU_BakedDataEvent value) ;

constexpr HoudiniEngineUnity::HEU_BakedDataEvent __get__bakedDataEvent() const;

 HoudiniEngineUnity::HEU_PreAssetEvent __declspec(property(get=__get__preAssetEvent, put=__set__preAssetEvent))  _preAssetEvent;

constexpr void __set__preAssetEvent(HoudiniEngineUnity::HEU_PreAssetEvent value) ;

constexpr HoudiniEngineUnity::HEU_PreAssetEvent __get__preAssetEvent() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate __declspec(property(get=__get__refreshUIDelegate, put=__set__refreshUIDelegate))  _refreshUIDelegate;

constexpr void __set__refreshUIDelegate(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate __get__refreshUIDelegate() const;

 HoudiniEngineUnity::CookedEvent __declspec(property(get=__get__downstreamConnectionCookedEvent, put=__set__downstreamConnectionCookedEvent))  _downstreamConnectionCookedEvent;

constexpr void __set__downstreamConnectionCookedEvent(HoudiniEngineUnity::CookedEvent value) ;

constexpr HoudiniEngineUnity::CookedEvent __get__downstreamConnectionCookedEvent() const;

 bool __declspec(property(get=__get__generateUVs, put=__set__generateUVs))  _generateUVs;

constexpr void __set__generateUVs(bool value) ;

constexpr bool __get__generateUVs() const;

 bool __declspec(property(get=__get__generateTangents, put=__set__generateTangents))  _generateTangents;

constexpr void __set__generateTangents(bool value) ;

constexpr bool __get__generateTangents() const;

 bool __declspec(property(get=__get__generateNormals, put=__set__generateNormals))  _generateNormals;

constexpr void __set__generateNormals(bool value) ;

constexpr bool __get__generateNormals() const;

 bool __declspec(property(get=__get__pushTransformToHoudini, put=__set__pushTransformToHoudini))  _pushTransformToHoudini;

constexpr void __set__pushTransformToHoudini(bool value) ;

constexpr bool __get__pushTransformToHoudini() const;

 bool __declspec(property(get=__get__transformChangeTriggersCooks, put=__set__transformChangeTriggersCooks))  _transformChangeTriggersCooks;

constexpr void __set__transformChangeTriggersCooks(bool value) ;

constexpr bool __get__transformChangeTriggersCooks() const;

 bool __declspec(property(get=__get__cookingTriggersDownCooks, put=__set__cookingTriggersDownCooks))  _cookingTriggersDownCooks;

constexpr void __set__cookingTriggersDownCooks(bool value) ;

constexpr bool __get__cookingTriggersDownCooks() const;

 bool __declspec(property(get=__get__autoCookOnParameterChange, put=__set__autoCookOnParameterChange))  _autoCookOnParameterChange;

constexpr void __set__autoCookOnParameterChange(bool value) ;

constexpr bool __get__autoCookOnParameterChange() const;

 bool __declspec(property(get=__get__ignoreNonDisplayNodes, put=__set__ignoreNonDisplayNodes))  _ignoreNonDisplayNodes;

constexpr void __set__ignoreNonDisplayNodes(bool value) ;

constexpr bool __get__ignoreNonDisplayNodes() const;

 bool __declspec(property(get=__get__generateMeshUsingPoints, put=__set__generateMeshUsingPoints))  _generateMeshUsingPoints;

constexpr void __set__generateMeshUsingPoints(bool value) ;

constexpr bool __get__generateMeshUsingPoints() const;

 bool __declspec(property(get=__get__useLODGroups, put=__set__useLODGroups))  _useLODGroups;

constexpr void __set__useLODGroups(bool value) ;

constexpr bool __get__useLODGroups() const;

 bool __declspec(property(get=__get__splitGeosByGroup, put=__set__splitGeosByGroup))  _splitGeosByGroup;

constexpr void __set__splitGeosByGroup(bool value) ;

constexpr bool __get__splitGeosByGroup() const;

 bool __declspec(property(get=__get__sessionSyncAutoCook, put=__set__sessionSyncAutoCook))  _sessionSyncAutoCook;

constexpr void __set__sessionSyncAutoCook(bool value) ;

constexpr bool __get__sessionSyncAutoCook() const;

 bool __declspec(property(get=__get__bakeUpdateKeepPreviousTransformValues, put=__set__bakeUpdateKeepPreviousTransformValues))  _bakeUpdateKeepPreviousTransformValues;

constexpr void __set__bakeUpdateKeepPreviousTransformValues(bool value) ;

constexpr bool __get__bakeUpdateKeepPreviousTransformValues() const;

 bool __declspec(property(get=__get__pauseCooking, put=__set__pauseCooking))  _pauseCooking;

constexpr void __set__pauseCooking(bool value) ;

constexpr bool __get__pauseCooking() const;

 bool __declspec(property(get=__get__curveEditorEnabled, put=__set__curveEditorEnabled))  _curveEditorEnabled;

constexpr void __set__curveEditorEnabled(bool value) ;

constexpr bool __get__curveEditorEnabled() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> __declspec(property(get=__get__curves, put=__set__curves))  _curves;

constexpr void __set__curves(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> __get__curves() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision __declspec(property(get=__get__curveDrawCollision, put=__set__curveDrawCollision))  _curveDrawCollision;

constexpr void __set__curveDrawCollision(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision __get__curveDrawCollision() const;

 System::Collections::Generic::List_1<UnityEngine::Collider> __declspec(property(get=__get__curveDrawColliders, put=__set__curveDrawColliders))  _curveDrawColliders;

constexpr void __set__curveDrawColliders(System::Collections::Generic::List_1<UnityEngine::Collider> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Collider> __get__curveDrawColliders() const;

 UnityEngine::LayerMask __declspec(property(get=__get__curveDrawLayerMask, put=__set__curveDrawLayerMask))  _curveDrawLayerMask;

constexpr void __set__curveDrawLayerMask(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get__curveDrawLayerMask() const;

 float_t __declspec(property(get=__get__curveProjectMaxDistance, put=__set__curveProjectMaxDistance))  _curveProjectMaxDistance;

constexpr void __set__curveProjectMaxDistance(float_t value) ;

constexpr float_t __get__curveProjectMaxDistance() const;

 UnityEngine::Vector3 __declspec(property(get=__get__curveProjectDirection, put=__set__curveProjectDirection))  _curveProjectDirection;

constexpr void __set__curveProjectDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__curveProjectDirection() const;

 bool __declspec(property(get=__get__curveDisableScaleRotation, put=__set__curveDisableScaleRotation))  _curveDisableScaleRotation;

constexpr void __set__curveDisableScaleRotation(bool value) ;

constexpr bool __get__curveDisableScaleRotation() const;

 bool __declspec(property(get=__get__curveCookOnDrag, put=__set__curveCookOnDrag))  _curveCookOnDrag;

constexpr void __set__curveCookOnDrag(bool value) ;

constexpr bool __get__curveCookOnDrag() const;

 bool __declspec(property(get=__get__curveFrameSelectedNodes, put=__set__curveFrameSelectedNodes))  _curveFrameSelectedNodes;

constexpr void __set__curveFrameSelectedNodes(bool value) ;

constexpr bool __get__curveFrameSelectedNodes() const;

 float_t __declspec(property(get=__get__curveFrameSelectedNodeDistance, put=__set__curveFrameSelectedNodeDistance))  _curveFrameSelectedNodeDistance;

constexpr void __set__curveFrameSelectedNodeDistance(float_t value) ;

constexpr float_t __get__curveFrameSelectedNodeDistance() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputNode> __declspec(property(get=__get__inputNodes, put=__set__inputNodes))  _inputNodes;

constexpr void __set__inputNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputNode> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputNode> __get__inputNodes() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> __declspec(property(get=__get__handles, put=__set__handles))  _handles;

constexpr void __set__handles(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> __get__handles() const;

 bool __declspec(property(get=__get__handlesEnabled, put=__set__handlesEnabled))  _handlesEnabled;

constexpr void __set__handlesEnabled(bool value) ;

constexpr bool __get__handlesEnabled() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> __declspec(property(get=__get__volumeCaches, put=__set__volumeCaches))  _volumeCaches;

constexpr void __set__volumeCaches(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> __get__volumeCaches() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributesStore> __declspec(property(get=__get__attributeStores, put=__set__attributeStores))  _attributeStores;

constexpr void __set__attributeStores(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributesStore> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributesStore> __get__attributeStores() const;

 bool __declspec(property(get=__get__editableNodesToolsEnabled, put=__set__editableNodesToolsEnabled))  _editableNodesToolsEnabled;

constexpr void __set__editableNodesToolsEnabled(bool value) ;

constexpr bool __get__editableNodesToolsEnabled() const;

 HoudiniEngineUnity::HEU_ToolsInfo __declspec(property(get=__get__toolsInfo, put=__set__toolsInfo))  _toolsInfo;

constexpr void __set__toolsInfo(HoudiniEngineUnity::HEU_ToolsInfo value) ;

constexpr HoudiniEngineUnity::HEU_ToolsInfo __get__toolsInfo() const;

 HoudiniEngineUnity::HEU_AssetSerializedMetaData __declspec(property(get=__get__serializedMetaData, put=__set__serializedMetaData))  _serializedMetaData;

constexpr void __set__serializedMetaData(HoudiniEngineUnity::HEU_AssetSerializedMetaData value) ;

constexpr HoudiniEngineUnity::HEU_AssetSerializedMetaData __get__serializedMetaData() const;

 bool __declspec(property(get=__get__pendingAutoCookOnMouseRelease, put=__set__pendingAutoCookOnMouseRelease))  _pendingAutoCookOnMouseRelease;

constexpr void __set__pendingAutoCookOnMouseRelease(bool value) ;

constexpr bool __get__pendingAutoCookOnMouseRelease() const;


// Properties

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType __declspec(property(get=get_AssetType))  AssetType;

 HoudiniEngineUnity::HAPI_AssetInfo __declspec(property(get=get_AssetInfo))  AssetInfo;

 HoudiniEngineUnity::HAPI_NodeInfo __declspec(property(get=get_NodeInfo))  NodeInfo;

 ::StringW __declspec(property(get=get_AssetName))  AssetName;

 ::StringW __declspec(property(get=get_AssetOpName))  AssetOpName;

 ::StringW __declspec(property(get=get_AssetHelp))  AssetHelp;

 int32_t __declspec(property(get=get_TransformInputCount))  TransformInputCount;

 int32_t __declspec(property(get=get_GeoInputCount))  GeoInputCount;

 int32_t __declspec(property(get=get_AssetID))  AssetID;

 ::StringW __declspec(property(get=get_AssetPath))  AssetPath;

 bool __declspec(property(get=get_LoadAssetFromMemory, put=set_LoadAssetFromMemory))  LoadAssetFromMemory;

 bool __declspec(property(get=get_AlwaysOverwriteOnLoad, put=set_AlwaysOverwriteOnLoad))  AlwaysOverwriteOnLoad;

 int32_t __declspec(property(get=get_HandleCount))  HandleCount;

 UnityEngine::GameObject __declspec(property(get=get_OwnerGameObject))  OwnerGameObject;

 UnityEngine::GameObject __declspec(property(get=get_RootGameObject))  RootGameObject;

 HoudiniEngineUnity::HEU_Parameters __declspec(property(get=get_Parameters))  Parameters;

 ::ArrayW<::StringW> __declspec(property(get=get_SubassetNames))  SubassetNames;

 int64_t __declspec(property(get=get_SessionID))  SessionID;

 bool __declspec(property(get=get_WarnedPrefabNotSupported, put=set_WarnedPrefabNotSupported))  WarnedPrefabNotSupported;

 HoudiniEngineUnity::HEU_InstanceInputUIState __declspec(property(get=get_InstanceInputUIState, put=set_InstanceInputUIState))  InstanceInputUIState;

 bool __declspec(property(get=get_GenerateUVs, put=set_GenerateUVs))  GenerateUVs;

 bool __declspec(property(get=get_GenerateTangents, put=set_GenerateTangents))  GenerateTangents;

 bool __declspec(property(get=get_GenerateNormals, put=set_GenerateNormals))  GenerateNormals;

 bool __declspec(property(get=get_PushTransformToHoudini, put=set_PushTransformToHoudini))  PushTransformToHoudini;

 bool __declspec(property(get=get_TransformChangeTriggersCooks, put=set_TransformChangeTriggersCooks))  TransformChangeTriggersCooks;

 bool __declspec(property(get=get_CookingTriggersDownCooks, put=set_CookingTriggersDownCooks))  CookingTriggersDownCooks;

 bool __declspec(property(get=get_AutoCookOnParameterChange, put=set_AutoCookOnParameterChange))  AutoCookOnParameterChange;

 bool __declspec(property(get=get_IgnoreNonDisplayNodes, put=set_IgnoreNonDisplayNodes))  IgnoreNonDisplayNodes;

 bool __declspec(property(get=get_GenerateMeshUsingPoints, put=set_GenerateMeshUsingPoints))  GenerateMeshUsingPoints;

 bool __declspec(property(get=get_UseLODGroups, put=set_UseLODGroups))  UseLODGroups;

 bool __declspec(property(get=get_SplitGeosByGroup, put=set_SplitGeosByGroup))  SplitGeosByGroup;

 bool __declspec(property(get=get_SessionSyncAutoCook, put=set_SessionSyncAutoCook))  SessionSyncAutoCook;

 bool __declspec(property(get=get_BakeUpdateKeepPreviousTransformValues, put=set_BakeUpdateKeepPreviousTransformValues))  BakeUpdateKeepPreviousTransformValues;

 bool __declspec(property(get=get_PauseCooking, put=set_PauseCooking))  PauseCooking;

 bool __declspec(property(get=get_CurveEditorEnabled, put=set_CurveEditorEnabled))  CurveEditorEnabled;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision __declspec(property(get=get_CurveDrawCollision, put=set_CurveDrawCollision))  CurveDrawCollision;

 bool __declspec(property(get=get_CurveDisableScaleRotation, put=set_CurveDisableScaleRotation))  CurveDisableScaleRotation;

 bool __declspec(property(get=get_CurveCookOnDrag, put=set_CurveCookOnDrag))  CurveCookOnDrag;

 bool __declspec(property(get=get_CurveFrameSelectedNodes, put=set_CurveFrameSelectedNodes))  CurveFrameSelectedNodes;

 float_t __declspec(property(get=get_CurveFrameSelectedNodeDistance, put=set_CurveFrameSelectedNodeDistance))  CurveFrameSelectedNodeDistance;

 bool __declspec(property(get=get_HandlesEnabled, put=set_HandlesEnabled))  HandlesEnabled;

 bool __declspec(property(get=get_EditableNodesToolsEnabled, put=set_EditableNodesToolsEnabled))  EditableNodesToolsEnabled;

 HoudiniEngineUnity::HEU_ToolsInfo __declspec(property(get=get_ToolsInfo))  ToolsInfo;

 HoudiniEngineUnity::HEU_AssetSerializedMetaData __declspec(property(get=get_SerializedMetaData))  SerializedMetaData;

 bool __declspec(property(get=get_PendingAutoCookOnMouseRelease, put=set_PendingAutoCookOnMouseRelease))  PendingAutoCookOnMouseRelease;


// Methods

/// @brief Method get_AssetType addr 0x1fe8474 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType get_AssetType() ;

/// @brief Method get_AssetInfo addr 0x1fe847c size 0x1c virtual false final false
 HoudiniEngineUnity::HAPI_AssetInfo get_AssetInfo() ;

/// @brief Method get_NodeInfo addr 0x1fe8498 size 0x10 virtual false final false
 HoudiniEngineUnity::HAPI_NodeInfo get_NodeInfo() ;

/// @brief Method get_AssetName addr 0x1fe84a8 size 0x8 virtual false final false
 ::StringW get_AssetName() ;

/// @brief Method get_AssetOpName addr 0x1fe84b0 size 0x8 virtual false final false
 ::StringW get_AssetOpName() ;

/// @brief Method get_AssetHelp addr 0x1fe84b8 size 0x8 virtual false final false
 ::StringW get_AssetHelp() ;

/// @brief Method get_TransformInputCount addr 0x1fe84c0 size 0x8 virtual false final false
 int32_t get_TransformInputCount() ;

/// @brief Method get_GeoInputCount addr 0x1fe84c8 size 0x8 virtual false final false
 int32_t get_GeoInputCount() ;

/// @brief Method get_AssetID addr 0x1fe84d0 size 0x8 virtual false final false
 int32_t get_AssetID() ;

/// @brief Method get_AssetPath addr 0x1fe84d8 size 0x8 virtual false final false
 ::StringW get_AssetPath() ;

/// @brief Method get_LoadAssetFromMemory addr 0x1fe84e0 size 0x8 virtual false final false
 bool get_LoadAssetFromMemory() ;

/// @brief Method set_LoadAssetFromMemory addr 0x1fe84e8 size 0xc virtual false final false
 void set_LoadAssetFromMemory(bool value) ;

/// @brief Method get_AlwaysOverwriteOnLoad addr 0x1fe84f4 size 0x8 virtual false final false
 bool get_AlwaysOverwriteOnLoad() ;

/// @brief Method set_AlwaysOverwriteOnLoad addr 0x1fe84fc size 0xc virtual false final false
 void set_AlwaysOverwriteOnLoad(bool value) ;

/// @brief Method get_HandleCount addr 0x1fe8508 size 0x8 virtual false final false
 int32_t get_HandleCount() ;

/// @brief Method get_OwnerGameObject addr 0x1fe5b7c size 0x8 virtual false final false
 UnityEngine::GameObject get_OwnerGameObject() ;

/// @brief Method get_RootGameObject addr 0x1fe8510 size 0x8 virtual false final false
 UnityEngine::GameObject get_RootGameObject() ;

/// @brief Method get_Parameters addr 0x1fe8518 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_Parameters get_Parameters() ;

/// @brief Method get_SubassetNames addr 0x1fe8520 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_SubassetNames() ;

/// @brief Method get_SessionID addr 0x1fe8528 size 0x8 virtual false final false
 int64_t get_SessionID() ;

/// @brief Method get_WarnedPrefabNotSupported addr 0x1fe8530 size 0x8 virtual false final false
 bool get_WarnedPrefabNotSupported() ;

/// @brief Method set_WarnedPrefabNotSupported addr 0x1fe8538 size 0xc virtual false final false
 void set_WarnedPrefabNotSupported(bool value) ;

/// @brief Method get_InstanceInputUIState addr 0x1fe8544 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_InstanceInputUIState get_InstanceInputUIState() ;

/// @brief Method set_InstanceInputUIState addr 0x1fe854c size 0x8 virtual false final false
 void set_InstanceInputUIState(HoudiniEngineUnity::HEU_InstanceInputUIState value) ;

/// @brief Method get_GenerateUVs addr 0x1fe8554 size 0x8 virtual false final false
 bool get_GenerateUVs() ;

/// @brief Method set_GenerateUVs addr 0x1fe855c size 0xc virtual false final false
 void set_GenerateUVs(bool value) ;

/// @brief Method get_GenerateTangents addr 0x1fe8568 size 0x8 virtual false final false
 bool get_GenerateTangents() ;

/// @brief Method set_GenerateTangents addr 0x1fe8570 size 0xc virtual false final false
 void set_GenerateTangents(bool value) ;

/// @brief Method get_GenerateNormals addr 0x1fe857c size 0x8 virtual false final false
 bool get_GenerateNormals() ;

/// @brief Method set_GenerateNormals addr 0x1fe8584 size 0xc virtual false final false
 void set_GenerateNormals(bool value) ;

/// @brief Method get_PushTransformToHoudini addr 0x1fe8590 size 0x8 virtual false final false
 bool get_PushTransformToHoudini() ;

/// @brief Method set_PushTransformToHoudini addr 0x1fe8598 size 0xc virtual false final false
 void set_PushTransformToHoudini(bool value) ;

/// @brief Method get_TransformChangeTriggersCooks addr 0x1fe85a4 size 0x8 virtual false final false
 bool get_TransformChangeTriggersCooks() ;

/// @brief Method set_TransformChangeTriggersCooks addr 0x1fe85ac size 0xc virtual false final false
 void set_TransformChangeTriggersCooks(bool value) ;

/// @brief Method get_CookingTriggersDownCooks addr 0x1fe85b8 size 0x8 virtual false final false
 bool get_CookingTriggersDownCooks() ;

/// @brief Method set_CookingTriggersDownCooks addr 0x1fe85c0 size 0xc virtual false final false
 void set_CookingTriggersDownCooks(bool value) ;

/// @brief Method get_AutoCookOnParameterChange addr 0x1fe85cc size 0x8 virtual false final false
 bool get_AutoCookOnParameterChange() ;

/// @brief Method set_AutoCookOnParameterChange addr 0x1fe85d4 size 0xc virtual false final false
 void set_AutoCookOnParameterChange(bool value) ;

/// @brief Method get_IgnoreNonDisplayNodes addr 0x1fe85e0 size 0x8 virtual false final false
 bool get_IgnoreNonDisplayNodes() ;

/// @brief Method set_IgnoreNonDisplayNodes addr 0x1fe85e8 size 0xc virtual false final false
 void set_IgnoreNonDisplayNodes(bool value) ;

/// @brief Method get_GenerateMeshUsingPoints addr 0x1fe85f4 size 0x8 virtual false final false
 bool get_GenerateMeshUsingPoints() ;

/// @brief Method set_GenerateMeshUsingPoints addr 0x1fe85fc size 0xc virtual false final false
 void set_GenerateMeshUsingPoints(bool value) ;

/// @brief Method get_UseLODGroups addr 0x1fe8608 size 0x8 virtual false final false
 bool get_UseLODGroups() ;

/// @brief Method set_UseLODGroups addr 0x1fe8610 size 0xc virtual false final false
 void set_UseLODGroups(bool value) ;

/// @brief Method get_SplitGeosByGroup addr 0x1fe861c size 0x8 virtual false final false
 bool get_SplitGeosByGroup() ;

/// @brief Method set_SplitGeosByGroup addr 0x1fe8624 size 0xc virtual false final false
 void set_SplitGeosByGroup(bool value) ;

/// @brief Method get_SessionSyncAutoCook addr 0x1fe8630 size 0x8 virtual false final false
 bool get_SessionSyncAutoCook() ;

/// @brief Method set_SessionSyncAutoCook addr 0x1fe8638 size 0xc virtual false final false
 void set_SessionSyncAutoCook(bool value) ;

/// @brief Method get_BakeUpdateKeepPreviousTransformValues addr 0x1fe8644 size 0x8 virtual false final false
 bool get_BakeUpdateKeepPreviousTransformValues() ;

/// @brief Method set_BakeUpdateKeepPreviousTransformValues addr 0x1fe864c size 0xc virtual false final false
 void set_BakeUpdateKeepPreviousTransformValues(bool value) ;

/// @brief Method get_PauseCooking addr 0x1fe8658 size 0x8 virtual false final false
 bool get_PauseCooking() ;

/// @brief Method set_PauseCooking addr 0x1fe8660 size 0xc virtual false final false
 void set_PauseCooking(bool value) ;

/// @brief Method get_CurveEditorEnabled addr 0x1fe866c size 0x8 virtual false final false
 bool get_CurveEditorEnabled() ;

/// @brief Method set_CurveEditorEnabled addr 0x1fe8674 size 0xc virtual false final false
 void set_CurveEditorEnabled(bool value) ;

/// @brief Method get_CurveDrawCollision addr 0x1fe8680 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision get_CurveDrawCollision() ;

/// @brief Method set_CurveDrawCollision addr 0x1fe8688 size 0x8 virtual false final false
 void set_CurveDrawCollision(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision value) ;

/// @brief Method GetCurveDrawColliders addr 0x1fe8690 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Collider> GetCurveDrawColliders() ;

/// @brief Method GetCurveDrawLayerMask addr 0x1fe8698 size 0x8 virtual false final false
 UnityEngine::LayerMask GetCurveDrawLayerMask() ;

/// @brief Method SetCurveDrawLayerMask addr 0x1fe86a0 size 0x8 virtual false final false
 void SetCurveDrawLayerMask(UnityEngine::LayerMask mask) ;

/// @brief Method get_CurveDisableScaleRotation addr 0x1fe86a8 size 0x8 virtual false final false
 bool get_CurveDisableScaleRotation() ;

/// @brief Method set_CurveDisableScaleRotation addr 0x1fe86b0 size 0xc virtual false final false
 void set_CurveDisableScaleRotation(bool value) ;

/// @brief Method get_CurveCookOnDrag addr 0x1fe86bc size 0x8 virtual false final false
 bool get_CurveCookOnDrag() ;

/// @brief Method set_CurveCookOnDrag addr 0x1fe86c4 size 0xc virtual false final false
 void set_CurveCookOnDrag(bool value) ;

/// @brief Method get_CurveFrameSelectedNodes addr 0x1fe86d0 size 0x8 virtual false final false
 bool get_CurveFrameSelectedNodes() ;

/// @brief Method set_CurveFrameSelectedNodes addr 0x1fe86d8 size 0xc virtual false final false
 void set_CurveFrameSelectedNodes(bool value) ;

/// @brief Method get_CurveFrameSelectedNodeDistance addr 0x1fe86e4 size 0x8 virtual false final false
 float_t get_CurveFrameSelectedNodeDistance() ;

/// @brief Method set_CurveFrameSelectedNodeDistance addr 0x1fe86ec size 0x8 virtual false final false
 void set_CurveFrameSelectedNodeDistance(float_t value) ;

/// @brief Method get_HandlesEnabled addr 0x1fe86f4 size 0x8 virtual false final false
 bool get_HandlesEnabled() ;

/// @brief Method set_HandlesEnabled addr 0x1fe86fc size 0xc virtual false final false
 void set_HandlesEnabled(bool value) ;

/// @brief Method get_EditableNodesToolsEnabled addr 0x1fe8708 size 0x8 virtual false final false
 bool get_EditableNodesToolsEnabled() ;

/// @brief Method set_EditableNodesToolsEnabled addr 0x1fe8710 size 0xc virtual false final false
 void set_EditableNodesToolsEnabled(bool value) ;

/// @brief Method get_ToolsInfo addr 0x1fe871c size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_ToolsInfo get_ToolsInfo() ;

/// @brief Method get_SerializedMetaData addr 0x1fe8724 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_AssetSerializedMetaData get_SerializedMetaData() ;

/// @brief Method get_PendingAutoCookOnMouseRelease addr 0x1fe872c size 0x8 virtual false final false
 bool get_PendingAutoCookOnMouseRelease() ;

/// @brief Method set_PendingAutoCookOnMouseRelease addr 0x1fe8734 size 0xc virtual false final false
 void set_PendingAutoCookOnMouseRelease(bool value) ;

/// @brief Method SetupAsset addr 0x1fe8740 size 0x37c virtual false final false
 void SetupAsset(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW filePath, UnityEngine::GameObject rootGameObject, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method CleanUpAndDisable addr 0x1fe8abc size 0x5c virtual false final false
 void CleanUpAndDisable() ;

/// @brief Method IsAssetSavedInScene addr 0x1fe8dbc size 0x18 virtual false final false
 bool IsAssetSavedInScene() ;

/// @brief Method Awake addr 0x1fe8dd4 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method InvalidateAsset addr 0x1fe8b18 size 0xc virtual false final false
 void InvalidateAsset() ;

/// @brief Method OnEnable addr 0x1fe8dd8 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x1fe8ddc size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method AssetUpdate addr 0x1fe8de0 size 0x4 virtual false final false
 void AssetUpdate() ;

/// @brief Method PostAssetUpdate addr 0x1fe8de4 size 0x4 virtual false final false
 void PostAssetUpdate() ;

/// @brief Method RequestResetParameters addr 0x1fe8de8 size 0x4 virtual false final false
 void RequestResetParameters(bool bAsync) ;

/// @brief Method RequestReload addr 0x1fe8dec size 0x4 virtual false final false
 void RequestReload(bool bAsync) ;

/// @brief Method RequestCook addr 0x1fd85e0 size 0x4 virtual false final false
 void RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters) ;

/// @brief Method RequestBakeInPlace addr 0x1fe8df0 size 0x18 virtual false final false
 void RequestBakeInPlace() ;

/// @brief Method ClearBuildRequest addr 0x1fe8e08 size 0x10 virtual false final false
 void ClearBuildRequest() ;

/// @brief Method HasValidAssetPath addr 0x1fe8e18 size 0x20 virtual false final false
 bool HasValidAssetPath() ;

/// @brief Method ProcessRebuild addr 0x1fe8e38 size 0x28c virtual false final false
 void ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) ;

/// @brief Method InvokeReloadEvent addr 0x1fe9bb8 size 0x154 virtual false final false
 void InvokeReloadEvent(bool bCookSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method StartRebuild addr 0x1fe9338 size 0x198 virtual false final false
 bool StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) ;

/// @brief Method FinishRebuild addr 0x1fe94d0 size 0x588 virtual false final false
 bool FinishRebuild() ;

/// @brief Method RecookAsync addr 0x1febb4c size 0x104 virtual false final false
 bool RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync) ;

/// @brief Method RecookBlocking addr 0x1fec318 size 0x110 virtual false final false
 bool RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync) ;

/// @brief Method DoPostCookWork addr 0x1fec6c8 size 0x17c virtual false final false
 void DoPostCookWork(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method IsValidForInteraction addr 0x1fec844 size 0x70 virtual false final false
 bool IsValidForInteraction(ByRef<::StringW> errorMessage) ;

/// @brief Method OnValidate addr 0x1fec8b4 size 0x30 virtual false final false
 void OnValidate() ;

/// @brief Method ExecutePostCookCallbacks addr 0x1fec26c size 0xac virtual false final false
 void ExecutePostCookCallbacks() ;

/// @brief Method InvokePostCookEvent addr 0x1fec8e4 size 0x154 virtual false final false
 void InvokePostCookEvent(bool bCookSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method InternalStartRecook addr 0x1febc50 size 0x61c virtual false final false
 bool InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync) ;

/// @brief Method InternalSetAssetID addr 0x1fe9d68 size 0x188 virtual false final false
 void InternalSetAssetID(int32_t assetID) ;

/// @brief Method SetCookStatus addr 0x1fe9a58 size 0xc virtual false final false
 void SetCookStatus(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus status, HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult result) ;

/// @brief Method GetCookStatus addr 0x1fed654 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus GetCookStatus() ;

/// @brief Method ProcessPoskCook addr 0x1fed65c size 0x38c virtual false final false
 void ProcessPoskCook() ;

/// @brief Method StartHoudiniCookNode addr 0x1fed5e8 size 0x6c virtual false final false
 bool StartHoudiniCookNode(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ProcessHoudiniCookStatus addr 0x1fec428 size 0x2a0 virtual false final false
 void ProcessHoudiniCookStatus(bool bAsync) ;

/// @brief Method DoesAssetRequireRecook addr 0x1fee958 size 0x3f0 virtual false final false
 bool DoesAssetRequireRecook() ;

/// @brief Method DeleteSessionDataOnly addr 0x1feed48 size 0x64 virtual false final false
 void DeleteSessionDataOnly() ;

/// @brief Method DeleteAllGeneratedData addr 0x1fe8b24 size 0x298 virtual false final false
 void DeleteAllGeneratedData(bool bIsRebuild) ;

/// @brief Method CleanUpInputNodes addr 0x1fef094 size 0x2a0 virtual false final false
 void CleanUpInputNodes() ;

/// @brief Method DeleteAssetCacheData addr 0x1fef454 size 0x34 virtual false final false
 void DeleteAssetCacheData(bool bRegisterUndo) ;

/// @brief Method GenerateParameters addr 0x1feacdc size 0x214 virtual false final false
 void GenerateParameters(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DownloadParameterPresetFromHoudini addr 0x1fed9e8 size 0x98 virtual false final false
 void DownloadParameterPresetFromHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadParameterPresetToHoudini addr 0x1fecb8c size 0x1dc virtual false final false
 void UploadParameterPresetToHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UpdateParameterInputsToHoudini addr 0x1fecd68 size 0xa4 virtual false final false
 void UpdateParameterInputsToHoudini(HoudiniEngineUnity::HEU_SessionBase session, bool bForceUpdate) ;

/// @brief Method LoadAssetFileWithSubasset addr 0x1fe9ef0 size 0x5f4 virtual false final false
 bool LoadAssetFileWithSubasset(HoudiniEngineUnity::HEU_SessionBase session, bool bPromptForSubasset, int32_t desiredSubassetIndex) ;

/// @brief Method CreateAndCookAsset addr 0x1fea4e4 size 0x28c virtual false final false
 bool CreateAndCookAsset(HoudiniEngineUnity::HEU_SessionBase session, int32_t subassetIndex, ByRef<int32_t> newAssetID, bool bCookTemplatedGeos) ;

/// @brief Method CreateAssetInputs addr 0x1fea7dc size 0x500 virtual false final false
 void CreateAssetInputs(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadCurvesParameters addr 0x1fece0c size 0x1e8 virtual false final false
 void UploadCurvesParameters(HoudiniEngineUnity::HEU_SessionBase session, bool bCheckParamsChanged) ;

/// @brief Method UploadAttributeValues addr 0x1fecff4 size 0x430 virtual false final false
 void UploadAttributeValues(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method SyncDirtyAttributesToHoudini addr 0x1fee308 size 0x164 virtual false final false
 void SyncDirtyAttributesToHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadInputNodes addr 0x1fed424 size 0x1c4 virtual false final false
 void UploadInputNodes(HoudiniEngineUnity::HEU_SessionBase session, bool bForceUpdate, bool bUpdateAll) ;

/// @brief Method HasInputNodeTransformChanged addr 0x1fef774 size 0x174 virtual false final false
 bool HasInputNodeTransformChanged() ;

/// @brief Method NotifyInputNodesCookFinished addr 0x1feba00 size 0x14c virtual false final false
 void NotifyInputNodesCookFinished() ;

/// @brief Method CreateObjects addr 0x1feaef0 size 0x174 virtual false final false
 bool CreateObjects(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UpdateAllObjectNodes addr 0x1fedcd8 size 0x630 virtual false final false
 void UpdateAllObjectNodes(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method CreateObjectNode addr 0x1fef8e8 size 0xd8 virtual false final false
 HoudiniEngineUnity::HEU_ObjectNode CreateObjectNode(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo, ByRef<HoudiniEngineUnity::HAPI_Transform> objectTranform) ;

/// @brief Method GenerateObjectsGeometry addr 0x1feb064 size 0x158 virtual false final false
 void GenerateObjectsGeometry(HoudiniEngineUnity::HEU_SessionBase session, bool bRebuild) ;

/// @brief Method GenerateAttributesStore addr 0x1feb4c4 size 0x154 virtual false final false
 void GenerateAttributesStore(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GenerateInstances addr 0x1feb1bc size 0x308 virtual false final false
 void GenerateInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GenerateHandles addr 0x1feb618 size 0x18c virtual false final false
 void GenerateHandles(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method CleanUpHandles addr 0x1fef334 size 0x120 virtual false final false
 void CleanUpHandles() ;

/// @brief Method GetHandleByName addr 0x1fef9c0 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_Handle GetHandleByName(::StringW handleName) ;

/// @brief Method GetHandles addr 0x1fefb50 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> GetHandles() ;

/// @brief Method NumHandles addr 0x1fefb58 size 0x4c virtual false final false
 int32_t NumHandles() ;

/// @brief Method GetObjectTransform addr 0x1fefba4 size 0x23c virtual false final false
 HoudiniEngineUnity::HAPI_Transform GetObjectTransform(HoudiniEngineUnity::HEU_SessionBase session, int32_t objectID) ;

/// @brief Method GetObjectWithID addr 0x1fefde0 size 0xd0 virtual false final false
 HoudiniEngineUnity::HEU_ObjectNode GetObjectWithID(int32_t objId) ;

/// @brief Method InvokeBakedEvent addr 0x1fefeb0 size 0x14c virtual false final false
 void InvokeBakedEvent(bool bSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects, bool isNewBake) ;

/// @brief Method CloneAssetWithoutHDA addr 0x1fefffc size 0x5d0 virtual false final false
 UnityEngine::GameObject CloneAssetWithoutHDA(ByRef<::StringW> bakedAssetPath, bool bWriteMeshesToAssetDatabase, bool bReconnectPrefabInstances) ;

/// @brief Method BakeToNewPrefab addr 0x1ff0744 size 0x3f8 virtual false final false
 UnityEngine::GameObject BakeToNewPrefab(::StringW destinationPrefabPath) ;

/// @brief Method BakeToNewStandalone addr 0x1ff0b3c size 0x1c8 virtual false final false
 UnityEngine::GameObject BakeToNewStandalone() ;

/// @brief Method BakeToExistingPrefab addr 0x1ff0d04 size 0x640 virtual false final false
 void BakeToExistingPrefab(UnityEngine::GameObject bakeTargetGO) ;

/// @brief Method BakeToExistingStandalone addr 0x1ff1344 size 0xc14 virtual false final false
 void BakeToExistingStandalone(UnityEngine::GameObject bakeTargetGO) ;

/// @brief Method NotifyUpstreamCooked addr 0x1ff1f58 size 0x2c virtual false final false
 void NotifyUpstreamCooked(HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset, bool bSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> outputs) ;

/// @brief Method ConnectToUpstream addr 0x1ff1f84 size 0x90 virtual false final false
 void ConnectToUpstream(HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset) ;

/// @brief Method DisconnectFromUpstream addr 0x1ff2094 size 0x90 virtual false final false
 void DisconnectFromUpstream(HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset) ;

/// @brief Method AddDownstreamConnection addr 0x1ff2014 size 0x80 virtual false final false
 void AddDownstreamConnection(UnityEngine::Events::UnityAction_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>> receiver) ;

/// @brief Method RemoveDownstreamConnection addr 0x1ff2124 size 0x58 virtual false final false
 void RemoveDownstreamConnection(UnityEngine::Events::UnityAction_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>> receiver) ;

/// @brief Method ClearAllUpstreamConnections addr 0x1feee1c size 0x278 virtual false final false
 void ClearAllUpstreamConnections() ;

/// @brief Method UpdateInputsOnAssetRecreation addr 0x1feca38 size 0x154 virtual false final false
 void UpdateInputsOnAssetRecreation(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ReconnectInputsUpstreamNotifications addr 0x1ff217c size 0x194 virtual false final false
 void ReconnectInputsUpstreamNotifications() ;

/// @brief Method GetHoudiniTransformAndApply addr 0x1ff2310 size 0x2c8 virtual false final false
 void GetHoudiniTransformAndApply(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadUnityTransform addr 0x1feb7a4 size 0x25c virtual false final false
 void UploadUnityTransform(HoudiniEngineUnity::HEU_SessionBase session, bool bOnlySendIfChangedFromLastSync) ;

/// @brief Method GetMaterialData addr 0x1ff25d8 size 0x1a8 virtual false final false
 HoudiniEngineUnity::HEU_MaterialData GetMaterialData(UnityEngine::Material material) ;

/// @brief Method GetMaterialCache addr 0x1ff2780 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> GetMaterialCache() ;

/// @brief Method ClearMaterialCache addr 0x1feedac size 0x70 virtual false final false
 void ClearMaterialCache() ;

/// @brief Method UpdateHoudiniMaterials addr 0x1feda80 size 0x258 virtual false final false
 void UpdateHoudiniMaterials(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method RemoveUnusedMaterials addr 0x1fee4e8 size 0x470 virtual false final false
 void RemoveUnusedMaterials() ;

/// @brief Method RemoveMaterial addr 0x1ff2818 size 0x144 virtual false final false
 void RemoveMaterial(UnityEngine::Material material) ;

/// @brief Method IsAssetValidInHoudini addr 0x1fe9d0c size 0x5c virtual false final false
 bool IsAssetValidInHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method IsAssetValid addr 0x1ff295c size 0x3c virtual false final false
 bool IsAssetValid() ;

/// @brief Method HasTransformChangedSinceLastUpdate addr 0x1ff2998 size 0x94 virtual false final false
 bool HasTransformChangedSinceLastUpdate() ;

/// @brief Method GetClonableParts addr 0x1ff05cc size 0x178 virtual false final false
 void GetClonableParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> clonableParts) ;

/// @brief Method GetOutputGameObjects addr 0x1fe9a64 size 0x154 virtual false final false
 void GetOutputGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method GetOutput addr 0x1ff2a2c size 0x154 virtual false final false
 void GetOutput(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput> outputs) ;

/// @brief Method GetOutputGeoNodes addr 0x1ff2b80 size 0x154 virtual false final false
 void GetOutputGeoNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode> outputGeoNodes) ;

/// @brief Method GetInternalHDAPartWithGameObject addr 0x1ff2cd4 size 0x1ac virtual false final false
 HoudiniEngineUnity::HEU_PartData GetInternalHDAPartWithGameObject(UnityEngine::GameObject outputGameObject) ;

/// @brief Method GetCurves addr 0x1ff2e80 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> GetCurves() ;

/// @brief Method GetCurve addr 0x1ff2e88 size 0x1cc virtual false final false
 HoudiniEngineUnity::HEU_Curve GetCurve(::StringW curveName) ;

/// @brief Method ClearInvalidCurves addr 0x1fef488 size 0x104 virtual false final false
 void ClearInvalidCurves() ;

/// @brief Method GetEditableCurveCount addr 0x1ff3054 size 0x158 virtual false final false
 int32_t GetEditableCurveCount() ;

/// @brief Method AddCurve addr 0x1fddac8 size 0xd4 virtual false final false
 void AddCurve(HoudiniEngineUnity::HEU_Curve curve) ;

/// @brief Method RemoveCurve addr 0x1fe4018 size 0x58 virtual false final false
 void RemoveCurve(HoudiniEngineUnity::HEU_Curve curve) ;

/// @brief Method AddCurveDrawCollider addr 0x1ff31ac size 0xd4 virtual false final false
 void AddCurveDrawCollider(UnityEngine::Collider newCollider) ;

/// @brief Method RemoveCurveDrawCollider addr 0x1ff3280 size 0x60 virtual false final false
 void RemoveCurveDrawCollider(UnityEngine::Collider collider) ;

/// @brief Method ClearCurveDrawColliders addr 0x1ff32e0 size 0x6c virtual false final false
 void ClearCurveDrawColliders() ;

/// @brief Method GetInputNodes addr 0x1ff334c size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputNode> GetInputNodes() ;

/// @brief Method GetInputNode addr 0x1ff3354 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_InputNode GetInputNode(::StringW inputName) ;

/// @brief Method GetAssetInputNode addr 0x1fef58c size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_InputNode GetAssetInputNode(::StringW inputName) ;

/// @brief Method GetInputNodeByIndex addr 0x1ff34e4 size 0x84 virtual false final false
 HoudiniEngineUnity::HEU_InputNode GetInputNodeByIndex(int32_t index) ;

/// @brief Method GetNonParameterInputNodes addr 0x1ff3568 size 0x210 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputNode> GetNonParameterInputNodes() ;

/// @brief Method AddInputNode addr 0x1fe56bc size 0xd4 virtual false final false
 void AddInputNode(HoudiniEngineUnity::HEU_InputNode node) ;

/// @brief Method RemoveInputNode addr 0x1fe3fc0 size 0x58 virtual false final false
 void RemoveInputNode(HoudiniEngineUnity::HEU_InputNode node) ;

/// @brief Method InputNodeNotifyRemoved addr 0x1ff3778 size 0x4 virtual false final false
 void InputNodeNotifyRemoved(HoudiniEngineUnity::HEU_InputNode node) ;

/// @brief Method GetVolumeCacheCount addr 0x1ff377c size 0x48 virtual false final false
 int32_t GetVolumeCacheCount() ;

/// @brief Method GetVolumeCaches addr 0x1ff37c4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> GetVolumeCaches() ;

/// @brief Method AddVolumeCache addr 0x1ff37cc size 0xd4 virtual false final false
 void AddVolumeCache(HoudiniEngineUnity::HEU_VolumeCache cache) ;

/// @brief Method RemoveVolumeCache addr 0x1fe80bc size 0xa8 virtual false final false
 void RemoveVolumeCache(HoudiniEngineUnity::HEU_VolumeCache cache) ;

/// @brief Method GetAttributesStores addr 0x1ff38a0 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributesStore> GetAttributesStores() ;

/// @brief Method NumAttributeStores addr 0x1ff38a8 size 0x4c virtual false final false
 int32_t NumAttributeStores() ;

/// @brief Method GetAttributeStore addr 0x1ff38f4 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_AttributesStore GetAttributeStore(::StringW geoName, int32_t partID) ;

/// @brief Method AddAttributeStore addr 0x1ff3a84 size 0x19c virtual false final false
 void AddAttributeStore(HoudiniEngineUnity::HEU_AttributesStore attributeStore) ;

/// @brief Method RemoveAttributeStore addr 0x1fef71c size 0x58 virtual false final false
 void RemoveAttributeStore(HoudiniEngineUnity::HEU_AttributesStore attributeStore) ;

/// @brief Method ReorderAttributeStore addr 0x1ff3c20 size 0x110 virtual false final false
 void ReorderAttributeStore(int32_t oldIndex, int32_t newIndex) ;

/// @brief Method GetSceneHDAPartWithGameObject addr 0x1ff3d30 size 0x144 virtual false final false
static HoudiniEngineUnity::HEU_PartData GetSceneHDAPartWithGameObject(UnityEngine::GameObject outputGameObject) ;

/// @brief Method GetSceneHDAAssetFromGameObject addr 0x1ff3e74 size 0x144 virtual false final false
static HoudiniEngineUnity::HEU_HoudiniAsset GetSceneHDAAssetFromGameObject(UnityEngine::GameObject outputGameObject) ;

/// @brief Method IsHoudiniAssetOutput addr 0x1ff3fb8 size 0x150 virtual false final false
static bool IsHoudiniAssetOutput(UnityEngine::GameObject go) ;

/// @brief Method IsHoudiniAssetRoot addr 0x1ff4108 size 0x8c virtual false final false
static bool IsHoudiniAssetRoot(UnityEngine::GameObject go) ;

/// @brief Method PopulateObjectInstanceInfos addr 0x1ff4194 size 0x190 virtual false final false
 void PopulateObjectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> objInstanceInfos) ;

/// @brief Method AddToAssetDBCache addr 0x1ff4324 size 0x60 virtual false final false
 void AddToAssetDBCache(::StringW assetObjectFileName, UnityEngine::Object objectToAdd, ::StringW relativeFolderPath, ByRef<UnityEngine::Object> targetAssetDBObject) ;

/// @brief Method SetCurvesVisibilityInScene addr 0x1ff4384 size 0x1e4 virtual false final false
static void SetCurvesVisibilityInScene(bool bShow) ;

/// @brief Method GetAssetSession addr 0x1fd85e4 size 0x15c virtual false final false
 HoudiniEngineUnity::HEU_SessionBase GetAssetSession(bool bCreateIfInvalid) ;

/// @brief Method GetValidAssetCacheFolderPath addr 0x1ff2788 size 0x90 virtual false final false
 ::StringW GetValidAssetCacheFolderPath() ;

/// @brief Method HideAllGeometry addr 0x1ff4568 size 0x14c virtual false final false
 void HideAllGeometry() ;

/// @brief Method CalculateVisibility addr 0x1ff46b4 size 0x14c virtual false final false
 void CalculateVisibility() ;

/// @brief Method DisableAllColliders addr 0x1ff4800 size 0x14c virtual false final false
 void DisableAllColliders() ;

/// @brief Method CalculateColliderState addr 0x1ff494c size 0x14c virtual false final false
 void CalculateColliderState() ;

/// @brief Method DuplicateAsset addr 0x1ff4a98 size 0x304 virtual false final false
 UnityEngine::GameObject DuplicateAsset(UnityEngine::GameObject newRootGameObject) ;

/// @brief Method GetObjectNodeByName addr 0x1fd8fc0 size 0x26c virtual false final false
 HoudiniEngineUnity::HEU_ObjectNode GetObjectNodeByName(::StringW objName) ;

/// @brief Method ResetMaterialOverrides addr 0x1ff5988 size 0x17c virtual false final false
 void ResetMaterialOverrides() ;

/// @brief Method ResetParametersToDefault addr 0x1ff5b04 size 0x3f0 virtual false final false
 void ResetParametersToDefault() ;

/// @brief Method GetAssetPreset addr 0x1fdb768 size 0x7dc virtual false final false
 HoudiniEngineUnity::HEU_AssetPreset GetAssetPreset() ;

/// @brief Method LoadAssetPresetAndCook addr 0x1fdc5bc size 0x508 virtual false final false
 void LoadAssetPresetAndCook(HoudiniEngineUnity::HEU_AssetPreset assetPreset) ;

/// @brief Method ApplyRecookPreset addr 0x1fee46c size 0x7c virtual false final false
 void ApplyRecookPreset() ;

/// @brief Method ApplyInputPresets addr 0x1ff5ef4 size 0x390 virtual false final false
 bool ApplyInputPresets(HoudiniEngineUnity::HEU_SessionBase session, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputPreset> inputPresets, bool bAddMissingInputsToRecookPreset) ;

/// @brief Method GetVolumeCachePreset addr 0x1ff6748 size 0x1dc virtual false final false
 HoudiniEngineUnity::HEU_VolumeCachePreset GetVolumeCachePreset(::StringW objName, ::StringW geoName, int32_t tile) ;

/// @brief Method RemoveVolumeCachePreset addr 0x1ff6924 size 0x68 virtual false final false
 void RemoveVolumeCachePreset(HoudiniEngineUnity::HEU_VolumeCachePreset preset) ;

/// @brief Method ApplyVolumeCachePresets addr 0x1ff6284 size 0x4c4 virtual false final false
 bool ApplyVolumeCachePresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCachePreset> volumeCachePresets) ;

/// @brief Method SyncInternalParametersForUndoCompare addr 0x1ff698c size 0x204 virtual false final false
 void SyncInternalParametersForUndoCompare() ;

/// @brief Method UpdateSessionSync addr 0x1ff6b90 size 0xe8 virtual false final false
 bool UpdateSessionSync() ;

/// @brief Method UpdateTotalCookCount addr 0x1fea770 size 0x6c virtual false final false
 void UpdateTotalCookCount() ;

/// @brief Method ResetAndCopyInstantiatedProperties addr 0x1ff6c78 size 0x324 virtual false final false
 void ResetAndCopyInstantiatedProperties(HoudiniEngineUnity::HEU_HoudiniAsset newAsset) ;

/// @brief Method GetInstantiationMethod addr 0x1ff6f9c size 0x1f8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod GetInstantiationMethod() ;

/// @brief Method GetInstantiatedObject addr 0x1ff7194 size 0x94 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset GetInstantiatedObject() ;

/// @brief Method ClearInvalidLists addr 0x1fe90c4 size 0x274 virtual false final false
 void ClearInvalidLists() ;

/// @brief Method CopyPropertiesTo addr 0x1ff4d9c size 0xbec virtual false final false
 void CopyPropertiesTo(HoudiniEngineUnity::HEU_HoudiniAsset newAsset) ;

/// @brief Method SetSoftDeleted addr 0x1ff7228 size 0x204 virtual false final false
 void SetSoftDeleted() ;

/// @brief Method IsEquivalentTo addr 0x1ff742c size 0x10c4 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

// Ctor Parameters []
explicit HEU_HoudiniAsset() ;

/// @brief Method .ctor addr 0x1ff84f0 size 0x12a4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetBuildAction");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetCookResult");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetCookStatus");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetInstantiationMethod");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, "HoudiniEngineUnity", "HEU_HoudiniAsset/HEU_AssetType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_HoudiniAsset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniAsset, "HoudiniEngineUnity", "HEU_HoudiniAsset");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate, "HoudiniEngineUnity", "HEU_HoudiniAsset/UpdateUIDelegate");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c__DisplayClass281_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c__DisplayClass365_0");
