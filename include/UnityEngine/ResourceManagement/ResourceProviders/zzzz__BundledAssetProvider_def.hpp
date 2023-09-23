#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine {
class AssetBundle;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BundledAssetProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp;
}
// Type: ::InternalOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14277))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider::InternalOp
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp(UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp(UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp const& o) noexcept = default;
                


// Fields

 UnityEngine::AssetBundle __declspec(property(get=__get_m_AssetBundle, put=__set_m_AssetBundle))  m_AssetBundle;

constexpr void __set_m_AssetBundle(UnityEngine::AssetBundle value) ;

constexpr UnityEngine::AssetBundle __get_m_AssetBundle() const;

 UnityEngine::AssetBundleRequest __declspec(property(get=__get_m_PreloadRequest, put=__set_m_PreloadRequest))  m_PreloadRequest;

constexpr void __set_m_PreloadRequest(UnityEngine::AssetBundleRequest value) ;

constexpr UnityEngine::AssetBundleRequest __get_m_PreloadRequest() const;

 UnityEngine::AssetBundleRequest __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation))  m_RequestOperation;

constexpr void __set_m_RequestOperation(UnityEngine::AssetBundleRequest value) ;

constexpr UnityEngine::AssetBundleRequest __get_m_RequestOperation() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Result, put=__set_m_Result))  m_Result;

constexpr void __set_m_Result(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Result() const;

 UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __declspec(property(get=__get_m_ProvideHandle, put=__set_m_ProvideHandle))  m_ProvideHandle;

constexpr void __set_m_ProvideHandle(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __get_m_ProvideHandle() const;

 ::StringW __declspec(property(get=__get_subObjectName, put=__set_subObjectName))  subObjectName;

constexpr void __set_subObjectName(::StringW value) ;

constexpr ::StringW __get_subObjectName() const;


// Methods

/// @brief Method LoadBundleFromDependecies addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T LoadBundleFromDependecies(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> results) ;

/// @brief Method Start addr 0x2a3e594 size 0x3c8 virtual false final false
 void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

/// @brief Method BeginAssetLoad addr 0x2a3ea18 size 0x368 virtual false final false
 void BeginAssetLoad() ;

/// @brief Method WaitForCompletionHandler addr 0x2a3efc0 size 0xf8 virtual false final false
 bool WaitForCompletionHandler() ;

/// @brief Method ActionComplete addr 0x2a3ee2c size 0x194 virtual false final false
 void ActionComplete(UnityEngine::AsyncOperation obj) ;

/// @brief Method GetArrayResult addr 0x2a3f0b8 size 0x30 virtual false final false
 void GetArrayResult(::ArrayW<UnityEngine::Object> allAssets) ;

/// @brief Method GetListResult addr 0x2a3f0e8 size 0x30 virtual false final false
 void GetListResult(::ArrayW<UnityEngine::Object> allAssets) ;

/// @brief Method GetAssetResult addr 0x2a3f118 size 0xc0 virtual false final false
 void GetAssetResult(UnityEngine::Object asset) ;

/// @brief Method GetAssetSubObjectResult addr 0x2a3f1d8 size 0xcc virtual false final false
 void GetAssetSubObjectResult(::ArrayW<UnityEngine::Object> allAssets) ;

/// @brief Method CompleteOperation addr 0x2a3f2a4 size 0xf0 virtual false final false
 void CompleteOperation() ;

/// @brief Method ProgressCallback addr 0x2a3f394 size 0x18 virtual false final false
 float_t ProgressCallback() ;

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp() ;

/// @brief Method .ctor addr 0x2a3e58c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__7_0 addr 0x2a3f3ac size 0x4 virtual false final false
 void _Start_b__7_0(UnityEngine::AsyncOperation operation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::BundledAssetProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14278))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider
class CORDL_TYPE BundledAssetProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BundledAssetProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: " const&", def_value: None }]
constexpr BundledAssetProvider(BundledAssetProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: "&&", def_value: None }]
constexpr BundledAssetProvider(BundledAssetProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BundledAssetProvider(void* ptr) noexcept : UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr BundledAssetProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BundledAssetProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BundledAssetProvider& operator=(BundledAssetProvider&& o) noexcept = default;
  constexpr BundledAssetProvider& operator=(BundledAssetProvider const& o) noexcept = default;
                


// Methods

/// @brief Method Provide addr 0x2a3e50c size 0x80 virtual true final false
 void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

// Ctor Parameters []
explicit BundledAssetProvider() ;

/// @brief Method .ctor addr 0x2a3e95c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__BundledAssetProvider__InternalOp, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider/InternalOp");
