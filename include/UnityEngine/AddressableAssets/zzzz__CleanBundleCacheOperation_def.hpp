#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Threading {
class Thread;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CleanBundleCacheOperation;
}
// Type: UnityEngine.AddressableAssets::CleanBundleCacheOperation
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14313)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14374))
// CS Name: UnityEngine.AddressableAssets.CleanBundleCacheOperation
class CORDL_TYPE CleanBundleCacheOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ResourceManagement::IUpdateReceiver
constexpr operator  ::UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~CleanBundleCacheOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: " const&", def_value: None }]
constexpr CleanBundleCacheOperation(CleanBundleCacheOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: "&&", def_value: None }]
constexpr CleanBundleCacheOperation(CleanBundleCacheOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CleanBundleCacheOperation(void* ptr) noexcept : ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(ptr) {
}


  constexpr CleanBundleCacheOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CleanBundleCacheOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CleanBundleCacheOperation& operator=(CleanBundleCacheOperation&& o) noexcept = default;
  constexpr CleanBundleCacheOperation& operator=(CleanBundleCacheOperation const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr ::UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_DepOp() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_CacheDirsForRemoval, put=__set_m_CacheDirsForRemoval))  m_CacheDirsForRemoval;

constexpr void __set_m_CacheDirsForRemoval(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_m_CacheDirsForRemoval() const;

 ::System::Threading::Thread __declspec(property(get=__get_m_EnumerationThread, put=__set_m_EnumerationThread))  m_EnumerationThread;

constexpr void __set_m_EnumerationThread(::System::Threading::Thread value) ;

constexpr ::System::Threading::Thread __get_m_EnumerationThread() const;

 ::StringW __declspec(property(get=__get_m_BaseCachePath, put=__set_m_BaseCachePath))  m_BaseCachePath;

constexpr void __set_m_BaseCachePath(::StringW value) ;

constexpr ::StringW __get_m_BaseCachePath() const;

 bool __declspec(property(get=__get_m_UseMultiThreading, put=__set_m_UseMultiThreading))  m_UseMultiThreading;

constexpr void __set_m_UseMultiThreading(bool value) ;

constexpr bool __get_m_UseMultiThreading() const;


// Methods

// Ctor Parameters [CppParam { name: "aa", ty: "::UnityEngine::AddressableAssets::AddressablesImpl", modifiers: "", def_value: None }, CppParam { name: "forceSingleThreading", ty: "bool", modifiers: "", def_value: None }]
explicit CleanBundleCacheOperation(::UnityEngine::AddressableAssets::AddressablesImpl aa, bool forceSingleThreading) ;

/// @brief Method .ctor addr 0x2890ed8 size 0x84 virtual false final false
 void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl aa, bool forceSingleThreading) ;

/// @brief Method Start addr 0x2890f5c size 0x10c virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> Start(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp) ;

/// @brief Method CompleteInternal addr 0x289388c size 0x90 virtual false final false
 void CompleteInternal(bool result, bool success, ::StringW errorMsg) ;

/// @brief Method InvokeWaitForCompletion addr 0x289391c size 0xd0 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Destroy addr 0x2893b80 size 0x7c virtual true final false
 void Destroy() ;

/// @brief Method GetDependencies addr 0x2893bfc size 0x124 virtual true final false
 void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies) ;

/// @brief Method Execute addr 0x2893d20 size 0x1c0 virtual true final false
 void Execute() ;

/// @brief Method UnityEngine.ResourceManagement.IUpdateReceiver.Update addr 0x2894c10 size 0x40 virtual true final true
 void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime) ;

/// @brief Method RemoveCacheEntries addr 0x28939ec size 0x194 virtual false final false
 void RemoveCacheEntries() ;

/// @brief Method DetermineCacheDirsNotInUse addr 0x2894c50 size 0x84 virtual false final false
 void DetermineCacheDirsNotInUse(::bs_hook::Il2CppWrapperType data) ;

/// @brief Method DetermineCacheDirsNotInUse addr 0x2894810 size 0x400 virtual false final false
 void DetermineCacheDirsNotInUse(::System::Collections::Generic::HashSet_1<::StringW> cacheDirsInUse) ;

/// @brief Method GetCacheDirsInUse addr 0x2893ee0 size 0x930 virtual false final false
 ::System::Collections::Generic::HashSet_1<::StringW> GetCacheDirsInUse(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> catalogOps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::CleanBundleCacheOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, "UnityEngine.AddressableAssets", "CleanBundleCacheOperation");
