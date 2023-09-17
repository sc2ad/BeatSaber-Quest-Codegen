#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
// Forward declare root types
namespace Oculus::Platform {
class Leaderboards;
}
// Type: Oculus.Platform::Leaderboards
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13317))
// CS Name: Oculus.Platform.Leaderboards
class CORDL_TYPE Leaderboards : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Leaderboards() = default;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: " const&", def_value: None }]
constexpr Leaderboards(Leaderboards const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "&&", def_value: None }]
constexpr Leaderboards(Leaderboards&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Leaderboards(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Leaderboards& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Leaderboards& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Leaderboards& operator=(Leaderboards&& o) noexcept = default;
  constexpr Leaderboards& operator=(Leaderboards const& o) noexcept = default;
                


// Methods

/// @brief Method GetNextEntries addr 0x258aa28 size 0x17c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList> GetNextEntries(::Oculus::Platform::Models::LeaderboardEntryList list) ;

/// @brief Method GetPreviousEntries addr 0x258aba4 size 0x17c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList> GetPreviousEntries(::Oculus::Platform::Models::LeaderboardEntryList list) ;

/// @brief Method Get addr 0x258ad20 size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList> Get(::StringW leaderboardName) ;

/// @brief Method GetEntries addr 0x258ae80 size 0x188 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList> GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method GetEntriesAfterRank addr 0x258b008 size 0x178 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList> GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank) ;

/// @brief Method GetEntriesByIds addr 0x258b180 size 0x19c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList> GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs) ;

/// @brief Method WriteEntry addr 0x258b31c size 0x19c virtual false final false
static ::Oculus::Platform::Request_1<bool> WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, bool forceUpdate) ;

/// @brief Method WriteEntryWithSupplementaryMetric addr 0x258b4b8 size 0x1a4 virtual false final false
static ::Oculus::Platform::Request_1<bool> WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t> extraData, bool forceUpdate) ;

/// @brief Method GetNextLeaderboardListPage addr 0x258b65c size 0x1dc virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList> GetNextLeaderboardListPage(::Oculus::Platform::Models::LeaderboardList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Leaderboards);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Leaderboards, "Oculus.Platform", "Leaderboards");
