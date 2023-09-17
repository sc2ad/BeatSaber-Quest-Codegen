#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
// Type: ::GameplayModifierInfoListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13725)), TypeDefinitionIndex(TypeDefinitionIndex(5514)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13725), inst: 5043 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5515))
// CS Name: GameplayModifierInfoListItemsList
class CORDL_TYPE GameplayModifierInfoListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::GameplayModifierInfoListItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GameplayModifierInfoListItemsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: " const&", def_value: None }]
constexpr GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: "&&", def_value: None }]
constexpr GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierInfoListItemsList(void* ptr) noexcept : ::HMUI::UIItemsList_1<::GlobalNamespace::GameplayModifierInfoListItem>(ptr) {
}


  constexpr GameplayModifierInfoListItemsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifierInfoListItemsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifierInfoListItemsList& operator=(GameplayModifierInfoListItemsList&& o) noexcept = default;
  constexpr GameplayModifierInfoListItemsList& operator=(GameplayModifierInfoListItemsList const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GameplayModifierInfoListItemsList() ;

/// @brief Method .ctor addr 0x2123158 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItemsList, "", "GameplayModifierInfoListItemsList");
