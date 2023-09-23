#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierMaskExtensions;
}
// Type: ::GameplayModifierMaskExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15089))
// CS Name: GameplayModifierMaskExtensions
class CORDL_TYPE GameplayModifierMaskExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GameplayModifierMaskExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: " const&", def_value: None }]
constexpr GameplayModifierMaskExtensions(GameplayModifierMaskExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: "&&", def_value: None }]
constexpr GameplayModifierMaskExtensions(GameplayModifierMaskExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierMaskExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayModifierMaskExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifierMaskExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifierMaskExtensions& operator=(GameplayModifierMaskExtensions&& o) noexcept = default;
  constexpr GameplayModifierMaskExtensions& operator=(GameplayModifierMaskExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Contains addr 0x1214f8c size 0x10 virtual false final false
static bool Contains(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other) ;

/// @brief Method DifferenceFrom addr 0x1214f9c size 0x10 virtual false final false
static int32_t DifferenceFrom(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other) ;

/// @brief Method ToHexString addr 0x1214fac size 0x5c virtual false final false
static ::StringW ToHexString(GlobalNamespace::GameplayModifierMask mask) ;

/// @brief Method ToModifiers addr 0x1215008 size 0x148 virtual false final false
static GlobalNamespace::GameplayModifiers ToModifiers(GlobalNamespace::GameplayModifierMask gameplayModifierMask) ;

/// @brief Method ToMask addr 0x1215244 size 0xb8 virtual false final false
static GlobalNamespace::GameplayModifierMask ToMask(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifierMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierMaskExtensions, "", "GameplayModifierMaskExtensions");
