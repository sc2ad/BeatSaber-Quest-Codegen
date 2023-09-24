#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class LegacyResourcesProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp;
}
// Type: ::InternalOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14290))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider::InternalOp
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp(UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp(UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceRequest __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation))  m_RequestOperation;

constexpr void __set_m_RequestOperation(UnityEngine::ResourceRequest value) ;

constexpr UnityEngine::ResourceRequest __get_m_RequestOperation() const;

 UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __declspec(property(get=__get_m_ProvideHandle, put=__set_m_ProvideHandle))  m_ProvideHandle;

constexpr void __set_m_ProvideHandle(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __get_m_ProvideHandle() const;


// Methods

/// @brief Method Start addr 0x2a401c8 size 0x190 virtual false final false
 void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

/// @brief Method WaitForCompletionHandler addr 0x2a40488 size 0x14 virtual false final false
 bool WaitForCompletionHandler() ;

/// @brief Method AsyncOperationCompleted addr 0x2a4049c size 0x184 virtual false final false
 void AsyncOperationCompleted(UnityEngine::AsyncOperation op) ;

/// @brief Method PercentComplete addr 0x2a40620 size 0x18 virtual false final false
 float_t PercentComplete() ;

static UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp New_ctor() ;

/// @brief Method .ctor addr 0x2a401c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::LegacyResourcesProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14291))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
class CORDL_TYPE LegacyResourcesProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LegacyResourcesProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider", modifiers: " const&", def_value: None }]
constexpr LegacyResourcesProvider(LegacyResourcesProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider", modifiers: "&&", def_value: None }]
constexpr LegacyResourcesProvider(LegacyResourcesProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LegacyResourcesProvider(void* ptr) noexcept : UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr LegacyResourcesProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LegacyResourcesProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LegacyResourcesProvider& operator=(LegacyResourcesProvider&& o) noexcept = default;
  constexpr LegacyResourcesProvider& operator=(LegacyResourcesProvider const& o) noexcept = default;
                


// Methods

/// @brief Method Provide addr 0x2a3fdd4 size 0x3ec virtual true final false
 void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle pi) ;

/// @brief Method Release addr 0x2a40358 size 0x128 virtual true final false
 void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType asset) ;

static UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider New_ctor() ;

/// @brief Method .ctor addr 0x2a40480 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__LegacyResourcesProvider__InternalOp, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider/InternalOp");
