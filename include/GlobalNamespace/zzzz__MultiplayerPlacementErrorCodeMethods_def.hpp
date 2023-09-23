#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlacementErrorCodeMethods;
}
// Type: ::MultiplayerPlacementErrorCodeMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12681))
// CS Name: MultiplayerPlacementErrorCodeMethods
class CORDL_TYPE MultiplayerPlacementErrorCodeMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultiplayerPlacementErrorCodeMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlacementErrorCodeMethods", modifiers: " const&", def_value: None }]
constexpr MultiplayerPlacementErrorCodeMethods(MultiplayerPlacementErrorCodeMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlacementErrorCodeMethods", modifiers: "&&", def_value: None }]
constexpr MultiplayerPlacementErrorCodeMethods(MultiplayerPlacementErrorCodeMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlacementErrorCodeMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerPlacementErrorCodeMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPlacementErrorCodeMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPlacementErrorCodeMethods& operator=(MultiplayerPlacementErrorCodeMethods&& o) noexcept = default;
  constexpr MultiplayerPlacementErrorCodeMethods& operator=(MultiplayerPlacementErrorCodeMethods const& o) noexcept = default;
                


// Methods

/// @brief Method ToConnectionFailedReason addr 0xdac3d4 size 0x20 virtual false final false
static GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(GlobalNamespace::MultiplayerPlacementErrorCode errorCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerPlacementErrorCodeMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlacementErrorCodeMethods, "", "MultiplayerPlacementErrorCodeMethods");
