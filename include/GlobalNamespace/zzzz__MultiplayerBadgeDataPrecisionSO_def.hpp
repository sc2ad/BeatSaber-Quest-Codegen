#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataPrecisionSO;
}
// Type: ::MultiplayerBadgeDataPrecisionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5206))
// CS Name: MultiplayerBadgeDataPrecisionSO
class CORDL_TYPE MultiplayerBadgeDataPrecisionSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataPrecisionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPrecisionSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataPrecisionSO(MultiplayerBadgeDataPrecisionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPrecisionSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataPrecisionSO(MultiplayerBadgeDataPrecisionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataPrecisionSO(void* ptr) noexcept : GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO(ptr) {
}


  constexpr MultiplayerBadgeDataPrecisionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataPrecisionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataPrecisionSO& operator=(MultiplayerBadgeDataPrecisionSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataPrecisionSO& operator=(MultiplayerBadgeDataPrecisionSO const& o) noexcept = default;
                


// Methods

/// @brief Method GetValue addr 0x20da24c size 0x3c virtual true final false
 float_t GetValue(GlobalNamespace::MultiplayerPlayerResultsData result) ;

static GlobalNamespace::MultiplayerBadgeDataPrecisionSO New_ctor() ;

/// @brief Method .ctor addr 0x20da288 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgeDataPrecisionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataPrecisionSO, "", "MultiplayerBadgeDataPrecisionSO");
