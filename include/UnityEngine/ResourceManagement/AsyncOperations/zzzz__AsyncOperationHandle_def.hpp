#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14315))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct CORDL_TYPE AsyncOperationHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation m_InternalOp, int32_t m_Version, ::StringW m_LocationName) noexcept;


                    constexpr AsyncOperationHandle(AsyncOperationHandle const&) = default;
                    constexpr AsyncOperationHandle(AsyncOperationHandle&&) = default;
                    constexpr AsyncOperationHandle& operator=(AsyncOperationHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationHandle& operator=(AsyncOperationHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation __get_m_InternalOp() const;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName))  m_LocationName;

constexpr void __set_m_LocationName(::StringW value) ;

constexpr ::StringW __get_m_LocationName() const;


// Properties

 ::StringW __declspec(property(get=get_LocationName, put=set_LocationName))  LocationName;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation __declspec(property(get=get_InternalOp))  InternalOp;

 bool __declspec(property(get=get_IsDone))  IsDone;

 ::System::Exception __declspec(property(get=get_OperationException))  OperationException;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Result))  Result;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 ::System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Task))  Task;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method get_LocationName addr 0x2a44ee4 size 0x8 virtual false final false
 ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x2a44eec size 0x8 virtual false final false
 void set_LocationName(::StringW value) ;

/// @brief Method .ctor addr 0x2a44ef4 size 0xc4 virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op) ;

/// @brief Method .ctor addr 0x2a44fb8 size 0x10 virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version) ;

/// @brief Method .ctor addr 0x2a3437c size 0xd0 virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, ::StringW locationName) ;

/// @brief Method .ctor addr 0x2a44fc8 size 0x10 virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, int32_t version, ::StringW locationName) ;

/// @brief Method Acquire addr 0x2a353ac size 0xc4 virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Acquire() ;

/// @brief Method add_Completed addr 0x2a35900 size 0xb4 virtual false final false
 void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Completed addr 0x2a450d8 size 0xb4 virtual false final false
 void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> Convert() ;

/// @brief Method Equals addr 0x2a4518c size 0x2c virtual false final false
 bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle other) ;

/// @brief Method get_DebugName addr 0x2a451b8 size 0xdc virtual false final false
 ::StringW get_DebugName() ;

/// @brief Method add_Destroyed addr 0x2a4534c size 0xb4 virtual false final false
 void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x2a45400 size 0xb4 virtual false final false
 void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method GetDependencies addr 0x2a454b4 size 0xb4 virtual false final false
 void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method GetHashCode addr 0x2a45568 size 0x30 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_InternalOp addr 0x2a44fd8 size 0x100 virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation get_InternalOp() ;

/// @brief Method get_IsDone addr 0x2a45598 size 0xc8 virtual false final false
 bool get_IsDone() ;

/// @brief Method IsValid addr 0x2a45294 size 0xb8 virtual false final false
 bool IsValid() ;

/// @brief Method get_OperationException addr 0x2a45660 size 0xac virtual false final false
 ::System::Exception get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x2a4570c size 0xac virtual false final false
 float_t get_PercentComplete() ;

/// @brief Method GetDownloadStatus addr 0x2a457b8 size 0xa0 virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x2a45858 size 0x174 virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method get_ReferenceCount addr 0x2a459cc size 0xac virtual false final false
 int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x2a352d8 size 0xb4 virtual false final false
 void Release() ;

/// @brief Method get_Result addr 0x2a41de0 size 0xa8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Result() ;

/// @brief Method get_Status addr 0x2a45a78 size 0xac virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x2a45b24 size 0xac virtual false final false
 ::System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a45bd0 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x2a45bd4 size 0x18 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2a45bec size 0x4 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method WaitForCompletion addr 0x2a45bf0 size 0x14c virtual false final false
 ::bs_hook::Il2CppWrapperType WaitForCompletion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle");
