#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace System {
class Array;
}
namespace System::Collections {
class IList;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class ResourceManagerConfig;
}
// Type: UnityEngine.ResourceManagement.Util::ResourceManagerConfig
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14266))
// CS Name: UnityEngine.ResourceManagement.Util.ResourceManagerConfig
class CORDL_TYPE ResourceManagerConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ResourceManagerConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerConfig", modifiers: " const&", def_value: None }]
constexpr ResourceManagerConfig(ResourceManagerConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerConfig", modifiers: "&&", def_value: None }]
constexpr ResourceManagerConfig(ResourceManagerConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManagerConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceManagerConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManagerConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManagerConfig& operator=(ResourceManagerConfig&& o) noexcept = default;
  constexpr ResourceManagerConfig& operator=(ResourceManagerConfig const& o) noexcept = default;
                


// Methods

/// @brief Method ExtractKeyAndSubKey addr 0x2a3b168 size 0xe4 virtual false final false
static bool ExtractKeyAndSubKey(::bs_hook::Il2CppWrapperType keyObj, ByRef<::StringW> mainKey, ByRef<::StringW> subKey) ;

/// @brief Method IsPathRemote addr 0x2a3b24c size 0x60 virtual false final false
static bool IsPathRemote(::StringW path) ;

/// @brief Method StripQueryParameters addr 0x2a3b2ac size 0x44 virtual false final false
static ::StringW StripQueryParameters(::StringW path) ;

/// @brief Method ShouldPathUseWebRequest addr 0x2a3b2f0 size 0x7c virtual false final false
static bool ShouldPathUseWebRequest(::StringW path) ;

/// @brief Method PlatformCanLoadLocallyFromUrlPath addr 0x2a3b36c size 0x104 virtual false final false
static bool PlatformCanLoadLocallyFromUrlPath() ;

/// @brief Method CreateArrayResult addr 0x2a3b470 size 0x1b8 virtual false final false
static ::System::Array CreateArrayResult(::System::Type type, ::ArrayW<::UnityEngine::Object> allAssets) ;

/// @brief Method CreateArrayResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static TObject CreateArrayResult(::ArrayW<::UnityEngine::Object> allAssets) ;

/// @brief Method CreateListResult addr 0x2a3b628 size 0x1cc virtual false final false
static ::System::Collections::IList CreateListResult(::System::Type type, ::ArrayW<::UnityEngine::Object> allAssets) ;

/// @brief Method CreateListResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static TObject CreateListResult(::ArrayW<::UnityEngine::Object> allAssets) ;

/// @brief Method IsInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static bool IsInstance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig, "UnityEngine.ResourceManagement.Util", "ResourceManagerConfig");
