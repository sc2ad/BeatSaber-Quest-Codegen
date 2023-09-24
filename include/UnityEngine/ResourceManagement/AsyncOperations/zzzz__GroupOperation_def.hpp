#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
// Type: ::GroupOperationSettings
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14318))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GroupOperationSettings
struct CORDL_TYPE UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings(int32_t value__) noexcept;


                    constexpr UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings(UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings const&) = default;
                    constexpr UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings(UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings&&) = default;
                    constexpr UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings& operator=(UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings& operator=(UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings_Unwrapped : int32_t {
__None = 0,
__ReleaseDependenciesOnFailure = 1,
__AllowFailedDependencies = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings const None;

/// @brief Field ReleaseDependenciesOnFailure offset 0
static UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings const ReleaseDependenciesOnFailure;

/// @brief Field AllowFailedDependencies offset 0
static UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings const AllowFailedDependencies;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::GroupOperation
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14315)), TypeDefinitionIndex(TypeDefinitionIndex(14313)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3820), inst: 265 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 767 }), TypeDefinitionIndex(TypeDefinitionIndex(3820))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14319))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
class CORDL_TYPE GroupOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> {
public:
// Declarations
using GroupOperationSettings = UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings;

/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::ICachable
constexpr operator  UnityEngine::ResourceManagement::AsyncOperations::ICachable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~GroupOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupOperation", modifiers: " const&", def_value: None }]
constexpr GroupOperation(GroupOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupOperation", modifiers: "&&", def_value: None }]
constexpr GroupOperation(GroupOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupOperation(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(ptr) {
}


  constexpr GroupOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupOperation& operator=(GroupOperation&& o) noexcept = default;
  constexpr GroupOperation& operator=(GroupOperation const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get_m_InternalOnComplete, put=__set_m_InternalOnComplete))  m_InternalOnComplete;

constexpr void __set_m_InternalOnComplete(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get_m_InternalOnComplete() const;

 int32_t __declspec(property(get=__get_m_LoadedCount, put=__set_m_LoadedCount))  m_LoadedCount;

constexpr void __set_m_LoadedCount(int32_t value) ;

constexpr int32_t __get_m_LoadedCount() const;

 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings __declspec(property(get=__get_m_Settings, put=__set_m_Settings))  m_Settings;

constexpr void __set_m_Settings(UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings __get_m_Settings() const;

 ::StringW __declspec(property(get=__get_debugName, put=__set_debugName))  debugName;

constexpr void __set_debugName(::StringW value) ;

constexpr ::StringW __get_debugName() const;

/// @brief Field k_MaxDisplayedLocationLength offset 0
static constexpr int32_t  k_MaxDisplayedLocationLength{45};

 UnityEngine::ResourceManagement::Util::IOperationCacheKey __declspec(property(get=__get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField, put=__set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField))  _UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;

constexpr void __set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(UnityEngine::ResourceManagement::Util::IOperationCacheKey value) ;

constexpr UnityEngine::ResourceManagement::Util::IOperationCacheKey __get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get_m_CachedDependencyLocations, put=__set_m_CachedDependencyLocations))  m_CachedDependencyLocations;

constexpr void __set_m_CachedDependencyLocations(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get_m_CachedDependencyLocations() const;


// Properties

 UnityEngine::ResourceManagement::Util::IOperationCacheKey __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key, put=UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key))  UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

static UnityEngine::ResourceManagement::AsyncOperations::GroupOperation New_ctor() ;

/// @brief Method .ctor addr 0x2a45d74 size 0x138 virtual false final false
 void _ctor() ;

/// @brief Method InvokeWaitForCompletion addr 0x2a45eac size 0x3d8 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key addr 0x2a46284 size 0x8 virtual true final true
 UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key addr 0x2a4628c size 0x8 virtual true final true
 void UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(UnityEngine::ResourceManagement::Util::IOperationCacheKey value) ;

/// @brief Method GetDependentOps addr 0x2a358c4 size 0x3c virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> GetDependentOps() ;

/// @brief Method GetDependencies addr 0x2a46294 size 0x64 virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method ReleaseDependencies addr 0x2a462f8 size 0x254 virtual true final false
 void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x2a4654c size 0x260 virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method DependenciesAreUnchanged addr 0x2a467ac size 0x1cc virtual false final false
 bool DependenciesAreUnchanged(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method get_DebugName addr 0x2a46978 size 0x2d4 virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method Execute addr 0x2a46c4c size 0x218 virtual true final false
 void Execute() ;

/// @brief Method CompleteIfDependenciesComplete addr 0x2a46e64 size 0x308 virtual false final false
 void CompleteIfDependenciesComplete() ;

/// @brief Method Destroy addr 0x2a4716c size 0x10 virtual true final false
 void Destroy() ;

/// @brief Method get_Progress addr 0x2a4717c size 0x1f8 virtual true final false
 float_t get_Progress() ;

/// @brief Method Init addr 0x2a357d8 size 0xbc virtual false final false
 void Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> operations, bool releaseDependenciesOnFailure, bool allowFailedDependencies) ;

/// @brief Method Init addr 0x2a47374 size 0x98 virtual false final false
 void Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> operations, UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings settings) ;

/// @brief Method OnOperationCompleted addr 0x2a4740c size 0x10 virtual false final false
 void OnOperationCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation/GroupOperationSettings");
NEED_NO_BOX(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation");
