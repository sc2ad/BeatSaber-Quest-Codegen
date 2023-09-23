#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::IGenericProviderOperation
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14320))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation
class CORDL_TYPE IGenericProviderOperation : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGenericProviderOperation() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGenericProviderOperation(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_ProvideHandleVersion))  ProvideHandleVersion;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location))  Location;

 int32_t __declspec(property(get=get_DependencyCount))  DependencyCount;

 System::Type __declspec(property(get=get_RequestedType))  RequestedType;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp, bool releaseDependenciesOnFailure) ;

/// @brief Method get_ProvideHandleVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ProvideHandleVersion() ;

/// @brief Method get_Location addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

/// @brief Method get_DependencyCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_DependencyCount() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetDependencies(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> dstList) ;

/// @brief Method GetDependency addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename TDepObject>
 TDepObject GetDependency(int32_t index) ;

/// @brief Method SetProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetProgressCallback(System::Func_1<float_t> callback) ;

/// @brief Method ProviderCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void ProviderCompleted(T result, bool status, System::Exception e) ;

/// @brief Method get_RequestedType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_RequestedType() ;

/// @brief Method SetDownloadProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetDownloadProgressCallback(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> callback) ;

/// @brief Method SetWaitForCompletionCallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetWaitForCompletionCallback(System::Func_1<bool> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation, "UnityEngine.ResourceManagement.AsyncOperations", "IGenericProviderOperation");
