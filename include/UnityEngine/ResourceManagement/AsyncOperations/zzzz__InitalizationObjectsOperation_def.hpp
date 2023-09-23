#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::InitalizationObjectsOperation
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14328))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
class CORDL_TYPE InitalizationObjectsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~InitalizationObjectsOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: " const&", def_value: None }]
constexpr InitalizationObjectsOperation(InitalizationObjectsOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: "&&", def_value: None }]
constexpr InitalizationObjectsOperation(InitalizationObjectsOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InitalizationObjectsOperation(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(ptr) {
}


  constexpr InitalizationObjectsOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InitalizationObjectsOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InitalizationObjectsOperation& operator=(InitalizationObjectsOperation&& o) noexcept = default;
  constexpr InitalizationObjectsOperation& operator=(InitalizationObjectsOperation const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> __declspec(property(get=__get_m_RtdOp, put=__set_m_RtdOp))  m_RtdOp;

constexpr void __set_m_RtdOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> __get_m_RtdOp() const;

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp))  m_DepOp;

constexpr void __set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_DepOp() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

/// @brief Method Init addr 0x287d7d8 size 0x34 virtual false final false
 void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData> rtdOp, UnityEngine::AddressableAssets::AddressablesImpl addressables) ;

/// @brief Method get_DebugName addr 0x287d8a8 size 0x40 virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method LogRuntimeWarnings addr 0x287d8e8 size 0x1fc virtual false final false
 bool LogRuntimeWarnings(::StringW pathToBuildLogs) ;

/// @brief Method InvokeWaitForCompletion addr 0x287dc14 size 0x1a0 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x287ddb4 size 0x6a0 virtual true final false
 void Execute() ;

// Ctor Parameters []
explicit InitalizationObjectsOperation() ;

/// @brief Method .ctor addr 0x287e550 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <Execute>b__8_0 addr 0x287e598 size 0x1ac virtual false final false
 void _Execute_b__8_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, "UnityEngine.ResourceManagement.AsyncOperations", "InitalizationObjectsOperation");
