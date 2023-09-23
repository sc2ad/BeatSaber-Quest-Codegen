#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class ProviderOperation_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::cordl_internals::il2cpp_reference_type TObject>
class ProviderOperation_1<TObject>;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::ProviderOperation`1
// Type: UnityEngine.ResourceManagement.AsyncOperations::ProviderOperation`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(14321)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 765 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14321), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.ProviderOperation`1
class CORDL_TYPE ProviderOperation_1<TObject> : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation
constexpr operator  UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation() const noexcept;

/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::ICachable
constexpr operator  UnityEngine::ResourceManagement::AsyncOperations::ICachable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProviderOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderOperation_1", modifiers: " const&", def_value: None }]
constexpr ProviderOperation_1(ProviderOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderOperation_1", modifiers: "&&", def_value: None }]
constexpr ProviderOperation_1(ProviderOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderOperation_1(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>(ptr) {
}


  constexpr ProviderOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderOperation_1& operator=(ProviderOperation_1&& o) noexcept = default;
  constexpr ProviderOperation_1& operator=(ProviderOperation_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;

 System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception> __declspec(property(get=__get_m_CompletionCallback, put=__set_m_CompletionCallback))  m_CompletionCallback;

constexpr void __set_m_CompletionCallback(System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception> value) ;

constexpr System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception> __get_m_CompletionCallback() const;

 System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_GetDepCallback, put=__set_m_GetDepCallback))  m_GetDepCallback;

constexpr void __set_m_GetDepCallback(System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>> __get_m_GetDepCallback() const;

 System::Func_1<float_t> __declspec(property(get=__get_m_GetProgressCallback, put=__set_m_GetProgressCallback))  m_GetProgressCallback;

constexpr void __set_m_GetProgressCallback(System::Func_1<float_t> value) ;

constexpr System::Func_1<float_t> __get_m_GetProgressCallback() const;

 System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> __declspec(property(get=__get_m_GetDownloadProgressCallback, put=__set_m_GetDownloadProgressCallback))  m_GetDownloadProgressCallback;

constexpr void __set_m_GetDownloadProgressCallback(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> value) ;

constexpr System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> __get_m_GetDownloadProgressCallback() const;

 System::Func_1<bool> __declspec(property(get=__get_m_WaitForCompletionCallback, put=__set_m_WaitForCompletionCallback))  m_WaitForCompletionCallback;

constexpr void __set_m_WaitForCompletionCallback(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_m_WaitForCompletionCallback() const;

 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __declspec(property(get=__get_m_DownloadStatus, put=__set_m_DownloadStatus))  m_DownloadStatus;

constexpr void __set_m_DownloadStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __get_m_DownloadStatus() const;

 UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider __declspec(property(get=__get_m_Provider, put=__set_m_Provider))  m_Provider;

constexpr void __set_m_Provider(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider __get_m_Provider() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_DepOp() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_m_Location, put=__set_m_Location))  m_Location;

constexpr void __set_m_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_m_Location() const;

 int32_t __declspec(property(get=__get_m_ProvideHandleVersion, put=__set_m_ProvideHandleVersion))  m_ProvideHandleVersion;

constexpr void __set_m_ProvideHandleVersion(int32_t value) ;

constexpr int32_t __get_m_ProvideHandleVersion() const;

 bool __declspec(property(get=__get_m_NeedsRelease, put=__set_m_NeedsRelease))  m_NeedsRelease;

constexpr void __set_m_NeedsRelease(bool value) ;

constexpr bool __get_m_NeedsRelease() const;

 UnityEngine::ResourceManagement::Util::IOperationCacheKey __declspec(property(get=__get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField, put=__set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField))  _UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;

constexpr void __set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(UnityEngine::ResourceManagement::Util::IOperationCacheKey value) ;

constexpr UnityEngine::ResourceManagement::Util::IOperationCacheKey __get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const;

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get_m_ResourceManager, put=__set_m_ResourceManager))  m_ResourceManager;

constexpr void __set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr UnityEngine::ResourceManagement::ResourceManager __get_m_ResourceManager() const;

/// @brief Field k_OperationWaitingToCompletePercentComplete offset 0
static constexpr float_t  k_OperationWaitingToCompletePercentComplete{0.99};

/// @brief Field kInvalidHandleMsg offset 0
static constexpr ::ConstString  kInvalidHandleMsg{u"The ProvideHandle is invalid. After the handle has been completed, it can no longer be used"};


// Properties

 UnityEngine::ResourceManagement::Util::IOperationCacheKey __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key, put=UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key))  UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key;

 int32_t __declspec(property(get=get_ProvideHandleVersion))  ProvideHandleVersion;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location))  Location;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 System::Type __declspec(property(get=get_RequestedType))  RequestedType;

 int32_t __declspec(property(get=get_DependencyCount))  DependencyCount;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(UnityEngine::ResourceManagement::Util::IOperationCacheKey value) ;

/// @brief Method get_ProvideHandleVersion addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_ProvideHandleVersion() ;

/// @brief Method get_Location addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

/// @brief Method SetDownloadProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetDownloadProgressCallback(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> callback) ;

/// @brief Method SetWaitForCompletionCallback addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetWaitForCompletionCallback(System::Func_1<bool> callback) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

// Ctor Parameters []
explicit ProviderOperation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseDependencies() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetDependencies(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> dstList) ;

/// @brief Method get_RequestedType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type get_RequestedType() ;

/// @brief Method get_DependencyCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_DependencyCount() ;

/// @brief Method GetDependency addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TDepObject>
 TDepObject GetDependency(int32_t index) ;

/// @brief Method SetProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetProgressCallback(System::Func_1<float_t> callback) ;

/// @brief Method ProviderCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void ProviderCompleted(T result, bool status, System::Exception e) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_Progress() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
 void Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
 void Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp, bool releaseDependenciesOnFailure) ;

/// @brief Method WaitForCompletionHandler addr 0x0 size 0xffffffffffffffff virtual false final false
 bool WaitForCompletionHandler() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void Destroy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1, "UnityEngine.ResourceManagement.AsyncOperations", "ProviderOperation`1");
