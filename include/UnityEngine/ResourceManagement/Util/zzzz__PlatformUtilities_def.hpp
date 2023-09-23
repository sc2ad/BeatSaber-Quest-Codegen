#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class PlatformUtilities;
}
// Type: UnityEngine.ResourceManagement.Util::PlatformUtilities
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14255))
// CS Name: UnityEngine.ResourceManagement.Util.PlatformUtilities
class CORDL_TYPE PlatformUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: " const&", def_value: None }]
constexpr PlatformUtilities(PlatformUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: "&&", def_value: None }]
constexpr PlatformUtilities(PlatformUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformUtilities& operator=(PlatformUtilities&& o) noexcept = default;
  constexpr PlatformUtilities& operator=(PlatformUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method PlatformUsesMultiThreading addr 0x2a3a684 size 0xc virtual false final false
static bool PlatformUsesMultiThreading(UnityEngine::RuntimePlatform platform) ;

// Ctor Parameters []
explicit PlatformUtilities() ;

/// @brief Method .ctor addr 0x2a3a690 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::PlatformUtilities);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::PlatformUtilities, "UnityEngine.ResourceManagement.Util", "PlatformUtilities");
