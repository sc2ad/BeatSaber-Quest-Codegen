#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::AddressableAssets {
class UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CheckCatalogsOperation;
}
namespace UnityEngine::AddressableAssets {
class UnityEngine__AddressableAssets__CheckCatalogsOperation____c;
}
// Type: ::<>c
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14372))
// CS Name: UnityEngine.AddressableAssets.CheckCatalogsOperation::<>c
class CORDL_TYPE UnityEngine__AddressableAssets__CheckCatalogsOperation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__AddressableAssets__CheckCatalogsOperation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__CheckCatalogsOperation____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c(UnityEngine__AddressableAssets__CheckCatalogsOperation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__CheckCatalogsOperation____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c(UnityEngine__AddressableAssets__CheckCatalogsOperation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__CheckCatalogsOperation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c& operator=(UnityEngine__AddressableAssets__CheckCatalogsOperation____c&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__CheckCatalogsOperation____c& operator=(UnityEngine__AddressableAssets__CheckCatalogsOperation____c const& o) noexcept = default;
                


// Fields

static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c value) ;

static UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c __get___9() ;

static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> value) ;

static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider,bool> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__AddressableAssets__CheckCatalogsOperation____c() ;

/// @brief Method .ctor addr 0x28937e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__5_0 addr 0x28937f0 size 0x9c virtual false final false
 bool _Start_b__5_0(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider rp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::CheckCatalogsOperation
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(3828)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 770 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14373))
// CS Name: UnityEngine.AddressableAssets.CheckCatalogsOperation
class CORDL_TYPE CheckCatalogsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::List_1<::StringW>> {
public:
// Declarations
using __c = UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~CheckCatalogsOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: " const&", def_value: None }]
constexpr CheckCatalogsOperation(CheckCatalogsOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: "&&", def_value: None }]
constexpr CheckCatalogsOperation(CheckCatalogsOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CheckCatalogsOperation(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::List_1<::StringW>>(ptr) {
}


  constexpr CheckCatalogsOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CheckCatalogsOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CheckCatalogsOperation& operator=(CheckCatalogsOperation&& o) noexcept = default;
  constexpr CheckCatalogsOperation& operator=(CheckCatalogsOperation const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_LocalHashes, put=__set_m_LocalHashes))  m_LocalHashes;

constexpr void __set_m_LocalHashes(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_LocalHashes() const;

 System::Collections::Generic::List_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo> __declspec(property(get=__get_m_LocatorInfos, put=__set_m_LocatorInfos))  m_LocatorInfos;

constexpr void __set_m_LocatorInfos(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo> __get_m_LocatorInfos() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_DepOp() const;


// Methods

// Ctor Parameters [CppParam { name: "aa", ty: "UnityEngine::AddressableAssets::AddressablesImpl", modifiers: "", def_value: None }]
explicit CheckCatalogsOperation(UnityEngine::AddressableAssets::AddressablesImpl aa) ;

/// @brief Method .ctor addr 0x288f564 size 0x5c virtual false final false
 void _ctor(UnityEngine::AddressableAssets::AddressablesImpl aa) ;

/// @brief Method Start addr 0x288f5c0 size 0x5f4 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::StringW>> Start(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo> locatorInfos) ;

/// @brief Method InvokeWaitForCompletion addr 0x2892e00 size 0x134 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Destroy addr 0x2892f34 size 0x70 virtual true final false
 void Destroy() ;

/// @brief Method GetDependencies addr 0x2892fa4 size 0x124 virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies) ;

/// @brief Method ProcessDependentOpResults addr 0x28930c8 size 0x624 virtual false final false
static System::Collections::Generic::List_1<::StringW> ProcessDependentOpResults(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> results, System::Collections::Generic::List_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__AddressablesImpl__ResourceLocatorInfo> locatorInfos, System::Collections::Generic::List_1<::StringW> localHashes, ByRef<::StringW> errorString, ByRef<bool> success) ;

/// @brief Method Execute addr 0x28936ec size 0x98 virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::CheckCatalogsOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::CheckCatalogsOperation, "UnityEngine.AddressableAssets", "CheckCatalogsOperation");
NEED_NO_BOX(UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__CheckCatalogsOperation____c, "UnityEngine.AddressableAssets", "CheckCatalogsOperation/<>c");
