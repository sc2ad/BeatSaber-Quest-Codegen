#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct RuntimePlatform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::AddressableAssets {
struct AddressablesPlatform;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class PlatformMappingService;
}
// Type: UnityEngine.AddressableAssets::PlatformMappingService
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14380))
// CS Name: UnityEngine.AddressableAssets.PlatformMappingService
class CORDL_TYPE PlatformMappingService : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformMappingService() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: " const&", def_value: None }]
constexpr PlatformMappingService(PlatformMappingService const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: "&&", def_value: None }]
constexpr PlatformMappingService(PlatformMappingService&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformMappingService(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformMappingService& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformMappingService& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformMappingService& operator=(PlatformMappingService&& o) noexcept = default;
  constexpr PlatformMappingService& operator=(PlatformMappingService const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,::UnityEngine::AddressableAssets::AddressablesPlatform> __declspec(property(get=__get_s_RuntimeTargetMapping, put=__set_s_RuntimeTargetMapping))  s_RuntimeTargetMapping;

static void __set_s_RuntimeTargetMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,::UnityEngine::AddressableAssets::AddressablesPlatform> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,::UnityEngine::AddressableAssets::AddressablesPlatform> __get_s_RuntimeTargetMapping() ;


// Methods

/// @brief Method GetAddressablesPlatformInternal addr 0x28969d8 size 0xd4 virtual false final false
static ::UnityEngine::AddressableAssets::AddressablesPlatform GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform platform) ;

/// @brief Method GetAddressablesPlatformPathInternal addr 0x2896aac size 0x120 virtual false final false
static ::StringW GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform platform) ;

/// @brief Method GetPlatform addr 0x2896bcc size 0x60 virtual false final false
static ::UnityEngine::AddressableAssets::AddressablesPlatform GetPlatform() ;

/// @brief Method GetPlatformPathSubFolder addr 0x288a884 size 0x60 virtual false final false
static ::StringW GetPlatformPathSubFolder() ;

// Ctor Parameters []
explicit PlatformMappingService() ;

/// @brief Method .ctor addr 0x2896c2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::PlatformMappingService);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::PlatformMappingService, "UnityEngine.AddressableAssets", "PlatformMappingService");
