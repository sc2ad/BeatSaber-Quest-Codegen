#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__ScoreData;
}
namespace GlobalNamespace {
struct GlobalNamespace__LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel____c;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__LeaderboardData;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__LeaderboardData;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__ScoreData;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel____c;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
// Type: ::LeaderboardType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4242))
// CS Name: LocalLeaderboardsModel::LeaderboardType
struct CORDL_TYPE GlobalNamespace__LocalLeaderboardsModel__LeaderboardType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardType(GlobalNamespace__LocalLeaderboardsModel__LeaderboardType const&) = default;
                    constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardType(GlobalNamespace__LocalLeaderboardsModel__LeaderboardType&&) = default;
                    constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardType& operator=(GlobalNamespace__LocalLeaderboardsModel__LeaderboardType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardType& operator=(GlobalNamespace__LocalLeaderboardsModel__LeaderboardType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalLeaderboardsModel__LeaderboardType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LocalLeaderboardsModel__LeaderboardType_Unwrapped : int32_t {
__AllTime = 0,
__Daily = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LocalLeaderboardsModel__LeaderboardType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LocalLeaderboardsModel__LeaderboardType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllTime offset 0
static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType const AllTime;

/// @brief Field Daily offset 0
static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType const Daily;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoreData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4243))
// CS Name: LocalLeaderboardsModel::ScoreData
class CORDL_TYPE GlobalNamespace__LocalLeaderboardsModel__ScoreData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__LocalLeaderboardsModel__ScoreData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__ScoreData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData(GlobalNamespace__LocalLeaderboardsModel__ScoreData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__ScoreData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData(GlobalNamespace__LocalLeaderboardsModel__ScoreData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalLeaderboardsModel__ScoreData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData& operator=(GlobalNamespace__LocalLeaderboardsModel__ScoreData&& o) noexcept = default;
  constexpr GlobalNamespace__LocalLeaderboardsModel__ScoreData& operator=(GlobalNamespace__LocalLeaderboardsModel__ScoreData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__score, put=__set__score))  _score;

constexpr void __set__score(int32_t value) ;

constexpr int32_t __get__score() const;

 ::StringW __declspec(property(get=__get__playerName, put=__set__playerName))  _playerName;

constexpr void __set__playerName(::StringW value) ;

constexpr ::StringW __get__playerName() const;

 bool __declspec(property(get=__get__fullCombo, put=__set__fullCombo))  _fullCombo;

constexpr void __set__fullCombo(bool value) ;

constexpr bool __get__fullCombo() const;

 int64_t __declspec(property(get=__get__timestamp, put=__set__timestamp))  _timestamp;

constexpr void __set__timestamp(int64_t value) ;

constexpr int64_t __get__timestamp() const;


// Methods

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData New_ctor() ;

/// @brief Method .ctor addr 0x21c60c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4244))
// CS Name: LocalLeaderboardsModel::LeaderboardData
class CORDL_TYPE GlobalNamespace__LocalLeaderboardsModel__LeaderboardData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LocalLeaderboardsModel__LeaderboardData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__LeaderboardData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData(GlobalNamespace__LocalLeaderboardsModel__LeaderboardData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__LeaderboardData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData(GlobalNamespace__LocalLeaderboardsModel__LeaderboardData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalLeaderboardsModel__LeaderboardData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData& operator=(GlobalNamespace__LocalLeaderboardsModel__LeaderboardData&& o) noexcept = default;
  constexpr GlobalNamespace__LocalLeaderboardsModel__LeaderboardData& operator=(GlobalNamespace__LocalLeaderboardsModel__LeaderboardData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__leaderboardId, put=__set__leaderboardId))  _leaderboardId;

constexpr void __set__leaderboardId(::StringW value) ;

constexpr ::StringW __get__leaderboardId() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> __declspec(property(get=__get__scores, put=__set__scores))  _scores;

constexpr void __set__scores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> __get__scores() const;


// Methods

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData New_ctor() ;

/// @brief Method .ctor addr 0x21c60bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SavedLeaderboardsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4245))
// CS Name: LocalLeaderboardsModel::SavedLeaderboardsData
class CORDL_TYPE GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData(GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData(GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData& operator=(GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData&& o) noexcept = default;
  constexpr GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData& operator=(GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __declspec(property(get=__get__leaderboardsData, put=__set__leaderboardsData))  _leaderboardsData;

constexpr void __set__leaderboardsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __get__leaderboardsData() const;


// Methods

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData New_ctor() ;

/// @brief Method .ctor addr 0x21c5598 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4246))
// CS Name: LocalLeaderboardsModel::<>c
class CORDL_TYPE GlobalNamespace__LocalLeaderboardsModel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__LocalLeaderboardsModel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel____c(GlobalNamespace__LocalLeaderboardsModel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalLeaderboardsModel____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalLeaderboardsModel____c(GlobalNamespace__LocalLeaderboardsModel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalLeaderboardsModel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalLeaderboardsModel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalLeaderboardsModel____c& operator=(GlobalNamespace__LocalLeaderboardsModel____c&& o) noexcept = default;
  constexpr GlobalNamespace__LocalLeaderboardsModel____c& operator=(GlobalNamespace__LocalLeaderboardsModel____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c value) ;

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c __get___9() ;

static System::Comparison_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Comparison_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> value) ;

static System::Comparison_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> __get___9__16_0() ;

static System::Func_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool> __declspec(property(get=__get___9__17_0, put=__set___9__17_0))  __9__17_0;

static void __set___9__17_0(System::Func_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool> value) ;

static System::Func_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool> __get___9__17_0() ;

static System::Predicate_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __declspec(property(get=__get___9__17_1, put=__set___9__17_1))  __9__17_1;

static void __set___9__17_1(System::Predicate_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value) ;

static System::Predicate_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __get___9__17_1() ;


// Methods

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c New_ctor() ;

/// @brief Method .ctor addr 0x21c69b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AppendLeaderboardScores>b__16_0 addr 0x21c69c0 size 0x24 virtual false final false
 int32_t _AppendLeaderboardScores_b__16_0(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData a, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData b) ;

/// @brief Method <MigrateQuestLeaderboards>b__17_0 addr 0x21c69e4 size 0x58 virtual false final false
 bool _MigrateQuestLeaderboards_b__17_0(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData leaderboardData) ;

/// @brief Method <MigrateQuestLeaderboards>b__17_1 addr 0x21c6a3c size 0xc virtual false final false
 bool _MigrateQuestLeaderboards_b__17_1(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData leaderboardData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalLeaderboardsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4247))
// CS Name: LocalLeaderboardsModel
class CORDL_TYPE LocalLeaderboardsModel : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c;

using SavedLeaderboardsData = GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData;

using LeaderboardData = GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData;

using ScoreData = GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData;

using LeaderboardType = GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~LocalLeaderboardsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: " const&", def_value: None }]
constexpr LocalLeaderboardsModel(LocalLeaderboardsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: "&&", def_value: None }]
constexpr LocalLeaderboardsModel(LocalLeaderboardsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalLeaderboardsModel(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr LocalLeaderboardsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalLeaderboardsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalLeaderboardsModel& operator=(LocalLeaderboardsModel&& o) noexcept = default;
  constexpr LocalLeaderboardsModel& operator=(LocalLeaderboardsModel const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxNumberOfScoresInLeaderboard, put=__set__maxNumberOfScoresInLeaderboard))  _maxNumberOfScoresInLeaderboard;

constexpr void __set__maxNumberOfScoresInLeaderboard(int32_t value) ;

constexpr int32_t __get__maxNumberOfScoresInLeaderboard() const;

 System::Action_2<::StringW,GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> __declspec(property(get=__get_newScoreWasAddedToLeaderboardEvent, put=__set_newScoreWasAddedToLeaderboardEvent))  newScoreWasAddedToLeaderboardEvent;

constexpr void __set_newScoreWasAddedToLeaderboardEvent(System::Action_2<::StringW,GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value) ;

constexpr System::Action_2<::StringW,GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> __get_newScoreWasAddedToLeaderboardEvent() const;

/// @brief Field kLocalLeaderboardsFileName offset 0
static constexpr ::ConstString  kLocalLeaderboardsFileName{u"LocalLeaderboards.dat"};

/// @brief Field kLocalDailyLeaderboardsFileName offset 0
static constexpr ::ConstString  kLocalDailyLeaderboardsFileName{u"LocalDailyLeaderboards.dat"};

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t> __declspec(property(get=__get__lastScorePositions, put=__set__lastScorePositions))  _lastScorePositions;

constexpr void __set__lastScorePositions(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t> __get__lastScorePositions() const;

 ::StringW __declspec(property(get=__get__lastScoreLeaderboardId, put=__set__lastScoreLeaderboardId))  _lastScoreLeaderboardId;

constexpr void __set__lastScoreLeaderboardId(::StringW value) ;

constexpr ::StringW __get__lastScoreLeaderboardId() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __declspec(property(get=__get__leaderboardsData, put=__set__leaderboardsData))  _leaderboardsData;

constexpr void __set__leaderboardsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __get__leaderboardsData() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __declspec(property(get=__get__dailyLeaderboardsData, put=__set__dailyLeaderboardsData))  _dailyLeaderboardsData;

constexpr void __set__dailyLeaderboardsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> __get__dailyLeaderboardsData() const;


// Methods

/// @brief Method add_newScoreWasAddedToLeaderboardEvent addr 0x21c50c0 size 0xb0 virtual false final false
 void add_newScoreWasAddedToLeaderboardEvent(System::Action_2<::StringW,GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value) ;

/// @brief Method remove_newScoreWasAddedToLeaderboardEvent addr 0x21c5170 size 0xb0 virtual false final false
 void remove_newScoreWasAddedToLeaderboardEvent(System::Action_2<::StringW,GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value) ;

/// @brief Method LoadLeaderboardsData addr 0x21c5220 size 0x240 virtual false final false
 void LoadLeaderboardsData(GlobalNamespace::ISaveData saveData, ::StringW filename, ByRef<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>> leaderboardsData) ;

/// @brief Method SaveLeaderboardsData addr 0x21c5460 size 0x138 virtual false final false
 void SaveLeaderboardsData(GlobalNamespace::ISaveData saveData, ::StringW filename, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> leaderboardsData) ;

/// @brief Method AppendLeaderboardScores addr 0x21c55a0 size 0x174 virtual false final false
static void AppendLeaderboardScores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> main, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> tail, int32_t maxNumberOfScores) ;

/// @brief Method MigrateQuestLeaderboards addr 0x21c5714 size 0x360 virtual false final false
static void MigrateQuestLeaderboards(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> leaderboardDataList, int32_t maxNumberOfScores) ;

/// @brief Method Save addr 0x21c5a74 size 0x7c virtual false final false
 void Save(GlobalNamespace::ISaveData saveData) ;

/// @brief Method GetLeaderboardsData addr 0x21c5af0 size 0x28 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> GetLeaderboardsData(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method GetLeaderboardData addr 0x21c5b18 size 0xd4 virtual false final false
 GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData GetLeaderboardData(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method GetCurrentTimestamp addr 0x21c5bec size 0xcc virtual false final false
 int64_t GetCurrentTimestamp() ;

/// @brief Method UpdateDailyLeaderboard addr 0x21c5cb8 size 0xf0 virtual false final false
 void UpdateDailyLeaderboard(::StringW leaderboardId) ;

/// @brief Method AddScore addr 0x21c5da8 size 0x314 virtual false final false
 void AddScore(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, ::StringW playerName, int32_t score, bool fullCombo) ;

/// @brief Method WillScoreGoIntoLeaderboard addr 0x21c60cc size 0xc8 virtual false final false
 bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score) ;

/// @brief Method GetScores addr 0x21c6194 size 0x18 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> GetScores(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method GetHighScore addr 0x21c61ac size 0xa4 virtual false final false
 int32_t GetHighScore(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method GetPositionInLeaderboard addr 0x21c6250 size 0xd4 virtual false final false
 int32_t GetPositionInLeaderboard(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score) ;

/// @brief Method GetLastScorePosition addr 0x21c6324 size 0x98 virtual false final false
 int32_t GetLastScorePosition(::StringW leaderboardId, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method ClearLastScorePosition addr 0x21c63bc size 0x58 virtual false final false
 void ClearLastScorePosition() ;

/// @brief Method AddScore addr 0x21c6414 size 0x5c virtual false final false
 void AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo) ;

/// @brief Method WillScoreGoIntoLeaderboard addr 0x21c6470 size 0x50 virtual false final false
 bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score) ;

/// @brief Method ClearLeaderboard addr 0x21c64c0 size 0x130 virtual false final false
 void ClearLeaderboard(::StringW leaderboardId) ;

/// @brief Method ClearAllLeaderboards addr 0x21c65f0 size 0x1e4 virtual false final false
 void ClearAllLeaderboards(GlobalNamespace::ISaveData saveData, bool deleteLeaderboardFile) ;

/// @brief Method Load addr 0x21c67d4 size 0xfc virtual false final false
 void Load(GlobalNamespace::ISaveData saveData) ;

static GlobalNamespace::LocalLeaderboardsModel New_ctor() ;

/// @brief Method .ctor addr 0x21c68d0 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType, "", "LocalLeaderboardsModel/LeaderboardType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardData, "", "LocalLeaderboardsModel/LeaderboardData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData, "", "LocalLeaderboardsModel/SavedLeaderboardsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData, "", "LocalLeaderboardsModel/ScoreData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel____c, "", "LocalLeaderboardsModel/<>c");
NEED_NO_BOX(GlobalNamespace::LocalLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel, "", "LocalLeaderboardsModel");
