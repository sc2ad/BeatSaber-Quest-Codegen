#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
// Type: ::ScoreData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4236))
// CS Name: LeaderboardScoreUploader::ScoreData
class CORDL_TYPE GlobalNamespace__LeaderboardScoreUploader__ScoreData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__LeaderboardScoreUploader__ScoreData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__ScoreData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData(GlobalNamespace__LeaderboardScoreUploader__ScoreData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__ScoreData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData(GlobalNamespace__LeaderboardScoreUploader__ScoreData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardScoreUploader__ScoreData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData& operator=(GlobalNamespace__LeaderboardScoreUploader__ScoreData&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoreData& operator=(GlobalNamespace__LeaderboardScoreUploader__ScoreData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__playerId_k__BackingField, put=__set__playerId_k__BackingField))  _playerId_k__BackingField;

constexpr void __set__playerId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerId_k__BackingField() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__beatmap_k__BackingField, put=__set__beatmap_k__BackingField))  _beatmap_k__BackingField;

constexpr void __set__beatmap_k__BackingField(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__beatmap_k__BackingField() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers_k__BackingField, put=__set__gameplayModifiers_k__BackingField))  _gameplayModifiers_k__BackingField;

constexpr void __set__gameplayModifiers_k__BackingField(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers_k__BackingField() const;

 int32_t __declspec(property(get=__get__multipliedScore_k__BackingField, put=__set__multipliedScore_k__BackingField))  _multipliedScore_k__BackingField;

constexpr void __set__multipliedScore_k__BackingField(int32_t value) ;

constexpr int32_t __get__multipliedScore_k__BackingField() const;

 int32_t __declspec(property(get=__get__modifiedScore_k__BackingField, put=__set__modifiedScore_k__BackingField))  _modifiedScore_k__BackingField;

constexpr void __set__modifiedScore_k__BackingField(int32_t value) ;

constexpr int32_t __get__modifiedScore_k__BackingField() const;

 bool __declspec(property(get=__get__fullCombo_k__BackingField, put=__set__fullCombo_k__BackingField))  _fullCombo_k__BackingField;

constexpr void __set__fullCombo_k__BackingField(bool value) ;

constexpr bool __get__fullCombo_k__BackingField() const;

 int32_t __declspec(property(get=__get__goodCutsCount_k__BackingField, put=__set__goodCutsCount_k__BackingField))  _goodCutsCount_k__BackingField;

constexpr void __set__goodCutsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__goodCutsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__badCutsCount_k__BackingField, put=__set__badCutsCount_k__BackingField))  _badCutsCount_k__BackingField;

constexpr void __set__badCutsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__badCutsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__missedCount_k__BackingField, put=__set__missedCount_k__BackingField))  _missedCount_k__BackingField;

constexpr void __set__missedCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__missedCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxCombo_k__BackingField, put=__set__maxCombo_k__BackingField))  _maxCombo_k__BackingField;

constexpr void __set__maxCombo_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxCombo_k__BackingField() const;

 int32_t __declspec(property(get=__get_uploadAttemptCount, put=__set_uploadAttemptCount))  uploadAttemptCount;

constexpr void __set_uploadAttemptCount(int32_t value) ;

constexpr int32_t __get_uploadAttemptCount() const;

 int32_t __declspec(property(get=__get_currentUploadAttemptCount, put=__set_currentUploadAttemptCount))  currentUploadAttemptCount;

constexpr void __set_currentUploadAttemptCount(int32_t value) ;

constexpr int32_t __get_currentUploadAttemptCount() const;


// Properties

 ::StringW __declspec(property(get=get_playerId, put=set_playerId))  playerId;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_beatmap, put=set_beatmap))  beatmap;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers, put=set_gameplayModifiers))  gameplayModifiers;

 int32_t __declspec(property(get=get_multipliedScore, put=set_multipliedScore))  multipliedScore;

 int32_t __declspec(property(get=get_modifiedScore, put=set_modifiedScore))  modifiedScore;

 bool __declspec(property(get=get_fullCombo, put=set_fullCombo))  fullCombo;

 int32_t __declspec(property(get=get_goodCutsCount, put=set_goodCutsCount))  goodCutsCount;

 int32_t __declspec(property(get=get_badCutsCount, put=set_badCutsCount))  badCutsCount;

 int32_t __declspec(property(get=get_missedCount, put=set_missedCount))  missedCount;

 int32_t __declspec(property(get=get_maxCombo, put=set_maxCombo))  maxCombo;


// Methods

/// @brief Method get_playerId addr 0x21c48dc size 0x8 virtual false final false
 ::StringW get_playerId() ;

/// @brief Method set_playerId addr 0x21c48e4 size 0x8 virtual false final false
 void set_playerId(::StringW value) ;

/// @brief Method get_beatmap addr 0x21c48ec size 0x8 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_beatmap() ;

/// @brief Method set_beatmap addr 0x21c48f4 size 0x8 virtual false final false
 void set_beatmap(GlobalNamespace::IDifficultyBeatmap value) ;

/// @brief Method get_gameplayModifiers addr 0x21c48fc size 0x8 virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method set_gameplayModifiers addr 0x21c4904 size 0x8 virtual false final false
 void set_gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

/// @brief Method get_multipliedScore addr 0x21c490c size 0x8 virtual false final false
 int32_t get_multipliedScore() ;

/// @brief Method set_multipliedScore addr 0x21c4914 size 0x8 virtual false final false
 void set_multipliedScore(int32_t value) ;

/// @brief Method get_modifiedScore addr 0x21c491c size 0x8 virtual false final false
 int32_t get_modifiedScore() ;

/// @brief Method set_modifiedScore addr 0x21c4924 size 0x8 virtual false final false
 void set_modifiedScore(int32_t value) ;

/// @brief Method get_fullCombo addr 0x21c492c size 0x8 virtual false final false
 bool get_fullCombo() ;

/// @brief Method set_fullCombo addr 0x21c4934 size 0xc virtual false final false
 void set_fullCombo(bool value) ;

/// @brief Method get_goodCutsCount addr 0x21c4940 size 0x8 virtual false final false
 int32_t get_goodCutsCount() ;

/// @brief Method set_goodCutsCount addr 0x21c4948 size 0x8 virtual false final false
 void set_goodCutsCount(int32_t value) ;

/// @brief Method get_badCutsCount addr 0x21c4950 size 0x8 virtual false final false
 int32_t get_badCutsCount() ;

/// @brief Method set_badCutsCount addr 0x21c4958 size 0x8 virtual false final false
 void set_badCutsCount(int32_t value) ;

/// @brief Method get_missedCount addr 0x21c4960 size 0x8 virtual false final false
 int32_t get_missedCount() ;

/// @brief Method set_missedCount addr 0x21c4968 size 0x8 virtual false final false
 void set_missedCount(int32_t value) ;

/// @brief Method get_maxCombo addr 0x21c4970 size 0x8 virtual false final false
 int32_t get_maxCombo() ;

/// @brief Method set_maxCombo addr 0x21c4978 size 0x8 virtual false final false
 void set_maxCombo(int32_t value) ;

static GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData New_ctor(::StringW playerId, GlobalNamespace::IDifficultyBeatmap beatmap, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method .ctor addr 0x21c4980 size 0x88 virtual false final false
 void _ctor(::StringW playerId, GlobalNamespace::IDifficultyBeatmap beatmap, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoresToUploadData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4237))
// CS Name: LeaderboardScoreUploader::ScoresToUploadData
class CORDL_TYPE GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData(GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData(GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData& operator=(GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData& operator=(GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __declspec(property(get=__get_scores, put=__set_scores))  scores;

constexpr void __set_scores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __get_scores() const;


// Methods

static GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData New_ctor() ;

/// @brief Method .ctor addr 0x21c4760 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UploadScoreCallback
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4238))
// CS Name: LeaderboardScoreUploader::UploadScoreCallback
class CORDL_TYPE GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback(GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback(GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback& operator=(GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback& operator=(GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21c4a08 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21c4b38 size 0x14 virtual true final false
 GlobalNamespace::HMAsyncRequest Invoke(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler) ;

/// @brief Method BeginInvoke addr 0x21c4b4c size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21c4b74 size 0xc virtual true final false
 GlobalNamespace::HMAsyncRequest EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4239))
// CS Name: LeaderboardScoreUploader::<>c__DisplayClass16_0
class CORDL_TYPE GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0(GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0(GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0& operator=(GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0& operator=(GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData __declspec(property(get=__get_scoreData, put=__set_scoreData))  scoreData;

constexpr void __set_scoreData(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData value) ;

constexpr GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData __get_scoreData() const;

 GlobalNamespace::LeaderboardScoreUploader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LeaderboardScoreUploader value) ;

constexpr GlobalNamespace::LeaderboardScoreUploader __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0 New_ctor() ;

/// @brief Method .ctor addr 0x21c4b80 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UploadScoresCoroutine>b__0 addr 0x21c4b88 size 0x238 virtual false final false
 void _UploadScoresCoroutine_b__0(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UploadScoresCoroutine>d__16
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4240))
// CS Name: LeaderboardScoreUploader::<UploadScoresCoroutine>d__16
class CORDL_TYPE GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16(GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16(GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16& operator=(GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16& operator=(GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::LeaderboardScoreUploader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LeaderboardScoreUploader value) ;

constexpr GlobalNamespace::LeaderboardScoreUploader __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21c41d4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21c4dc0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21c4dc4 size 0x1e8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21c5070 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21c5078 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21c50b8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardScoreUploader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4241))
// CS Name: LeaderboardScoreUploader
class CORDL_TYPE LeaderboardScoreUploader : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _UploadScoresCoroutine_d__16 = GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16;

using __c__DisplayClass16_0 = GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0;

using UploadScoreCallback = GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback;

using ScoresToUploadData = GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData;

using ScoreData = GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LeaderboardScoreUploader() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: " const&", def_value: None }]
constexpr LeaderboardScoreUploader(LeaderboardScoreUploader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: "&&", def_value: None }]
constexpr LeaderboardScoreUploader(LeaderboardScoreUploader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardScoreUploader(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LeaderboardScoreUploader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardScoreUploader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardScoreUploader& operator=(LeaderboardScoreUploader&& o) noexcept = default;
  constexpr LeaderboardScoreUploader& operator=(LeaderboardScoreUploader const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_allScoresDidUploadEvent, put=__set_allScoresDidUploadEvent))  allScoresDidUploadEvent;

constexpr void __set_allScoresDidUploadEvent(System::Action value) ;

constexpr System::Action __get_allScoresDidUploadEvent() const;

/// @brief Field kScoresToUploadFileName offset 0
static constexpr ::ConstString  kScoresToUploadFileName{u"ScoresToUpload.dat"};

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __declspec(property(get=__get__scoresToUpload, put=__set__scoresToUpload))  _scoresToUpload;

constexpr void __set__scoresToUpload(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __get__scoresToUpload() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __declspec(property(get=__get__scoresToUploadForCurrentPlayer, put=__set__scoresToUploadForCurrentPlayer))  _scoresToUploadForCurrentPlayer;

constexpr void __set__scoresToUploadForCurrentPlayer(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> __get__scoresToUploadForCurrentPlayer() const;

 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback __declspec(property(get=__get__uploadScoreCallback, put=__set__uploadScoreCallback))  _uploadScoreCallback;

constexpr void __set__uploadScoreCallback(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback value) ;

constexpr GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback __get__uploadScoreCallback() const;

 ::StringW __declspec(property(get=__get__playerId, put=__set__playerId))  _playerId;

constexpr void __set__playerId(::StringW value) ;

constexpr ::StringW __get__playerId() const;

 bool __declspec(property(get=__get__uploading, put=__set__uploading))  _uploading;

constexpr void __set__uploading(bool value) ;

constexpr bool __get__uploading() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Methods

/// @brief Method add_allScoresDidUploadEvent addr 0x21c3f28 size 0x9c virtual false final false
 void add_allScoresDidUploadEvent(System::Action value) ;

/// @brief Method remove_allScoresDidUploadEvent addr 0x21c3fc4 size 0x9c virtual false final false
 void remove_allScoresDidUploadEvent(System::Action value) ;

/// @brief Method Init addr 0x21c4060 size 0x58 virtual false final false
 void Init(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback uploadScoreCallback, ::StringW playerId) ;

/// @brief Method Uninitialize addr 0x21c4120 size 0xb0 virtual false final false
 void Uninitialize() ;

/// @brief Method OnApplicationQuit addr 0x21c41d0 size 0x4 virtual false final false
 void OnApplicationQuit() ;

/// @brief Method UploadScoresCoroutine addr 0x21c40b8 size 0x68 virtual false final false
 System::Collections::IEnumerator UploadScoresCoroutine() ;

/// @brief Method LoadScoresToUploadFromFile addr 0x21c41fc size 0x378 virtual false final false
 void LoadScoresToUploadFromFile() ;

/// @brief Method SaveScoresToUploadToFile addr 0x21c4574 size 0x1ec virtual false final false
 void SaveScoresToUploadToFile() ;

/// @brief Method AddScore addr 0x21c4768 size 0xc4 virtual false final false
 void AddScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData) ;

static GlobalNamespace::LeaderboardScoreUploader New_ctor() ;

/// @brief Method .ctor addr 0x21c482c size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method <UploadScoresCoroutine>b__16_1 addr 0x21c48cc size 0x10 virtual false final false
 bool _UploadScoresCoroutine_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, "", "LeaderboardScoreUploader/ScoreData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData, "", "LeaderboardScoreUploader/ScoresToUploadData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback, "", "LeaderboardScoreUploader/UploadScoreCallback");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16, "", "LeaderboardScoreUploader/<UploadScoresCoroutine>d__16");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0, "", "LeaderboardScoreUploader/<>c__DisplayClass16_0");
NEED_NO_BOX(GlobalNamespace::LeaderboardScoreUploader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader, "", "LeaderboardScoreUploader");
