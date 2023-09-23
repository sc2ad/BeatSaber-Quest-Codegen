#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsIdModel;
}
// Type: ::LocalLeaderboardsIdModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4233))
// CS Name: LocalLeaderboardsIdModel
class CORDL_TYPE LocalLeaderboardsIdModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LocalLeaderboardsIdModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: " const&", def_value: None }]
constexpr LocalLeaderboardsIdModel(LocalLeaderboardsIdModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "&&", def_value: None }]
constexpr LocalLeaderboardsIdModel(LocalLeaderboardsIdModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalLeaderboardsIdModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalLeaderboardsIdModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalLeaderboardsIdModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalLeaderboardsIdModel& operator=(LocalLeaderboardsIdModel&& o) noexcept = default;
  constexpr LocalLeaderboardsIdModel& operator=(LocalLeaderboardsIdModel const& o) noexcept = default;
                


// Methods

/// @brief Method GetLocalLeaderboardID addr 0x21c3bc4 size 0x8 virtual false final false
static ::StringW GetLocalLeaderboardID(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

// Ctor Parameters []
explicit LocalLeaderboardsIdModel() ;

/// @brief Method .ctor addr 0x21c3bcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalLeaderboardsIdModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsIdModel, "", "LocalLeaderboardsIdModel");
