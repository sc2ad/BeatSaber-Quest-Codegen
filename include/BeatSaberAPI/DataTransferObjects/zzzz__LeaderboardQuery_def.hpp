#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BeatSaberAPI::DataTransferObjects {
struct BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers;
}
namespace BeatSaberAPI::DataTransferObjects {
struct ScoresScope;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardQuery;
}
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardQuery
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6177))
// CS Name: BeatSaberAPI.DataTransferObjects.LeaderboardQuery
class CORDL_TYPE LeaderboardQuery : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LeaderboardQuery() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardQuery", modifiers: " const&", def_value: None }]
constexpr LeaderboardQuery(LeaderboardQuery const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardQuery", modifiers: "&&", def_value: None }]
constexpr LeaderboardQuery(LeaderboardQuery&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardQuery(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardQuery& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardQuery& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardQuery& operator=(LeaderboardQuery&& o) noexcept = default;
  constexpr LeaderboardQuery& operator=(LeaderboardQuery const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId))  leaderboardId;

constexpr void __set_leaderboardId(::StringW value) ;

constexpr ::StringW __get_leaderboardId() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_fromRank, put=__set_fromRank))  fromRank;

constexpr void __set_fromRank(int32_t value) ;

constexpr int32_t __get_fromRank() const;

 BeatSaberAPI::DataTransferObjects::ScoresScope __declspec(property(get=__get_scope, put=__set_scope))  scope;

constexpr void __set_scope(BeatSaberAPI::DataTransferObjects::ScoresScope value) ;

constexpr BeatSaberAPI::DataTransferObjects::ScoresScope __get_scope() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_friendsUserIds, put=__set_friendsUserIds))  friendsUserIds;

constexpr void __set_friendsUserIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_friendsUserIds() const;

 bool __declspec(property(get=__get_onlyWithSpecificGameplayModifiers, put=__set_onlyWithSpecificGameplayModifiers))  onlyWithSpecificGameplayModifiers;

constexpr void __set_onlyWithSpecificGameplayModifiers(bool value) ;

constexpr bool __get_onlyWithSpecificGameplayModifiers() const;

 ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value) ;

constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __get_gameplayModifiers() const;


// Methods

static BeatSaberAPI::DataTransferObjects::LeaderboardQuery New_ctor() ;

/// @brief Method .ctor addr 0x21d734c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::LeaderboardQuery);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardQuery, "BeatSaberAPI.DataTransferObjects", "LeaderboardQuery");
