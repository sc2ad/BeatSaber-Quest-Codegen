#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataGoodCutsSO;
}
// Type: ::MultiplayerBadgeDataGoodCutsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5201))
// CS Name: MultiplayerBadgeDataGoodCutsSO
class CORDL_TYPE MultiplayerBadgeDataGoodCutsSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataGoodCutsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataGoodCutsSO(void* ptr) noexcept : ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO(ptr) {
}


  constexpr MultiplayerBadgeDataGoodCutsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataGoodCutsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataGoodCutsSO& operator=(MultiplayerBadgeDataGoodCutsSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataGoodCutsSO& operator=(MultiplayerBadgeDataGoodCutsSO const& o) noexcept = default;
                


// Methods

/// @brief Method GetValue addr 0x20d864c size 0x28 virtual true final false
 int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData result) ;

// Ctor Parameters []
explicit MultiplayerBadgeDataGoodCutsSO() ;

/// @brief Method .ctor addr 0x20d8674 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO, "", "MultiplayerBadgeDataGoodCutsSO");
