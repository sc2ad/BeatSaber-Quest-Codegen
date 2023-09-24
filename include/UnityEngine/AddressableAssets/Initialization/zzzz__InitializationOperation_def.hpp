#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
}
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class InitializationOperation;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0;
}
// Type: ::<>c
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14402))
// CS Name: UnityEngine.AddressableAssets.Initialization.InitializationOperation::<>c
class CORDL_TYPE UnityEngine__AddressableAssets__Initialization__InitializationOperation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__AddressableAssets__Initialization__InitializationOperation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Initialization__InitializationOperation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c const& o) noexcept = default;
                


// Fields

static UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c value) ;

static UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c __get___9() ;

static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> __declspec(property(get=__get___9__13_0, put=__set___9__13_0))  __9__13_0;

static void __set___9__13_0(System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> value) ;

static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> __get___9__13_0() ;


// Methods

static UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c New_ctor() ;

/// @brief Method .ctor addr 0x28a20a8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Execute>b__13_0 addr 0x28a20b0 size 0x9c virtual false final false
 bool _Execute_b__13_0(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider rp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass16_0
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14403))
// CS Name: UnityEngine.AddressableAssets.Initialization.InitializationOperation::<>c__DisplayClass16_0
class CORDL_TYPE UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_addressables, put=__set_addressables))  addressables;

constexpr void __set_addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_addressables() const;

 ::StringW __declspec(property(get=__get_providerSuffix, put=__set_providerSuffix))  providerSuffix;

constexpr void __set_providerSuffix(::StringW value) ;

constexpr ::StringW __get_providerSuffix() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_remoteHashLocation, put=__set_remoteHashLocation))  remoteHashLocation;

constexpr void __set_remoteHashLocation(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_remoteHashLocation() const;


// Methods

static UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0 New_ctor() ;

/// @brief Method .ctor addr 0x28a214c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadContentCatalog>b__0 addr 0x28a2154 size 0x44 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> _LoadContentCatalog_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> res) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass18_0
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14404))
// CS Name: UnityEngine.AddressableAssets.Initialization.InitializationOperation::<>c__DisplayClass18_0
class CORDL_TYPE UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0& operator=(UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::Initialization::InitializationOperation __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::AddressableAssets::Initialization::InitializationOperation value) ;

constexpr UnityEngine::AddressableAssets::Initialization::InitializationOperation __get___4__this() const;

 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=__get_catalogs, put=__set_catalogs))  catalogs;

constexpr void __set_catalogs(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> value) ;

constexpr System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __get_catalogs() const;

 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap __declspec(property(get=__get_locMap, put=__set_locMap))  locMap;

constexpr void __set_locMap(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap value) ;

constexpr UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap __get_locMap() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_remoteHashLocation, put=__set_remoteHashLocation))  remoteHashLocation;

constexpr void __set_remoteHashLocation(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_remoteHashLocation() const;


// Methods

static UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0 New_ctor() ;

/// @brief Method .ctor addr 0x28a2198 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadContentCatalogInternal>b__0 addr 0x28a21a0 size 0x4c virtual false final false
 void _LoadContentCatalogInternal_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> op) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
// Type: UnityEngine.AddressableAssets.Initialization::InitializationOperation
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 771 }), TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(14393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14405))
// CS Name: UnityEngine.AddressableAssets.Initialization.InitializationOperation
class CORDL_TYPE InitializationOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> {
public:
// Declarations
using __c__DisplayClass18_0 = UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0;

using __c__DisplayClass16_0 = UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0;

using __c = UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~InitializationOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: " const&", def_value: None }]
constexpr InitializationOperation(InitializationOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "&&", def_value: None }]
constexpr InitializationOperation(InitializationOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InitializationOperation(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>(ptr) {
}


  constexpr InitializationOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InitializationOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InitializationOperation& operator=(InitializationOperation&& o) noexcept = default;
  constexpr InitializationOperation& operator=(InitializationOperation const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> __declspec(property(get=__get_m_rtdOp, put=__set_m_rtdOp))  m_rtdOp;

constexpr void __set_m_rtdOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> __get_m_rtdOp() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> __declspec(property(get=__get_m_loadCatalogOp, put=__set_m_loadCatalogOp))  m_loadCatalogOp;

constexpr void __set_m_loadCatalogOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> __get_m_loadCatalogOp() const;

 ::StringW __declspec(property(get=__get_m_ProviderSuffix, put=__set_m_ProviderSuffix))  m_ProviderSuffix;

constexpr void __set_m_ProviderSuffix(::StringW value) ;

constexpr ::StringW __get_m_ProviderSuffix() const;

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

 UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics __declspec(property(get=__get_m_Diagnostics, put=__set_m_Diagnostics))  m_Diagnostics;

constexpr void __set_m_Diagnostics(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics value) ;

constexpr UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics __get_m_Diagnostics() const;

 UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation __declspec(property(get=__get_m_InitGroupOps, put=__set_m_InitGroupOps))  m_InitGroupOps;

constexpr void __set_m_InitGroupOps(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation __get_m_InitGroupOps() const;


// Properties

 float_t __declspec(property(get=get_Progress))  Progress;

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

static UnityEngine::AddressableAssets::Initialization::InitializationOperation New_ctor(UnityEngine::AddressableAssets::AddressablesImpl aa) ;

/// @brief Method .ctor addr 0x289f054 size 0xa4 virtual false final false
 void _ctor(UnityEngine::AddressableAssets::AddressablesImpl aa) ;

/// @brief Method get_Progress addr 0x289f0f8 size 0x80 virtual true final false
 float_t get_Progress() ;

/// @brief Method get_DebugName addr 0x289f178 size 0x40 virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method CreateInitializationOperation addr 0x288bac4 size 0x588 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> CreateInitializationOperation(UnityEngine::AddressableAssets::AddressablesImpl aa, ::StringW playerSettingsLocation, ::StringW providerSuffix) ;

/// @brief Method InvokeWaitForCompletion addr 0x289f1b8 size 0x1c4 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x289f37c size 0xd10 virtual true final false
 void Execute() ;

/// @brief Method LoadProvider addr 0x28a0280 size 0x490 virtual false final false
static void LoadProvider(UnityEngine::AddressableAssets::AddressablesImpl addressables, UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData, ::StringW providerSuffix) ;

/// @brief Method OnCatalogDataLoaded addr 0x28a0710 size 0x5a0 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> OnCatalogDataLoaded(UnityEngine::AddressableAssets::AddressablesImpl addressables, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> op, ::StringW providerSuffix, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteHashLocation) ;

/// @brief Method LoadContentCatalog addr 0x288c598 size 0x6a4 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalog(UnityEngine::AddressableAssets::AddressablesImpl addressables, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc, ::StringW providerSuffix, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteHashLocation) ;

/// @brief Method LoadContentCatalog addr 0x28a0cb0 size 0x2c virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalog(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc, ::StringW providerSuffix, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteHashLocation) ;

/// @brief Method LoadContentCatalogInternal addr 0x28a008c size 0x1f4 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> LoadContentCatalogInternal(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> catalogs, int32_t index, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locMap, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteHashLocation) ;

/// @brief Method LoadOpComplete addr 0x28a0cdc size 0x1368 virtual false final false
 void LoadOpComplete(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> op, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> catalogs, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locMap, int32_t index, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteHashLocation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::InitializationOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::InitializationOperation, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation");
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c");
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass16_0, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c__DisplayClass16_0");
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__InitializationOperation____c__DisplayClass18_0, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c__DisplayClass18_0");
