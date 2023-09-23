#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider2;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class SceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp;
}
// Type: ::SceneOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(14285))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14296))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider::SceneOp
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::IUpdateReceiver
constexpr operator  UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ActivateOnLoad, put=__set_m_ActivateOnLoad))  m_ActivateOnLoad;

constexpr void __set_m_ActivateOnLoad(bool value) ;

constexpr bool __get_m_ActivateOnLoad() const;

 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=__get_m_Inst, put=__set_m_Inst))  m_Inst;

constexpr void __set_m_Inst(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __get_m_Inst() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_m_Location, put=__set_m_Location))  m_Location;

constexpr void __set_m_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_m_Location() const;

 UnityEngine::SceneManagement::LoadSceneMode __declspec(property(get=__get_m_LoadMode, put=__set_m_LoadMode))  m_LoadMode;

constexpr void __set_m_LoadMode(UnityEngine::SceneManagement::LoadSceneMode value) ;

constexpr UnityEngine::SceneManagement::LoadSceneMode __get_m_LoadMode() const;

 int32_t __declspec(property(get=__get_m_Priority, put=__set_m_Priority))  m_Priority;

constexpr void __set_m_Priority(int32_t value) ;

constexpr int32_t __get_m_Priority() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_DepOp() const;

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get_m_ResourceManager, put=__set_m_ResourceManager))  m_ResourceManager;

constexpr void __set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr UnityEngine::ResourceManagement::ResourceManager __get_m_ResourceManager() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

// Ctor Parameters [CppParam { name: "rm", ty: "UnityEngine::ResourceManagement::ResourceManager", modifiers: "", def_value: None }]
explicit UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp(UnityEngine::ResourceManagement::ResourceManager rm) ;

/// @brief Method .ctor addr 0x2a40e48 size 0x5c virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceManager rm) ;

/// @brief Method GetDownloadStatus addr 0x2a41254 size 0xdc virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method Init addr 0x2a40ea4 size 0xc4 virtual false final false
 void Init(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp) ;

/// @brief Method InvokeWaitForCompletion addr 0x2a41330 size 0x338 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method GetDependencies addr 0x2a41668 size 0x14c virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method get_DebugName addr 0x2a417b4 size 0xa4 virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method Execute addr 0x2a41858 size 0x588 virtual true final false
 void Execute() ;

/// @brief Method InternalLoadScene addr 0x2a41e88 size 0xd4 virtual false final false
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance InternalLoadScene(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, bool loadingFromBundle, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method InternalLoad addr 0x2a41f5c size 0x84 virtual false final false
 UnityEngine::AsyncOperation InternalLoad(::StringW path, bool loadingFromBundle, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method Destroy addr 0x2a41fe0 size 0x90 virtual true final false
 void Destroy() ;

/// @brief Method get_Progress addr 0x2a42070 size 0xc0 virtual true final false
 float_t get_Progress() ;

/// @brief Method UnityEngine.ResourceManagement.IUpdateReceiver.Update addr 0x2a42130 size 0x128 virtual true final true
 void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: ::UnloadSceneOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(14285)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 772 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14297))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider::UnloadSceneOp
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=__get_m_Instance, put=__set_m_Instance))  m_Instance;

constexpr void __set_m_Instance(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __get_m_Instance() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_sceneLoadHandle, put=__set_m_sceneLoadHandle))  m_sceneLoadHandle;

constexpr void __set_m_sceneLoadHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_sceneLoadHandle() const;

 UnityEngine::SceneManagement::UnloadSceneOptions __declspec(property(get=__get_m_UnloadOptions, put=__set_m_UnloadOptions))  m_UnloadOptions;

constexpr void __set_m_UnloadOptions(UnityEngine::SceneManagement::UnloadSceneOptions value) ;

constexpr UnityEngine::SceneManagement::UnloadSceneOptions __get_m_UnloadOptions() const;


// Properties

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

/// @brief Method Init addr 0x2a411b8 size 0x94 virtual false final false
 void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions options) ;

/// @brief Method Execute addr 0x2a42258 size 0x134 virtual true final false
 void Execute() ;

/// @brief Method InvokeWaitForCompletion addr 0x2a424c4 size 0xb4 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method UnloadSceneCompleted addr 0x2a423fc size 0xc8 virtual false final false
 void UnloadSceneCompleted(UnityEngine::AsyncOperation obj) ;

/// @brief Method UnloadSceneCompletedNoRelease addr 0x2a4238c size 0x70 virtual false final false
 void UnloadSceneCompletedNoRelease(UnityEngine::AsyncOperation obj) ;

/// @brief Method get_Progress addr 0x2a42578 size 0x48 virtual true final false
 float_t get_Progress() ;

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp() ;

/// @brief Method .ctor addr 0x2a41170 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14298))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
class CORDL_TYPE SceneProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UnloadSceneOp = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp;

using SceneOp = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp;

/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2
constexpr operator  UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2() const noexcept;

/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider
constexpr operator  UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneProvider", modifiers: " const&", def_value: None }]
constexpr SceneProvider(SceneProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneProvider", modifiers: "&&", def_value: None }]
constexpr SceneProvider(SceneProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneProvider& operator=(SceneProvider&& o) noexcept = default;
  constexpr SceneProvider& operator=(SceneProvider const& o) noexcept = default;
                


// Methods

/// @brief Method ProvideScene addr 0x2a40aec size 0x35c virtual true final true
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method ReleaseScene addr 0x2a40f68 size 0xe8 virtual true final true
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) ;

/// @brief Method UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene addr 0x2a41050 size 0x120 virtual true final true
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) ;

// Ctor Parameters []
explicit SceneProvider() ;

/// @brief Method .ctor addr 0x2a4124c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/SceneOp");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/UnloadSceneOp");
