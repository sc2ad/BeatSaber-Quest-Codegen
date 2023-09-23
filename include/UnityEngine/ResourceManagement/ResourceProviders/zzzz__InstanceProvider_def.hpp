#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class InstanceProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::InstanceProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14281))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.InstanceProvider
class CORDL_TYPE InstanceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider
constexpr operator  UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InstanceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: " const&", def_value: None }]
constexpr InstanceProvider(InstanceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "&&", def_value: None }]
constexpr InstanceProvider(InstanceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstanceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstanceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstanceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstanceProvider& operator=(InstanceProvider&& o) noexcept = default;
  constexpr InstanceProvider& operator=(InstanceProvider const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>> __declspec(property(get=__get_m_InstanceObjectToPrefabHandle, put=__set_m_InstanceObjectToPrefabHandle))  m_InstanceObjectToPrefabHandle;

constexpr void __set_m_InstanceObjectToPrefabHandle(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>> __get_m_InstanceObjectToPrefabHandle() const;


// Methods

/// @brief Method ProvideInstance addr 0x2a3f4ac size 0xd8 virtual true final true
 UnityEngine::GameObject ProvideInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> prefabHandle, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) ;

/// @brief Method ReleaseInstance addr 0x2a3f584 size 0x218 virtual true final true
 void ReleaseInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::GameObject instance) ;

// Ctor Parameters []
explicit InstanceProvider() ;

/// @brief Method .ctor addr 0x2a3f79c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider, "UnityEngine.ResourceManagement.ResourceProviders", "InstanceProvider");
