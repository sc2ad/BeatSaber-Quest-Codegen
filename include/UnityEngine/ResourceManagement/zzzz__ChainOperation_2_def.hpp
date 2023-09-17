#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
template<typename TObject,typename TObjectDependency>
class ChainOperation_2;
}
namespace UnityEngine::ResourceManagement {
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TObjectDependency>
class ChainOperation_2<TObject,TObjectDependency>;
}
namespace UnityEngine::ResourceManagement {
template<>
class ChainOperation_2<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
// Type: UnityEngine.ResourceManagement::ChainOperation`2
// Type: UnityEngine.ResourceManagement::ChainOperation`2
namespace UnityEngine::ResourceManagement {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TObjectDependency>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14230)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 764 }), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14230), inst: 80 })
// CS Name: UnityEngine.ResourceManagement.ChainOperation`2
class CORDL_TYPE ChainOperation_2<TObject,TObjectDependency> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ChainOperation_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: " const&", def_value: None }]
constexpr ChainOperation_2(ChainOperation_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: "&&", def_value: None }]
constexpr ChainOperation_2(ChainOperation_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChainOperation_2(void* ptr) noexcept : ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>(ptr) {
}


  constexpr ChainOperation_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChainOperation_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChainOperation_2& operator=(ChainOperation_2&& o) noexcept = default;
  constexpr ChainOperation_2& operator=(ChainOperation_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> __get_m_DepOp() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp))  m_WrappedOp;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> __get_m_WrappedOp() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus))  m_depStatus;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __get_m_depStatus() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus))  m_wrapStatus;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __get_m_wrapStatus() const;

 ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> __get_m_Callback() const;

 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted))  m_CachedOnWrappedCompleted;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> __get_m_CachedOnWrappedCompleted() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

// Ctor Parameters []
explicit ChainOperation_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_Progress() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: UnityEngine.ResourceManagement::ChainOperation`2
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 764 }), TypeDefinitionIndex(TypeDefinitionIndex(14230)), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14230), inst: 6701 })
// CS Name: UnityEngine.ResourceManagement.ChainOperation`2
class CORDL_TYPE ChainOperation_2<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ChainOperation_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: " const&", def_value: None }]
constexpr ChainOperation_2(ChainOperation_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: "&&", def_value: None }]
constexpr ChainOperation_2(ChainOperation_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChainOperation_2(void* ptr) noexcept : ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(ptr) {
}


  constexpr ChainOperation_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChainOperation_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChainOperation_2& operator=(ChainOperation_2&& o) noexcept = default;
  constexpr ChainOperation_2& operator=(ChainOperation_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_DepOp() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp))  m_WrappedOp;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_WrappedOp() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus))  m_depStatus;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __get_m_depStatus() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus))  m_wrapStatus;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus __get_m_wrapStatus() const;

 ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> __get_m_Callback() const;

 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted))  m_CachedOnWrappedCompleted;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> __get_m_CachedOnWrappedCompleted() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

// Ctor Parameters []
explicit ChainOperation_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_Progress() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::ChainOperation_2, "UnityEngine.ResourceManagement", "ChainOperation`2");
