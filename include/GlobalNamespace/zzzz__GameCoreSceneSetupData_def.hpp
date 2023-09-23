#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetupData;
}
// Type: ::GameCoreSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6102))
// CS Name: GameCoreSceneSetupData
class CORDL_TYPE GameCoreSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GameCoreSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: " const&", def_value: None }]
constexpr GameCoreSceneSetupData(GameCoreSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: "&&", def_value: None }]
constexpr GameCoreSceneSetupData(GameCoreSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameCoreSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr GameCoreSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameCoreSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameCoreSceneSetupData& operator=(GameCoreSceneSetupData&& o) noexcept = default;
  constexpr GameCoreSceneSetupData& operator=(GameCoreSceneSetupData const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GameCoreSceneSetupData() ;

/// @brief Method .ctor addr 0x21b6aec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameCoreSceneSetupData, "", "GameCoreSceneSetupData");
