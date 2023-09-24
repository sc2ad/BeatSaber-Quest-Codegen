#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTypeExtensions;
}
// Type: ::SaberTypeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15126))
// CS Name: SaberTypeExtensions
class CORDL_TYPE SaberTypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SaberTypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: " const&", def_value: None }]
constexpr SaberTypeExtensions(SaberTypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: "&&", def_value: None }]
constexpr SaberTypeExtensions(SaberTypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberTypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SaberTypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberTypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberTypeExtensions& operator=(SaberTypeExtensions&& o) noexcept = default;
  constexpr SaberTypeExtensions& operator=(SaberTypeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method MatchesColorType addr 0x1216f30 size 0x28 virtual false final false
static bool MatchesColorType(GlobalNamespace::SaberType saberType, GlobalNamespace::ColorType colorType) ;

/// @brief Method Node addr 0x12196b4 size 0x10 virtual false final false
static UnityEngine::XR::XRNode Node(GlobalNamespace::SaberType saberType) ;

/// @brief Method MainSaber addr 0x12196c4 size 0xc virtual false final false
static GlobalNamespace::SaberType MainSaber(bool leftHanded) ;

/// @brief Method ToSaberType addr 0x12196d0 size 0x88 virtual false final false
static GlobalNamespace::SaberType ToSaberType(GlobalNamespace::ColorType colorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTypeExtensions, "", "SaberTypeExtensions");
