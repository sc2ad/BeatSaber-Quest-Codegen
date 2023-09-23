#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__ScoringType;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ScoreModel__MaxScoreCounterElement;
}
namespace GlobalNamespace {
class GlobalNamespace__ScoreModel__NoteScoreDefinition;
}
namespace GlobalNamespace {
class ScoreModel;
}
// Type: ::NoteScoreDefinition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4796))
// CS Name: ScoreModel::NoteScoreDefinition
class CORDL_TYPE GlobalNamespace__ScoreModel__NoteScoreDefinition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__ScoreModel__NoteScoreDefinition() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreModel__NoteScoreDefinition", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition(GlobalNamespace__ScoreModel__NoteScoreDefinition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreModel__NoteScoreDefinition", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition(GlobalNamespace__ScoreModel__NoteScoreDefinition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScoreModel__NoteScoreDefinition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition& operator=(GlobalNamespace__ScoreModel__NoteScoreDefinition&& o) noexcept = default;
  constexpr GlobalNamespace__ScoreModel__NoteScoreDefinition& operator=(GlobalNamespace__ScoreModel__NoteScoreDefinition const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_maxCenterDistanceCutScore, put=__set_maxCenterDistanceCutScore))  maxCenterDistanceCutScore;

constexpr void __set_maxCenterDistanceCutScore(int32_t value) ;

constexpr int32_t __get_maxCenterDistanceCutScore() const;

 int32_t __declspec(property(get=__get_minBeforeCutScore, put=__set_minBeforeCutScore))  minBeforeCutScore;

constexpr void __set_minBeforeCutScore(int32_t value) ;

constexpr int32_t __get_minBeforeCutScore() const;

 int32_t __declspec(property(get=__get_maxBeforeCutScore, put=__set_maxBeforeCutScore))  maxBeforeCutScore;

constexpr void __set_maxBeforeCutScore(int32_t value) ;

constexpr int32_t __get_maxBeforeCutScore() const;

 int32_t __declspec(property(get=__get_minAfterCutScore, put=__set_minAfterCutScore))  minAfterCutScore;

constexpr void __set_minAfterCutScore(int32_t value) ;

constexpr int32_t __get_minAfterCutScore() const;

 int32_t __declspec(property(get=__get_maxAfterCutScore, put=__set_maxAfterCutScore))  maxAfterCutScore;

constexpr void __set_maxAfterCutScore(int32_t value) ;

constexpr int32_t __get_maxAfterCutScore() const;

 int32_t __declspec(property(get=__get_fixedCutScore, put=__set_fixedCutScore))  fixedCutScore;

constexpr void __set_fixedCutScore(int32_t value) ;

constexpr int32_t __get_fixedCutScore() const;


// Properties

 int32_t __declspec(property(get=get_maxCutScore))  maxCutScore;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;


// Methods

/// @brief Method get_maxCutScore addr 0x222c40c size 0x1c virtual false final false
 int32_t get_maxCutScore() ;

/// @brief Method get_executionOrder addr 0x222c800 size 0x1c virtual false final false
 int32_t get_executionOrder() ;

// Ctor Parameters [CppParam { name: "maxCenterDistanceCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minBeforeCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxBeforeCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minAfterCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxAfterCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fixedCutScore", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ScoreModel__NoteScoreDefinition(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore, int32_t fixedCutScore) ;

/// @brief Method .ctor addr 0x222c7ac size 0x54 virtual false final false
 void _ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore, int32_t fixedCutScore) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MaxScoreCounterElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4797))
// CS Name: ScoreModel::MaxScoreCounterElement
class CORDL_TYPE GlobalNamespace__ScoreModel__MaxScoreCounterElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>
constexpr operator  System::IComparable_1<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__ScoreModel__MaxScoreCounterElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreModel__MaxScoreCounterElement", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement(GlobalNamespace__ScoreModel__MaxScoreCounterElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreModel__MaxScoreCounterElement", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement(GlobalNamespace__ScoreModel__MaxScoreCounterElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScoreModel__MaxScoreCounterElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement& operator=(GlobalNamespace__ScoreModel__MaxScoreCounterElement&& o) noexcept = default;
  constexpr GlobalNamespace__ScoreModel__MaxScoreCounterElement& operator=(GlobalNamespace__ScoreModel__MaxScoreCounterElement const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition __declspec(property(get=__get_noteScoreDefinition, put=__set_noteScoreDefinition))  noteScoreDefinition;

constexpr void __set_noteScoreDefinition(GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition __get_noteScoreDefinition() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

// Ctor Parameters [CppParam { name: "scoringType", ty: "GlobalNamespace::GlobalNamespace__NoteData__ScoringType", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ScoreModel__MaxScoreCounterElement(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, float_t time) ;

/// @brief Method .ctor addr 0x222c388 size 0x84 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, float_t time) ;

/// @brief Method CompareTo addr 0x222c81c size 0x90 virtual true final true
 int32_t CompareTo(GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoreModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4798))
// CS Name: ScoreModel
class CORDL_TYPE ScoreModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MaxScoreCounterElement = GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement;

using NoteScoreDefinition = GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScoreModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: " const&", def_value: None }]
constexpr ScoreModel(ScoreModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: "&&", def_value: None }]
constexpr ScoreModel(ScoreModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScoreModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreModel& operator=(ScoreModel&& o) noexcept = default;
  constexpr ScoreModel& operator=(ScoreModel const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxMultiplier offset 0
static constexpr int32_t  kMaxMultiplier{8};

/// @brief Field kMaxDistanceForDistanceToCenterScore offset 0
static constexpr float_t  kMaxDistanceForDistanceToCenterScore{0.3};

static System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> __declspec(property(get=__get_fullScoreScoringTypes, put=__set_fullScoreScoringTypes))  fullScoreScoringTypes;

static void __set_fullScoreScoringTypes(System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> value) ;

static System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> __get_fullScoreScoringTypes() ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition> __declspec(property(get=__get__scoreDefinitions, put=__set__scoreDefinitions))  _scoreDefinitions;

static void __set__scoreDefinitions(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition> __get__scoreDefinitions() ;

/// @brief Field kMaxBeforeCutScore offset 0
static constexpr int32_t  kMaxBeforeCutScore{70};

/// @brief Field kMaxCenterDistanceCutScore offset 0
static constexpr int32_t  kMaxCenterDistanceCutScore{15};

/// @brief Field kMaxAfterCutScore offset 0
static constexpr int32_t  kMaxAfterCutScore{30};

static GlobalNamespace::ScoreMultiplierCounter __declspec(property(get=__get__scoreMultiplierCounter, put=__set__scoreMultiplierCounter))  _scoreMultiplierCounter;

static void __set__scoreMultiplierCounter(GlobalNamespace::ScoreMultiplierCounter value) ;

static GlobalNamespace::ScoreMultiplierCounter __get__scoreMultiplierCounter() ;


// Methods

/// @brief Method GetNoteScoreDefinition addr 0x222b8a0 size 0x80 virtual false final false
static GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition GetNoteScoreDefinition(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType) ;

/// @brief Method ComputeMaxMultipliedScoreForBeatmap addr 0x222b920 size 0xa68 virtual false final false
static int32_t ComputeMaxMultipliedScoreForBeatmap(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method GetModifiedScoreForGameplayModifiersScoreMultiplier addr 0x222c428 size 0x74 virtual false final false
static int32_t GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t multipliedScore, float_t gameplayModifiersScoreMultiplier) ;

// Ctor Parameters []
explicit ScoreModel() ;

/// @brief Method .ctor addr 0x222c49c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement, "", "ScoreModel/MaxScoreCounterElement");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition, "", "ScoreModel/NoteScoreDefinition");
NEED_NO_BOX(GlobalNamespace::ScoreModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreModel, "", "ScoreModel");
