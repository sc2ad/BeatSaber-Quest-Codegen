#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class AvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarDataMultiplayerAvatarDataConverter;
}
// Type: ::AvatarDataMultiplayerAvatarDataConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4768))
// CS Name: AvatarDataMultiplayerAvatarDataConverter
class CORDL_TYPE AvatarDataMultiplayerAvatarDataConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AvatarDataMultiplayerAvatarDataConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataMultiplayerAvatarDataConverter", modifiers: " const&", def_value: None }]
constexpr AvatarDataMultiplayerAvatarDataConverter(AvatarDataMultiplayerAvatarDataConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataMultiplayerAvatarDataConverter", modifiers: "&&", def_value: None }]
constexpr AvatarDataMultiplayerAvatarDataConverter(AvatarDataMultiplayerAvatarDataConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarDataMultiplayerAvatarDataConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarDataMultiplayerAvatarDataConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarDataMultiplayerAvatarDataConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarDataMultiplayerAvatarDataConverter& operator=(AvatarDataMultiplayerAvatarDataConverter&& o) noexcept = default;
  constexpr AvatarDataMultiplayerAvatarDataConverter& operator=(AvatarDataMultiplayerAvatarDataConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CreateMultiplayerAvatarData addr 0x2227b48 size 0x1710 virtual false final false
static ::GlobalNamespace::MultiplayerAvatarData CreateMultiplayerAvatarData(::GlobalNamespace::AvatarData avatarData) ;

/// @brief Method CreateAvatarData addr 0x2229258 size 0x300 virtual false final false
static ::GlobalNamespace::AvatarData CreateAvatarData(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter, "", "AvatarDataMultiplayerAvatarDataConverter");
