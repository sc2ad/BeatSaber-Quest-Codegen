#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusRichPresencePlatformHandler;
}
// Type: ::OculusRichPresencePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4788))
// CS Name: OculusRichPresencePlatformHandler
class CORDL_TYPE OculusRichPresencePlatformHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IRichPresencePlatformHandler
constexpr operator  ::GlobalNamespace::IRichPresencePlatformHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusRichPresencePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: " const&", def_value: None }]
constexpr OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
constexpr OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusRichPresencePlatformHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusRichPresencePlatformHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusRichPresencePlatformHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusRichPresencePlatformHandler& operator=(OculusRichPresencePlatformHandler&& o) noexcept = default;
  constexpr OculusRichPresencePlatformHandler& operator=(OculusRichPresencePlatformHandler const& o) noexcept = default;
                


// Methods

/// @brief Method SetPresence addr 0x2229f38 size 0x308 virtual true final true
 void SetPresence(::GlobalNamespace::IRichPresenceData richPresenceData) ;

/// @brief Method Clear addr 0x222a240 size 0x9c virtual true final true
 void Clear() ;

// Ctor Parameters []
explicit OculusRichPresencePlatformHandler() ;

/// @brief Method .ctor addr 0x222a2dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusRichPresencePlatformHandler, "", "OculusRichPresencePlatformHandler");
