#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
namespace UnityEngine::ResourceManagement {
struct UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
// Type: UnityEngine.AddressableAssets.Utility::ResourceManagerDiagnostics
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14382))
// CS Name: UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics
class CORDL_TYPE ResourceManagerDiagnostics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResourceManagerDiagnostics() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: " const&", def_value: None }]
constexpr ResourceManagerDiagnostics(ResourceManagerDiagnostics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: "&&", def_value: None }]
constexpr ResourceManagerDiagnostics(ResourceManagerDiagnostics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManagerDiagnostics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceManagerDiagnostics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManagerDiagnostics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManagerDiagnostics& operator=(ResourceManagerDiagnostics&& o) noexcept = default;
  constexpr ResourceManagerDiagnostics& operator=(ResourceManagerDiagnostics const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get_m_ResourceManager, put=__set_m_ResourceManager))  m_ResourceManager;

constexpr void __set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr UnityEngine::ResourceManagement::ResourceManager __get_m_ResourceManager() const;

/// @brief Field k_NumberOfCompletedOpResultEntriesToShow offset 0
static constexpr int32_t  k_NumberOfCompletedOpResultEntriesToShow{4};

/// @brief Field k_MaximumCompletedOpResultEntryLength offset 0
static constexpr int32_t  k_MaximumCompletedOpResultEntryLength{30};

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AddressableAssets::Utility::DiagnosticInfo> __declspec(property(get=__get_m_cachedDiagnosticInfo, put=__set_m_cachedDiagnosticInfo))  m_cachedDiagnosticInfo;

constexpr void __set_m_cachedDiagnosticInfo(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AddressableAssets::Utility::DiagnosticInfo> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AddressableAssets::Utility::DiagnosticInfo> __get_m_cachedDiagnosticInfo() const;


// Methods

static UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics New_ctor(UnityEngine::ResourceManagement::ResourceManager resourceManager) ;

/// @brief Method .ctor addr 0x2896e4c size 0xec virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceManager resourceManager) ;

/// @brief Method SumDependencyNameHashCodes addr 0x2896f38 size 0x218 virtual false final false
 int32_t SumDependencyNameHashCodes(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method CalculateHashCode addr 0x2897150 size 0x144 virtual false final false
 int32_t CalculateHashCode(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method CalculateCompletedOperationHashcode addr 0x2897294 size 0x8c virtual false final false
 int32_t CalculateCompletedOperationHashcode(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method GenerateCompletedOperationDisplayName addr 0x2897320 size 0x430 virtual false final false
 ::StringW GenerateCompletedOperationDisplayName(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method OnResourceManagerDiagnosticEvent addr 0x2897750 size 0x3c8 virtual false final false
 void OnResourceManagerDiagnosticEvent(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext eventContext) ;

/// @brief Method Dispose addr 0x2897b18 size 0xd4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics, "UnityEngine.AddressableAssets.Utility", "ResourceManagerDiagnostics");
