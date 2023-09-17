#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestUtilities;
}
// Type: UnityEngine.ResourceManagement.Util::UnityWebRequestUtilities
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14267))
// CS Name: UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities
class CORDL_TYPE UnityWebRequestUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityWebRequestUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestUtilities(UnityWebRequestUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestUtilities(UnityWebRequestUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequestUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestUtilities& operator=(UnityWebRequestUtilities&& o) noexcept = default;
  constexpr UnityWebRequestUtilities& operator=(UnityWebRequestUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method RequestHasErrors addr 0x2a3b7f4 size 0x138 virtual false final false
static bool RequestHasErrors(::UnityEngine::Networking::UnityWebRequest webReq, ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult> result) ;

/// @brief Method IsAssetBundleDownloaded addr 0x2a38118 size 0xa4 virtual false final false
static bool IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation op) ;

// Ctor Parameters []
explicit UnityWebRequestUtilities() ;

/// @brief Method .ctor addr 0x2a3ba34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities, "UnityEngine.ResourceManagement.Util", "UnityWebRequestUtilities");
