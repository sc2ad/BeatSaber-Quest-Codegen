#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class RankModelHelper;
}
// Type: ::RankModelHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4780))
// CS Name: RankModelHelper
class CORDL_TYPE RankModelHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RankModelHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "RankModelHelper", modifiers: " const&", def_value: None }]
constexpr RankModelHelper(RankModelHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RankModelHelper", modifiers: "&&", def_value: None }]
constexpr RankModelHelper(RankModelHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RankModelHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RankModelHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RankModelHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RankModelHelper& operator=(RankModelHelper&& o) noexcept = default;
  constexpr RankModelHelper& operator=(RankModelHelper const& o) noexcept = default;
                


// Methods

/// @brief Method MaxRankForGameplayModifiers addr 0x2229b24 size 0x68 virtual false final false
static GlobalNamespace::GlobalNamespace__RankModel__Rank MaxRankForGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO gameplayModifiersModel, float_t energy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RankModelHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModelHelper, "", "RankModelHelper");
