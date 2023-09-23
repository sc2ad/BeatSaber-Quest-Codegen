#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeScoreAndImmediateRankCounter;
}
// Type: ::RelativeScoreAndImmediateRankCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5142))
// CS Name: RelativeScoreAndImmediateRankCounter
class CORDL_TYPE RelativeScoreAndImmediateRankCounter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RelativeScoreAndImmediateRankCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: " const&", def_value: None }]
constexpr RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: "&&", def_value: None }]
constexpr RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RelativeScoreAndImmediateRankCounter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RelativeScoreAndImmediateRankCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RelativeScoreAndImmediateRankCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RelativeScoreAndImmediateRankCounter& operator=(RelativeScoreAndImmediateRankCounter&& o) noexcept = default;
  constexpr RelativeScoreAndImmediateRankCounter& operator=(RelativeScoreAndImmediateRankCounter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 System::Action __declspec(property(get=__get_relativeScoreOrImmediateRankDidChangeEvent, put=__set_relativeScoreOrImmediateRankDidChangeEvent))  relativeScoreOrImmediateRankDidChangeEvent;

constexpr void __set_relativeScoreOrImmediateRankDidChangeEvent(System::Action value) ;

constexpr System::Action __get_relativeScoreOrImmediateRankDidChangeEvent() const;

 float_t __declspec(property(get=__get__relativeScore_k__BackingField, put=__set__relativeScore_k__BackingField))  _relativeScore_k__BackingField;

constexpr void __set__relativeScore_k__BackingField(float_t value) ;

constexpr float_t __get__relativeScore_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=__get__immediateRank_k__BackingField, put=__set__immediateRank_k__BackingField))  _immediateRank_k__BackingField;

constexpr void __set__immediateRank_k__BackingField(GlobalNamespace::GlobalNamespace__RankModel__Rank value) ;

constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank __get__immediateRank_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_relativeScore, put=set_relativeScore))  relativeScore;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=get_immediateRank, put=set_immediateRank))  immediateRank;


// Methods

/// @brief Method add_relativeScoreOrImmediateRankDidChangeEvent addr 0x2275a50 size 0x9c virtual false final false
 void add_relativeScoreOrImmediateRankDidChangeEvent(System::Action value) ;

/// @brief Method remove_relativeScoreOrImmediateRankDidChangeEvent addr 0x2276e2c size 0x9c virtual false final false
 void remove_relativeScoreOrImmediateRankDidChangeEvent(System::Action value) ;

/// @brief Method get_relativeScore addr 0x2276ec8 size 0x8 virtual false final false
 float_t get_relativeScore() ;

/// @brief Method set_relativeScore addr 0x2276ed0 size 0x8 virtual false final false
 void set_relativeScore(float_t value) ;

/// @brief Method get_immediateRank addr 0x2276ed8 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__RankModel__Rank get_immediateRank() ;

/// @brief Method set_immediateRank addr 0x2276ee0 size 0x8 virtual false final false
 void set_immediateRank(GlobalNamespace::GlobalNamespace__RankModel__Rank value) ;

/// @brief Method Start addr 0x2276ee8 size 0x138 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2277020 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleScoreDidChange addr 0x2277128 size 0x13c virtual false final false
 void HandleScoreDidChange(int32_t scoreWithoutModifiers, int32_t scoreWithModifiers) ;

/// @brief Method UpdateRelativeScoreAndImmediateRank addr 0x2277264 size 0x88 virtual false final false
 void UpdateRelativeScoreAndImmediateRank(int32_t score, int32_t modifiedScore, int32_t maxPossibleScore, int32_t maxPossibleModifiedScore) ;

// Ctor Parameters []
explicit RelativeScoreAndImmediateRankCounter() ;

/// @brief Method .ctor addr 0x22772ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RelativeScoreAndImmediateRankCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeScoreAndImmediateRankCounter, "", "RelativeScoreAndImmediateRankCounter");
