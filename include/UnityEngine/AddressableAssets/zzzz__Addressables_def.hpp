#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::AddressableAssets {
struct UnityEngine__AddressableAssets__Addressables__MergeMode;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct LogType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
struct UnityEngine__AddressableAssets__Addressables__MergeMode;
}
namespace UnityEngine::AddressableAssets {
class Addressables;
}
// Type: ::MergeMode
namespace UnityEngine::AddressableAssets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14330))
// CS Name: UnityEngine.AddressableAssets.Addressables::MergeMode
struct CORDL_TYPE UnityEngine__AddressableAssets__Addressables__MergeMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__AddressableAssets__Addressables__MergeMode(int32_t value__) noexcept;


                    constexpr UnityEngine__AddressableAssets__Addressables__MergeMode(UnityEngine__AddressableAssets__Addressables__MergeMode const&) = default;
                    constexpr UnityEngine__AddressableAssets__Addressables__MergeMode(UnityEngine__AddressableAssets__Addressables__MergeMode&&) = default;
                    constexpr UnityEngine__AddressableAssets__Addressables__MergeMode& operator=(UnityEngine__AddressableAssets__Addressables__MergeMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__AddressableAssets__Addressables__MergeMode& operator=(UnityEngine__AddressableAssets__Addressables__MergeMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Addressables__MergeMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__AddressableAssets__Addressables__MergeMode_Unwrapped : int32_t {
__None = 0,
__UseFirst = 0,
__Union = 1,
__Intersection = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__AddressableAssets__Addressables__MergeMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__AddressableAssets__Addressables__MergeMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode const None;

/// @brief Field UseFirst offset 0
static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode const UseFirst;

/// @brief Field Union offset 0
static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode const Union;

/// @brief Field Intersection offset 0
static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode const Intersection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::Addressables
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14331))
// CS Name: UnityEngine.AddressableAssets.Addressables
class CORDL_TYPE Addressables : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MergeMode = UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Addressables() = default;

// Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: " const&", def_value: None }]
constexpr Addressables(Addressables const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "&&", def_value: None }]
constexpr Addressables(Addressables&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Addressables(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Addressables& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Addressables& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Addressables& operator=(Addressables&& o) noexcept = default;
  constexpr Addressables& operator=(Addressables const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_reinitializeAddressables, put=__set_reinitializeAddressables))  reinitializeAddressables;

static void __set_reinitializeAddressables(bool value) ;

static bool __get_reinitializeAddressables() ;

static UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_AddressablesInstance, put=__set_m_AddressablesInstance))  m_AddressablesInstance;

static void __set_m_AddressablesInstance(UnityEngine::AddressableAssets::AddressablesImpl value) ;

static UnityEngine::AddressableAssets::AddressablesImpl __get_m_AddressablesInstance() ;

/// @brief Field kAddressablesRuntimeDataPath offset 0
static constexpr ::ConstString  kAddressablesRuntimeDataPath{u"AddressablesRuntimeDataPath"};

/// @brief Field k_AddressablesLogConditional offset 0
static constexpr ::ConstString  k_AddressablesLogConditional{u"ADDRESSABLES_LOG_ALL"};

/// @brief Field kAddressablesRuntimeBuildLogPath offset 0
static constexpr ::ConstString  kAddressablesRuntimeBuildLogPath{u"AddressablesRuntimeBuildLog"};

static ::StringW __declspec(property(get=__get_LibraryPath, put=__set_LibraryPath))  LibraryPath;

static void __set_LibraryPath(::StringW value) ;

static ::StringW __get_LibraryPath() ;


// Properties

static UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=get_m_Addressables))  m_Addressables;

static UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=get_ResourceManager))  ResourceManager;

static UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=get_Instance))  Instance;

static UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider __declspec(property(get=get_InstanceProvider))  InstanceProvider;

static System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> __declspec(property(get=get_InternalIdTransformFunc, put=set_InternalIdTransformFunc))  InternalIdTransformFunc;

static System::Action_1<UnityEngine::Networking::UnityWebRequest> __declspec(property(get=get_WebRequestOverride, put=set_WebRequestOverride))  WebRequestOverride;

static ::StringW __declspec(property(get=get_StreamingAssetsSubFolder))  StreamingAssetsSubFolder;

static ::StringW __declspec(property(get=get_BuildPath))  BuildPath;

static ::StringW __declspec(property(get=get_PlayerBuildDataPath))  PlayerBuildDataPath;

static ::StringW __declspec(property(get=get_RuntimePath))  RuntimePath;

static System::Collections::Generic::IEnumerable_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> __declspec(property(get=get_ResourceLocators))  ResourceLocators;

static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> __declspec(property(get=get_InitializationOperation))  InitializationOperation;


// Methods

/// @brief Method get_m_Addressables addr 0x2881690 size 0x58 virtual false final false
static UnityEngine::AddressableAssets::AddressablesImpl get_m_Addressables() ;

/// @brief Method get_ResourceManager addr 0x28816e8 size 0x90 virtual false final false
static UnityEngine::ResourceManagement::ResourceManager get_ResourceManager() ;

/// @brief Method get_Instance addr 0x2881778 size 0x88 virtual false final false
static UnityEngine::AddressableAssets::AddressablesImpl get_Instance() ;

/// @brief Method get_InstanceProvider addr 0x2881800 size 0x94 virtual false final false
static UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider get_InstanceProvider() ;

/// @brief Method ResolveInternalId addr 0x2881894 size 0x98 virtual false final false
static ::StringW ResolveInternalId(::StringW id) ;

/// @brief Method get_InternalIdTransformFunc addr 0x288192c size 0x9c virtual false final false
static System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> get_InternalIdTransformFunc() ;

/// @brief Method set_InternalIdTransformFunc addr 0x28819e4 size 0xa0 virtual false final false
static void set_InternalIdTransformFunc(System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> value) ;

/// @brief Method get_WebRequestOverride addr 0x2881aa4 size 0x9c virtual false final false
static System::Action_1<UnityEngine::Networking::UnityWebRequest> get_WebRequestOverride() ;

/// @brief Method set_WebRequestOverride addr 0x2881b5c size 0xa0 virtual false final false
static void set_WebRequestOverride(System::Action_1<UnityEngine::Networking::UnityWebRequest> value) ;

/// @brief Method get_StreamingAssetsSubFolder addr 0x2881c1c size 0xbc virtual false final false
static ::StringW get_StreamingAssetsSubFolder() ;

/// @brief Method get_BuildPath addr 0x2881d18 size 0x90 virtual false final false
static ::StringW get_BuildPath() ;

/// @brief Method get_PlayerBuildDataPath addr 0x2881e84 size 0x90 virtual false final false
static ::StringW get_PlayerBuildDataPath() ;

/// @brief Method get_RuntimePath addr 0x2881f9c size 0x90 virtual false final false
static ::StringW get_RuntimePath() ;

/// @brief Method get_ResourceLocators addr 0x2882030 size 0x90 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> get_ResourceLocators() ;

/// @brief Method InternalSafeSerializationLog addr 0x28820c0 size 0x114 virtual false final false
static void InternalSafeSerializationLog(::StringW msg, UnityEngine::LogType logType) ;

/// @brief Method InternalSafeSerializationLogFormat addr 0x28822dc size 0x124 virtual false final false
static void InternalSafeSerializationLogFormat(::StringW format, UnityEngine::LogType logType, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Log addr 0x2882538 size 0x98 virtual false final false
static void Log(::StringW msg) ;

/// @brief Method LogFormat addr 0x28825d0 size 0xa8 virtual false final false
static void LogFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogWarning addr 0x287dae4 size 0x98 virtual false final false
static void LogWarning(::StringW msg) ;

/// @brief Method LogWarningFormat addr 0x2882678 size 0xa8 virtual false final false
static void LogWarningFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogError addr 0x287db7c size 0x98 virtual false final false
static void LogError(::StringW msg) ;

/// @brief Method LogException addr 0x2882720 size 0xd4 virtual false final false
static void LogException(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, System::Exception ex) ;

/// @brief Method LogException addr 0x2882890 size 0x90 virtual false final false
static void LogException(System::Exception ex) ;

/// @brief Method LogErrorFormat addr 0x287e4a8 size 0xa8 virtual false final false
static void LogErrorFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Initialize addr 0x2882924 size 0x68 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> Initialize() ;

/// @brief Method InitializeAsync addr 0x288298c size 0xac virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> InitializeAsync() ;

/// @brief Method InitializeAsync addr 0x2882ac4 size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> InitializeAsync(bool autoReleaseHandle) ;

/// @brief Method LoadContentCatalog addr 0x2882c10 size 0x80 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix) ;

/// @brief Method LoadContentCatalogAsync addr 0x2882c90 size 0xc8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix) ;

/// @brief Method LoadContentCatalogAsync addr 0x2882f50 size 0xd4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix) ;

/// @brief Method get_InitializationOperation addr 0x2883024 size 0xc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> get_InitializationOperation() ;

/// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method LoadResourceLocations addr 0x2883030 size 0x90 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> LoadResourceLocations(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type) ;

/// @brief Method LoadResourceLocationsAsync addr 0x28830c0 size 0xd4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> LoadResourceLocationsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type) ;

/// @brief Method LoadResourceLocationsAsync addr 0x28832e8 size 0xd4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> LoadResourceLocationsAsync(System::Collections::IEnumerable keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type) ;

/// @brief Method LoadResourceLocations addr 0x28833bc size 0x80 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> LoadResourceLocations(::bs_hook::Il2CppWrapperType key, System::Type type) ;

/// @brief Method LoadResourceLocationsAsync addr 0x288343c size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> LoadResourceLocationsAsync(::bs_hook::Il2CppWrapperType key, System::Type type) ;

/// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssets(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssets(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::IEnumerable keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool releaseDependenciesOnFailure) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(System::Collections::IEnumerable keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool releaseDependenciesOnFailure) ;

/// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssets(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback) ;

/// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> LoadAssetsAsync(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static void Release(TObject obj) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static void Release(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) ;

/// @brief Method Release addr 0x2883648 size 0xc4 virtual false final false
static void Release(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method ReleaseInstance addr 0x2883758 size 0x98 virtual false final false
static bool ReleaseInstance(UnityEngine::GameObject instance) ;

/// @brief Method ReleaseInstance addr 0x28838ec size 0xc8 virtual false final false
static bool ReleaseInstance(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method ReleaseInstance addr 0x28839b4 size 0xd0 virtual false final false
static bool ReleaseInstance(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> handle) ;

/// @brief Method GetDownloadSize addr 0x2883a84 size 0x78 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSize(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method GetDownloadSizeAsync addr 0x2883afc size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method GetDownloadSizeAsync addr 0x2883c74 size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key) ;

/// @brief Method GetDownloadSizeAsync addr 0x2883d30 size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys) ;

/// @brief Method GetDownloadSizeAsync addr 0x2884c20 size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(System::Collections::IEnumerable keys) ;

/// @brief Method DownloadDependencies addr 0x2884cdc size 0x80 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependencies(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method DownloadDependenciesAsync addr 0x2884d5c size 0xcc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::bs_hook::Il2CppWrapperType key, bool autoReleaseHandle) ;

/// @brief Method DownloadDependenciesAsync addr 0x28850a4 size 0xcc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool autoReleaseHandle) ;

/// @brief Method DownloadDependenciesAsync addr 0x28852b0 size 0xd8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool autoReleaseHandle) ;

/// @brief Method DownloadDependenciesAsync addr 0x2885614 size 0xd8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(System::Collections::IEnumerable keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync addr 0x28856ec size 0xac virtual false final false
static void ClearDependencyCacheAsync(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ClearDependencyCacheAsync addr 0x28859e8 size 0xac virtual false final false
static void ClearDependencyCacheAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations) ;

/// @brief Method ClearDependencyCacheAsync addr 0x2885fa4 size 0xac virtual false final false
static void ClearDependencyCacheAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys) ;

/// @brief Method ClearDependencyCacheAsync addr 0x288656c size 0xac virtual false final false
static void ClearDependencyCacheAsync(System::Collections::IEnumerable keys) ;

/// @brief Method ClearDependencyCacheAsync addr 0x2886618 size 0xac virtual false final false
static void ClearDependencyCacheAsync(::StringW key) ;

/// @brief Method ClearDependencyCacheAsync addr 0x28866c4 size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::bs_hook::Il2CppWrapperType key, bool autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync addr 0x2886788 size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync addr 0x288684c size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, bool autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync addr 0x2886910 size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(System::Collections::IEnumerable keys, bool autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync addr 0x28869d4 size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle) ;

/// @brief Method Instantiate addr 0x2886a98 size 0xc4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle) ;

/// @brief Method Instantiate addr 0x2886c50 size 0xe8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle) ;

/// @brief Method Instantiate addr 0x2886e64 size 0x98 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle) ;

/// @brief Method Instantiate addr 0x2886fd8 size 0xe8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle) ;

/// @brief Method Instantiate addr 0x28871ec size 0xb0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) ;

/// @brief Method Instantiate addr 0x2887390 size 0xb0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x2887440 size 0x10c virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x2886d38 size 0x12c virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x2886efc size 0xdc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x28870c0 size 0x12c virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x288729c size 0xf4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) ;

/// @brief Method InstantiateAsync addr 0x2886b5c size 0xf4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) ;

/// @brief Method LoadScene addr 0x2887c3c size 0x98 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene(::bs_hook::Il2CppWrapperType key, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method LoadScene addr 0x2887db4 size 0x98 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method LoadSceneAsync addr 0x2887cd4 size 0xe0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method LoadSceneAsync addr 0x2887e4c size 0xe0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method UnloadScene addr 0x288823c size 0x90 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadScene(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle) ;

/// @brief Method UnloadScene addr 0x28883a4 size 0xa0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle) ;

/// @brief Method UnloadScene addr 0x288852c size 0x90 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync addr 0x2888694 size 0xdc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync addr 0x2888990 size 0xf4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) ;

/// @brief Method UnloadScene addr 0x2888bd8 size 0xe0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync addr 0x28882cc size 0xd8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync addr 0x2888444 size 0xe8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync addr 0x28885bc size 0xd8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle) ;

/// @brief Method CheckForCatalogUpdates addr 0x2888d80 size 0xbc virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::StringW>> CheckForCatalogUpdates(bool autoReleaseHandle) ;

/// @brief Method UpdateCatalogs addr 0x2888f7c size 0xc8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> UpdateCatalogs(System::Collections::Generic::IEnumerable_1<::StringW> catalogs, bool autoReleaseHandle) ;

/// @brief Method UpdateCatalogs addr 0x288926c size 0xd4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> UpdateCatalogs(bool autoCleanBundleCache, System::Collections::Generic::IEnumerable_1<::StringW> catalogs, bool autoReleaseHandle) ;

/// @brief Method AddResourceLocator addr 0x2889340 size 0xb0 virtual false final false
static void AddResourceLocator(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator locator, ::StringW localCatalogHash, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteCatalogLocation) ;

/// @brief Method RemoveResourceLocator addr 0x28894f0 size 0x98 virtual false final false
static void RemoveResourceLocator(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator locator) ;

/// @brief Method ClearResourceLocators addr 0x2889664 size 0x90 virtual false final false
static void ClearResourceLocators() ;

/// @brief Method CleanBundleCache addr 0x2889764 size 0xc0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(System::Collections::Generic::IEnumerable_1<::StringW> catalogsIds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
NEED_NO_BOX(UnityEngine::AddressableAssets::Addressables);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Addressables, "UnityEngine.AddressableAssets", "Addressables");
