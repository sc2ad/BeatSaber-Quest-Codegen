#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::IAsyncOperation
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14310))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
class CORDL_TYPE IAsyncOperation : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsyncOperation() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsyncOperation(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Type __declspec(property(get=get_ResultType))  ResultType;

 int32_t __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 int32_t __declspec(property(get=get_ReferenceCount))  ReferenceCount;

 float_t __declspec(property(get=get_PercentComplete))  PercentComplete;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus __declspec(property(get=get_Status))  Status;

 System::Exception __declspec(property(get=get_OperationException))  OperationException;

 bool __declspec(property(get=get_IsDone))  IsDone;

 System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(put=set_OnDestroy))  OnDestroy;

 bool __declspec(property(get=get_IsRunning))  IsRunning;

 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Task))  Task;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=get_Handle))  Handle;


// Methods

/// @brief Method GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetResultAsObject() ;

/// @brief Method get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_ResultType() ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Version() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void DecrementReferenceCount() ;

/// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void IncrementReferenceCount() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ReferenceCount() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_PercentComplete() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Exception get_OperationException() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsDone() ;

/// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsRunning() ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

/// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void InvokeCompletionEvent() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> get_Task() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 void Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks) ;

/// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Handle() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 void WaitForCompletion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation, "UnityEngine.ResourceManagement.AsyncOperations", "IAsyncOperation");
