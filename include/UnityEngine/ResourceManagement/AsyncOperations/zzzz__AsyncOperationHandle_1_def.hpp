#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class AsyncOperationBase_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::cordl_internals::is_or_is_backed_by<int64_t> TObject>
struct AsyncOperationHandle_1<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::cordl_internals::il2cpp_reference_type TObject>
struct AsyncOperationHandle_1<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
struct AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
struct AsyncOperationHandle_1<bool>;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int64_t> TObject>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 830 })
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
struct CORDL_TYPE AsyncOperationHandle_1<TObject> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() const;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> m_InternalOp, int32_t m_Version, ::StringW m_LocationName, bool m_UnloadSceneOpExcludeReleaseCallback) noexcept;


                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1 const&) = default;
                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1&&) = default;
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __get_m_InternalOp() const;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName))  m_LocationName;

constexpr void __set_m_LocationName(::StringW value) ;

constexpr ::StringW __get_m_LocationName() const;

 bool __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback))  m_UnloadSceneOpExcludeReleaseCallback;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool value) ;

constexpr bool __get_m_UnloadSceneOpExcludeReleaseCallback() const;


// Properties

 ::StringW __declspec(property(get=get_LocationName, put=set_LocationName))  LocationName;

 bool __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback))  UnloadSceneOpExcludeReleaseCallback;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __declspec(property(get=get_InternalOp))  InternalOp;

 bool __declspec(property(get=get_IsDone))  IsDone;

 System::Exception __declspec(property(get=get_OperationException))  OperationException;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 TObject __declspec(property(get=get_Result))  Result;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 System::Threading::Tasks::Task_1<TObject> __declspec(property(get=get_Task))  Task;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_LocationName(::StringW value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_UnloadSceneOpExcludeReleaseCallback(bool value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit_UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, ::StringW locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version, ::StringW locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 TObject WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Exception get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 TObject get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<TObject> get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 772 })
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
struct CORDL_TYPE AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() const;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_InternalOp, int32_t m_Version, ::StringW m_LocationName, bool m_UnloadSceneOpExcludeReleaseCallback) noexcept;


                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1 const&) = default;
                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1&&) = default;
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_InternalOp() const;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName))  m_LocationName;

constexpr void __set_m_LocationName(::StringW value) ;

constexpr ::StringW __get_m_LocationName() const;

 bool __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback))  m_UnloadSceneOpExcludeReleaseCallback;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool value) ;

constexpr bool __get_m_UnloadSceneOpExcludeReleaseCallback() const;


// Properties

 ::StringW __declspec(property(get=get_LocationName, put=set_LocationName))  LocationName;

 bool __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback))  UnloadSceneOpExcludeReleaseCallback;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=get_InternalOp))  InternalOp;

 bool __declspec(property(get=get_IsDone))  IsDone;

 System::Exception __declspec(property(get=get_OperationException))  OperationException;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=get_Result))  Result;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=get_Task))  Task;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_LocationName(::StringW value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_UnloadSceneOpExcludeReleaseCallback(bool value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit_UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, ::StringW locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version, ::StringW locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Exception get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 99 })
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
struct CORDL_TYPE AsyncOperationHandle_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>() const;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> m_InternalOp, int32_t m_Version, ::StringW m_LocationName, bool m_UnloadSceneOpExcludeReleaseCallback) noexcept;


                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1 const&) = default;
                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1&&) = default;
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> __get_m_InternalOp() const;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName))  m_LocationName;

constexpr void __set_m_LocationName(::StringW value) ;

constexpr ::StringW __get_m_LocationName() const;

 bool __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback))  m_UnloadSceneOpExcludeReleaseCallback;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool value) ;

constexpr bool __get_m_UnloadSceneOpExcludeReleaseCallback() const;


// Properties

 ::StringW __declspec(property(get=get_LocationName, put=set_LocationName))  LocationName;

 bool __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback))  UnloadSceneOpExcludeReleaseCallback;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> __declspec(property(get=get_InternalOp))  InternalOp;

 bool __declspec(property(get=get_IsDone))  IsDone;

 System::Exception __declspec(property(get=get_OperationException))  OperationException;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 bool __declspec(property(get=get_Result))  Result;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 System::Threading::Tasks::Task_1<bool> __declspec(property(get=get_Task))  Task;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_LocationName(::StringW value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_UnloadSceneOpExcludeReleaseCallback(bool value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit_UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, ::StringW locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version, ::StringW locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 bool WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Exception get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<bool> get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
struct CORDL_TYPE AsyncOperationHandle_1<TObject> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() const;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> m_InternalOp, int32_t m_Version, ::StringW m_LocationName, bool m_UnloadSceneOpExcludeReleaseCallback) noexcept;


                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1 const&) = default;
                    constexpr AsyncOperationHandle_1(AsyncOperationHandle_1&&) = default;
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationHandle_1& operator=(AsyncOperationHandle_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __get_m_InternalOp() const;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName))  m_LocationName;

constexpr void __set_m_LocationName(::StringW value) ;

constexpr ::StringW __get_m_LocationName() const;

 bool __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback))  m_UnloadSceneOpExcludeReleaseCallback;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool value) ;

constexpr bool __get_m_UnloadSceneOpExcludeReleaseCallback() const;


// Properties

 ::StringW __declspec(property(get=get_LocationName, put=set_LocationName))  LocationName;

 bool __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback))  UnloadSceneOpExcludeReleaseCallback;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> __declspec(property(get=get_InternalOp))  InternalOp;

 bool __declspec(property(get=get_IsDone))  IsDone;

 System::Exception __declspec(property(get=get_OperationException))  OperationException;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 TObject __declspec(property(get=get_Result))  Result;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 System::Threading::Tasks::Task_1<TObject> __declspec(property(get=get_Task))  Task;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_LocationName(::StringW value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_UnloadSceneOpExcludeReleaseCallback(bool value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit_UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, ::StringW locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version, ::StringW locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 TObject WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Exception get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 TObject get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<TObject> get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1");
