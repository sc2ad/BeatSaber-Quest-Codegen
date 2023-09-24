#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Task__TaskResult;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
class HEU_AssetTask;
}
// Type: ::BuildType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9742))
// CS Name: HoudiniEngineUnity.HEU_AssetTask::BuildType
struct CORDL_TYPE HoudiniEngineUnity__HEU_AssetTask__BuildType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AssetTask__BuildType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_AssetTask__BuildType(HoudiniEngineUnity__HEU_AssetTask__BuildType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_AssetTask__BuildType(HoudiniEngineUnity__HEU_AssetTask__BuildType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_AssetTask__BuildType& operator=(HoudiniEngineUnity__HEU_AssetTask__BuildType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_AssetTask__BuildType& operator=(HoudiniEngineUnity__HEU_AssetTask__BuildType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AssetTask__BuildType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_AssetTask__BuildType_Unwrapped : int32_t {
__NONE = 0,
__LOAD = 1,
__COOK = 2,
__RELOAD = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_AssetTask__BuildType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_AssetTask__BuildType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType const NONE;

/// @brief Field LOAD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType const LOAD;

/// @brief Field COOK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType const COOK;

/// @brief Field RELOAD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType const RELOAD;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetTask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9741))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9743))
// CS Name: HoudiniEngineUnity.HEU_AssetTask
class CORDL_TYPE HEU_AssetTask : public HoudiniEngineUnity::HEU_Task {
public:
// Declarations
using BuildType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HEU_AssetTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: " const&", def_value: None }]
constexpr HEU_AssetTask(HEU_AssetTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "&&", def_value: None }]
constexpr HEU_AssetTask(HEU_AssetTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetTask(void* ptr) noexcept : HoudiniEngineUnity::HEU_Task(ptr) {
}


  constexpr HEU_AssetTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetTask& operator=(HEU_AssetTask&& o) noexcept = default;
  constexpr HEU_AssetTask& operator=(HEU_AssetTask const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType __declspec(property(get=__get__buildType, put=__set__buildType))  _buildType;

constexpr void __set__buildType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType __get__buildType() const;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__asset, put=__set__asset))  _asset;

constexpr void __set__asset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__asset() const;

 ::StringW __declspec(property(get=__get__assetPath, put=__set__assetPath))  _assetPath;

constexpr void __set__assetPath(::StringW value) ;

constexpr ::StringW __get__assetPath() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 bool __declspec(property(get=__get__buildResult, put=__set__buildResult))  _buildResult;

constexpr void __set__buildResult(bool value) ;

constexpr bool __get__buildResult() const;

 int64_t __declspec(property(get=__get__forceSessionID, put=__set__forceSessionID))  _forceSessionID;

constexpr void __set__forceSessionID(int64_t value) ;

constexpr int64_t __get__forceSessionID() const;


// Methods

/// @brief Method GetTaskSession addr 0x2038fc4 size 0xb4 virtual false final false
 HoudiniEngineUnity::HEU_SessionBase GetTaskSession() ;

/// @brief Method DoTask addr 0x2039078 size 0x5b0 virtual true final false
 void DoTask() ;

/// @brief Method KillTask addr 0x2039650 size 0x240 virtual true final false
 void KillTask() ;

/// @brief Method CompleteTask addr 0x2039890 size 0x240 virtual true final false
 void CompleteTask(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Task__TaskResult result) ;

/// @brief Method CookCompletedCallback addr 0x2039ad0 size 0x80 virtual false final false
 void CookCompletedCallback(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool bSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> outputs) ;

/// @brief Method CookCompletedCallback addr 0x2039b50 size 0x10 virtual false final false
 void CookCompletedCallback(HoudiniEngineUnity::HEU_CookedEventData cookedEventData) ;

/// @brief Method CookCompletedCallback addr 0x2039b60 size 0x10 virtual false final false
 void CookCompletedCallback(HoudiniEngineUnity::HEU_ReloadEventData reloadEventData) ;

static HoudiniEngineUnity::HEU_AssetTask New_ctor() ;

/// @brief Method .ctor addr 0x2039b70 size 0xb8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetTask__BuildType, "HoudiniEngineUnity", "HEU_AssetTask/BuildType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_AssetTask);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetTask, "HoudiniEngineUnity", "HEU_AssetTask");
