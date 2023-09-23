#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BeatSaberAPI::DataTransferObjects {
struct BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntry;
}
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardEntry
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6176))
// CS Name: BeatSaberAPI.DataTransferObjects.LeaderboardEntry
class CORDL_TYPE LeaderboardEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LeaderboardEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: " const&", def_value: None }]
constexpr LeaderboardEntry(LeaderboardEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
constexpr LeaderboardEntry(LeaderboardEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardEntry& operator=(LeaderboardEntry&& o) noexcept = default;
  constexpr LeaderboardEntry& operator=(LeaderboardEntry const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int32_t value) ;

constexpr int32_t __get_id() const;

 int32_t __declspec(property(get=__get_score, put=__set_score))  score;

constexpr void __set_score(int32_t value) ;

constexpr int32_t __get_score() const;

 int32_t __declspec(property(get=__get_unmodifiedScore, put=__set_unmodifiedScore))  unmodifiedScore;

constexpr void __set_unmodifiedScore(int32_t value) ;

constexpr int32_t __get_unmodifiedScore() const;

 int32_t __declspec(property(get=__get_rank, put=__set_rank))  rank;

constexpr void __set_rank(int32_t value) ;

constexpr int32_t __get_rank() const;

 System::DateTime __declspec(property(get=__get_updated, put=__set_updated))  updated;

constexpr void __set_updated(System::DateTime value) ;

constexpr System::DateTime __get_updated() const;

 ::StringW __declspec(property(get=__get_userDisplayName, put=__set_userDisplayName))  userDisplayName;

constexpr void __set_userDisplayName(::StringW value) ;

constexpr ::StringW __get_userDisplayName() const;

 ::StringW __declspec(property(get=__get_platformUserId, put=__set_platformUserId))  platformUserId;

constexpr void __set_platformUserId(::StringW value) ;

constexpr ::StringW __get_platformUserId() const;

 ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value) ;

constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __get_gameplayModifiers() const;


// Methods

// Ctor Parameters []
explicit LeaderboardEntry() ;

/// @brief Method .ctor addr 0x21d7344 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardEntry, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntry");
