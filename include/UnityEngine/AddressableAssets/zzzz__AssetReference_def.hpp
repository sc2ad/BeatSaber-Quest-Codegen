#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Type: UnityEngine.AddressableAssets::AssetReference
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14370))
// CS Name: UnityEngine.AddressableAssets.AssetReference
class CORDL_TYPE AssetReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::AddressableAssets::IKeyEvaluator
constexpr operator  UnityEngine::AddressableAssets::IKeyEvaluator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: " const&", def_value: None }]
constexpr AssetReference(AssetReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "&&", def_value: None }]
constexpr AssetReference(AssetReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReference& operator=(AssetReference&& o) noexcept = default;
  constexpr AssetReference& operator=(AssetReference const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_AssetGUID, put=__set_m_AssetGUID))  m_AssetGUID;

constexpr void __set_m_AssetGUID(::StringW value) ;

constexpr ::StringW __get_m_AssetGUID() const;

 ::StringW __declspec(property(get=__get_m_SubObjectName, put=__set_m_SubObjectName))  m_SubObjectName;

constexpr void __set_m_SubObjectName(::StringW value) ;

constexpr ::StringW __get_m_SubObjectName() const;

 ::StringW __declspec(property(get=__get_m_SubObjectType, put=__set_m_SubObjectType))  m_SubObjectType;

constexpr void __set_m_SubObjectType(::StringW value) ;

constexpr ::StringW __get_m_SubObjectType() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=__get_m_Operation, put=__set_m_Operation))  m_Operation;

constexpr void __set_m_Operation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __get_m_Operation() const;


// Properties

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=get_OperationHandle, put=set_OperationHandle))  OperationHandle;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_RuntimeKey))  RuntimeKey;

 ::StringW __declspec(property(get=get_AssetGUID))  AssetGUID;

 ::StringW __declspec(property(get=get_SubObjectName, put=set_SubObjectName))  SubObjectName;

 System::Type __declspec(property(get=get_SubOjbectType))  SubOjbectType;

 bool __declspec(property(get=get_IsDone))  IsDone;

 UnityEngine::Object __declspec(property(get=get_Asset))  Asset;


// Methods

/// @brief Method get_OperationHandle addr 0x28923ec size 0x14 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle() ;

/// @brief Method set_OperationHandle addr 0x2892400 size 0x14 virtual false final false
 void set_OperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

/// @brief Method get_RuntimeKey addr 0x2892414 size 0x9c virtual true final false
 ::bs_hook::Il2CppWrapperType get_RuntimeKey() ;

/// @brief Method get_AssetGUID addr 0x28924b0 size 0x8 virtual true final false
 ::StringW get_AssetGUID() ;

/// @brief Method get_SubObjectName addr 0x28924b8 size 0x8 virtual true final false
 ::StringW get_SubObjectName() ;

/// @brief Method set_SubObjectName addr 0x28924c0 size 0x8 virtual true final false
 void set_SubObjectName(::StringW value) ;

/// @brief Method get_SubOjbectType addr 0x28924c8 size 0xac virtual true final false
 System::Type get_SubOjbectType() ;

/// @brief Method IsValid addr 0x2892574 size 0xc virtual false final false
 bool IsValid() ;

/// @brief Method get_IsDone addr 0x2892580 size 0xc virtual false final false
 bool get_IsDone() ;

// Ctor Parameters []
explicit AssetReference() ;

/// @brief Method .ctor addr 0x289258c size 0x50 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssetReference(::StringW guid) ;

/// @brief Method .ctor addr 0x28925dc size 0x64 virtual false final false
 void _ctor(::StringW guid) ;

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit AssetReference(::StringW guid, System::Type type) ;

/// @brief Method .ctor addr 0x2892640 size 0x64 virtual false final false
 void _ctor(::StringW guid, System::Type type) ;

/// @brief Method get_Asset addr 0x28926a4 size 0xa0 virtual true final false
 UnityEngine::Object get_Asset() ;

/// @brief Method ToString addr 0x2892744 size 0x6c virtual true final false
 ::StringW ToString() ;

/// @brief Method CreateFailedOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation() ;

/// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset() ;

/// @brief Method LoadScene addr 0x28927b0 size 0x40 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene() ;

/// @brief Method Instantiate addr 0x28927f0 size 0x34 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x2892824 size 0x38 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> Instantiate(UnityEngine::Transform parent, bool instantiateInWorldSpace) ;

/// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() ;

/// @brief Method LoadSceneAsync addr 0x289285c size 0x160 virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method UnLoadScene addr 0x28929bc size 0x9c virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene() ;

/// @brief Method InstantiateAsync addr 0x2892a58 size 0xf4 virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent) ;

/// @brief Method InstantiateAsync addr 0x2892b4c size 0xac virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> InstantiateAsync(UnityEngine::Transform parent, bool instantiateInWorldSpace) ;

/// @brief Method RuntimeKeyIsValid addr 0x2892bf8 size 0xb8 virtual true final false
 bool RuntimeKeyIsValid() ;

/// @brief Method ReleaseAsset addr 0x2892cb0 size 0xec virtual true final false
 void ReleaseAsset() ;

/// @brief Method ReleaseInstance addr 0x2892d9c size 0x54 virtual true final false
 void ReleaseInstance(UnityEngine::GameObject obj) ;

/// @brief Method ValidateAsset addr 0x2892df0 size 0x8 virtual true final false
 bool ValidateAsset(UnityEngine::Object obj) ;

/// @brief Method ValidateAsset addr 0x2892df8 size 0x8 virtual true final false
 bool ValidateAsset(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReference);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReference, "UnityEngine.AddressableAssets", "AssetReference");
