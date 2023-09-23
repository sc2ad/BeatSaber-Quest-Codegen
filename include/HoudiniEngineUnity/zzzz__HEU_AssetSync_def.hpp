#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSync;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback;
}
// Type: ::AssetSyncCallback
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9732))
// CS Name: HoudiniEngineUnity.HEU_AssetSync::AssetSyncCallback
class CORDL_TYPE HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback(HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback(HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback& operator=(HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback& operator=(HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2033ff0 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x203411c size 0x14 virtual true final false
 void Invoke(HoudiniEngineUnity::HEU_AssetSync assetSync) ;

/// @brief Method BeginInvoke addr 0x2034130 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(HoudiniEngineUnity::HEU_AssetSync assetSync, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2034150 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9733))
// CS Name: HoudiniEngineUnity.HEU_AssetSync
class CORDL_TYPE HEU_AssetSync : public HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
using AssetSyncCallback = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~HEU_AssetSync() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: " const&", def_value: None }]
constexpr HEU_AssetSync(HEU_AssetSync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "&&", def_value: None }]
constexpr HEU_AssetSync(HEU_AssetSync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetSync(void* ptr) noexcept : HoudiniEngineUnity::HEU_BaseSync(ptr) {
}


  constexpr HEU_AssetSync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetSync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetSync& operator=(HEU_AssetSync&& o) noexcept = default;
  constexpr HEU_AssetSync& operator=(HEU_AssetSync const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback __declspec(property(get=__get__onAssetLoaded, put=__set__onAssetLoaded))  _onAssetLoaded;

constexpr void __set__onAssetLoaded(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback __get__onAssetLoaded() const;

 ::StringW __declspec(property(get=__get__assetPath, put=__set__assetPath))  _assetPath;

constexpr void __set__assetPath(::StringW value) ;

constexpr ::StringW __get__assetPath() const;


// Methods

/// @brief Method OnEnable addr 0x2033b6c size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x2033b70 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method InitializeAsset addr 0x2033b7c size 0xf8 virtual false final false
 void InitializeAsset(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetPath, ::StringW nodeName, UnityEngine::Transform parent, UnityEngine::Vector3 startPosition) ;

/// @brief Method CreateThreadedTask addr 0x2033c74 size 0x68 virtual false final false
 HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo CreateThreadedTask() ;

/// @brief Method SetLoadCallback addr 0x2033ce0 size 0x38 virtual false final false
 void SetLoadCallback(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback callback) ;

/// @brief Method SetupLoadTask addr 0x2033d18 size 0x60 virtual true final false
 void SetupLoadTask(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method OnLoadComplete addr 0x2033d8c size 0x34 virtual true final false
 void OnLoadComplete(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method Resync addr 0x2033e44 size 0x38 virtual true final false
 void Resync() ;

// Ctor Parameters []
explicit HEU_AssetSync() ;

/// @brief Method .ctor addr 0x2033e7c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_AssetSync);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetSync, "HoudiniEngineUnity", "HEU_AssetSync");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetSync__AssetSyncCallback, "HoudiniEngineUnity", "HEU_AssetSync/AssetSyncCallback");
