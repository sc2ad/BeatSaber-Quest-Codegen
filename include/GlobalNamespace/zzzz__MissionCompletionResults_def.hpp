#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Type: ::MissionCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4463))
// CS Name: MissionCompletionResults
class CORDL_TYPE MissionCompletionResults : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionCompletionResults() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: " const&", def_value: None }]
constexpr MissionCompletionResults(MissionCompletionResults const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: "&&", def_value: None }]
constexpr MissionCompletionResults(MissionCompletionResults&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionCompletionResults(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MissionCompletionResults& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionCompletionResults& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionCompletionResults& operator=(MissionCompletionResults&& o) noexcept = default;
  constexpr MissionCompletionResults& operator=(MissionCompletionResults const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LevelCompletionResults __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults))  levelCompletionResults;

constexpr void __set_levelCompletionResults(GlobalNamespace::LevelCompletionResults value) ;

constexpr GlobalNamespace::LevelCompletionResults __get_levelCompletionResults() const;

 ::ArrayW<GlobalNamespace::MissionObjectiveResult> __declspec(property(get=__get_missionObjectiveResults, put=__set_missionObjectiveResults))  missionObjectiveResults;

constexpr void __set_missionObjectiveResults(::ArrayW<GlobalNamespace::MissionObjectiveResult> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjectiveResult> __get_missionObjectiveResults() const;


// Properties

 bool __declspec(property(get=get_IsMissionComplete))  IsMissionComplete;


// Methods

/// @brief Method get_IsMissionComplete addr 0x21f08fc size 0x68 virtual false final false
 bool get_IsMissionComplete() ;

// Ctor Parameters [CppParam { name: "levelCompletionResults", ty: "GlobalNamespace::LevelCompletionResults", modifiers: "", def_value: None }, CppParam { name: "missionObjectiveResults", ty: "::ArrayW<GlobalNamespace::MissionObjectiveResult>", modifiers: "", def_value: None }]
explicit MissionCompletionResults(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::ArrayW<GlobalNamespace::MissionObjectiveResult> missionObjectiveResults) ;

/// @brief Method .ctor addr 0x21f0964 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::ArrayW<GlobalNamespace::MissionObjectiveResult> missionObjectiveResults) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionCompletionResults, "", "MissionCompletionResults");
