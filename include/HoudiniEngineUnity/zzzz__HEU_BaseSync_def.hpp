#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
namespace HoudiniEngineUnity {
class ____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
// Type: HoudiniEngineUnity::HEU_BaseSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9734))
// CS Name: HoudiniEngineUnity.HEU_BaseSync
class CORDL_TYPE HEU_BaseSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HEU_BaseSync() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: " const&", def_value: None }]
constexpr HEU_BaseSync(HEU_BaseSync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: "&&", def_value: None }]
constexpr HEU_BaseSync(HEU_BaseSync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_BaseSync(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_BaseSync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_BaseSync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_BaseSync& operator=(HEU_BaseSync&& o) noexcept = default;
  constexpr HEU_BaseSync& operator=(HEU_BaseSync const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__cookNodeID, put=__set__cookNodeID))  _cookNodeID;

constexpr void __set__cookNodeID(int32_t value) ;

constexpr int32_t __get__cookNodeID() const;

 int64_t __declspec(property(get=__get__sessionID, put=__set__sessionID))  _sessionID;

constexpr void __set__sessionID(int64_t value) ;

constexpr int64_t __get__sessionID() const;

 ::StringW __declspec(property(get=__get__nodeName, put=__set__nodeName))  _nodeName;

constexpr void __set__nodeName(::StringW value) ;

constexpr ::StringW __get__nodeName() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 bool __declspec(property(get=__get__syncing, put=__set__syncing))  _syncing;

constexpr void __set__syncing(bool value) ;

constexpr bool __get__syncing() const;

 bool __declspec(property(get=__get__deleteParent, put=__set__deleteParent))  _deleteParent;

constexpr void __set__deleteParent(bool value) ;

constexpr bool __get__deleteParent() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput> __declspec(property(get=__get__generatedOutputs, put=__set__generatedOutputs))  _generatedOutputs;

constexpr void __set__generatedOutputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput> __get__generatedOutputs() const;

 ::StringW __declspec(property(get=__get__outputCacheDirectory, put=__set__outputCacheDirectory))  _outputCacheDirectory;

constexpr void __set__outputCacheDirectory(::StringW value) ;

constexpr ::StringW __get__outputCacheDirectory() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__outputCacheFilePaths, put=__set__outputCacheFilePaths))  _outputCacheFilePaths;

constexpr void __set__outputCacheFilePaths(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__outputCacheFilePaths() const;

 ::HoudiniEngineUnity::HEU_GenerateOptions __declspec(property(get=__get__generateOptions, put=__set__generateOptions))  _generateOptions;

constexpr void __set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions value) ;

constexpr ::HoudiniEngineUnity::HEU_GenerateOptions __get__generateOptions() const;

 ::System::Text::StringBuilder __declspec(property(get=__get__log, put=__set__log))  _log;

constexpr void __set__log(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get__log() const;

 ::System::Text::StringBuilder __declspec(property(get=__get__error, put=__set__error))  _error;

constexpr void __set__error(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get__error() const;

 bool __declspec(property(get=__get__sessionSyncAutoCook, put=__set__sessionSyncAutoCook))  _sessionSyncAutoCook;

constexpr void __set__sessionSyncAutoCook(bool value) ;

constexpr bool __get__sessionSyncAutoCook() const;

 ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo __declspec(property(get=__get__loadTask, put=__set__loadTask))  _loadTask;

constexpr void __set__loadTask(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo value) ;

constexpr ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo __get__loadTask() const;

 int32_t __declspec(property(get=__get__totalCookCount, put=__set__totalCookCount))  _totalCookCount;

constexpr void __set__totalCookCount(int32_t value) ;

constexpr int32_t __get__totalCookCount() const;

 bool __declspec(property(get=__get__firstSyncComplete, put=__set__firstSyncComplete))  _firstSyncComplete;

constexpr void __set__firstSyncComplete(bool value) ;

constexpr bool __get__firstSyncComplete() const;


// Methods

/// @brief Method Awake addr 0x203415c size 0x4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2034160 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method DeleteSessionData addr 0x203416c size 0x78 virtual true final false
 void DeleteSessionData() ;

/// @brief Method DestroyGeneratedData addr 0x2034240 size 0x4 virtual true final false
 void DestroyGeneratedData() ;

/// @brief Method Initialize addr 0x2034480 size 0x1c virtual true final false
 void Initialize() ;

/// @brief Method GetHoudiniSession addr 0x203449c size 0x15c virtual true final false
 ::HoudiniEngineUnity::HEU_SessionBase GetHoudiniSession(bool bCreateIfNotFound) ;

/// @brief Method GetParentNodeID addr 0x20341e4 size 0x5c virtual false final false
 int32_t GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method Log addr 0x20345f8 size 0xd8 virtual false final false
 void Log(::StringW msg) ;

/// @brief Method ClearLog addr 0x20346d0 size 0x104 virtual false final false
 void ClearLog() ;

/// @brief Method Error addr 0x20347d4 size 0x1c virtual false final false
 void Error(::StringW error) ;

/// @brief Method IsLoaded addr 0x20347f0 size 0x24 virtual false final false
 bool IsLoaded() ;

/// @brief Method StartSync addr 0x2034814 size 0x128 virtual true final false
 void StartSync() ;

/// @brief Method SetupLoadTask addr 0x203493c size 0x4 virtual true final false
 void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method StopSync addr 0x2034940 size 0x74 virtual true final false
 void StopSync() ;

/// @brief Method Resync addr 0x20349b4 size 0x3c virtual true final false
 void Resync() ;

/// @brief Method Bake addr 0x20349f0 size 0x3a4 virtual true final false
 void Bake() ;

/// @brief Method Unload addr 0x2034d94 size 0x94 virtual true final false
 void Unload() ;

/// @brief Method Reset addr 0x2034e28 size 0xc0 virtual true final false
 void Reset() ;

/// @brief Method OnLoadComplete addr 0x2033dc0 size 0x84 virtual true final false
 void OnLoadComplete(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method GenerateObjects addr 0x2034ee8 size 0x8c virtual true final false
 void GenerateObjects(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method GenerateGeometry addr 0x2034f74 size 0x108 virtual true final false
 void GenerateGeometry(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData, int32_t objIndex) ;

/// @brief Method OnStopped addr 0x2036d7c size 0x50 virtual false final false
 void OnStopped(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method GenerateTerrain addr 0x2035690 size 0x1638 virtual false final false
 void GenerateTerrain(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume> terrainBuffers) ;

/// @brief Method GenerateMesh addr 0x203507c size 0x614 virtual false final false
 void GenerateMesh(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh> meshBuffers) ;

/// @brief Method GenerateAllInstancers addr 0x2036cc8 size 0xb4 virtual false final false
 void GenerateAllInstancers(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer> instancerBuffers, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method GenerateInstancer addr 0x2037178 size 0x310 virtual false final false
 void GenerateInstancer(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer instancerBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase> idBuffersMap) ;

/// @brief Method GenerateInstancesFromNodeIDs addr 0x2037488 size 0x740 virtual false final false
 void GenerateInstancesFromNodeIDs(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer instancerBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase> idBuffersMap, ::UnityEngine::Transform instanceRootTransform) ;

/// @brief Method GenerateInstancesFromAssetPaths addr 0x2037bc8 size 0x950 virtual false final false
 void GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer instancerBuffer, ::UnityEngine::Transform instanceRootTransform) ;

/// @brief Method CreateNewInstanceFromObject addr 0x2038518 size 0x1c0 virtual false final false
 void CreateNewInstanceFromObject(::UnityEngine::GameObject assetSourceGO, int32_t instanceIndex, ::UnityEngine::Transform parentTransform, ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::ArrayW<::StringW> instancePrefixes, ::StringW instanceName, ::UnityEngine::GameObject collisionSourceGO) ;

/// @brief Method ApplyAttributeModifiersOnGameObjectOutput addr 0x2036f14 size 0x70 virtual false final false
 void ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partId, ByRef<::UnityEngine::GameObject> go) ;

/// @brief Method DestroyOutputs addr 0x2034244 size 0x23c virtual false final false
 void DestroyOutputs() ;

/// @brief Method SetOutputVisiblity addr 0x2036f84 size 0x1f4 virtual false final false
 void SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase buffer) ;

/// @brief Method GetOutputCacheDirectory addr 0x2036dcc size 0x64 virtual false final false
 ::StringW GetOutputCacheDirectory() ;

/// @brief Method SetOutputCacheDirectory addr 0x20386d8 size 0x8 virtual false final false
 void SetOutputCacheDirectory(::StringW directory) ;

/// @brief Method AddGeneratedOutputFilePath addr 0x2036e30 size 0xe4 virtual false final false
 void AddGeneratedOutputFilePath(::StringW path) ;

/// @brief Method SyncUpdate addr 0x20386e0 size 0x4 virtual true final false
 void SyncUpdate() ;

// Ctor Parameters []
explicit HEU_BaseSync() ;

/// @brief Method .ctor addr 0x2033e80 size 0x170 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BaseSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BaseSync, "HoudiniEngineUnity", "HEU_BaseSync");
