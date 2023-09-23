#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
class ChallengeOptions;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class Challenges;
}
// Type: Oculus.Platform::Challenges
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13318))
// CS Name: Oculus.Platform.Challenges
class CORDL_TYPE Challenges : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Challenges() = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: " const&", def_value: None }]
constexpr Challenges(Challenges const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: "&&", def_value: None }]
constexpr Challenges(Challenges&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Challenges(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Challenges& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Challenges& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Challenges& operator=(Challenges&& o) noexcept = default;
  constexpr Challenges& operator=(Challenges const& o) noexcept = default;
                


// Methods

/// @brief Method GetNextEntries addr 0x258b838 size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> GetNextEntries(Oculus::Platform::Models::ChallengeEntryList list) ;

/// @brief Method GetPreviousEntries addr 0x258b9b4 size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> GetPreviousEntries(Oculus::Platform::Models::ChallengeEntryList list) ;

/// @brief Method GetNextChallenges addr 0x258bb30 size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> GetNextChallenges(Oculus::Platform::Models::ChallengeList list) ;

/// @brief Method GetPreviousChallenges addr 0x258bcac size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> GetPreviousChallenges(Oculus::Platform::Models::ChallengeList list) ;

/// @brief Method Create addr 0x258be28 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Create(::StringW leaderboardName, Oculus::Platform::ChallengeOptions challengeOptions) ;

/// @brief Method DeclineInvite addr 0x258bfd8 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> DeclineInvite(uint64_t challengeID) ;

/// @brief Method Delete addr 0x258c138 size 0x14c virtual false final false
static Oculus::Platform::Request Delete(uint64_t challengeID) ;

/// @brief Method Get addr 0x258c284 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Get(uint64_t challengeID) ;

/// @brief Method GetEntries addr 0x258c3e4 size 0x188 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> GetEntries(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method GetEntriesAfterRank addr 0x258c56c size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank) ;

/// @brief Method GetEntriesByIds addr 0x258c6e4 size 0x19c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> GetEntriesByIds(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs) ;

/// @brief Method GetList addr 0x258c880 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> GetList(Oculus::Platform::ChallengeOptions challengeOptions, int32_t limit) ;

/// @brief Method Join addr 0x258ca30 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Join(uint64_t challengeID) ;

/// @brief Method Leave addr 0x258cb90 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Leave(uint64_t challengeID) ;

/// @brief Method UpdateInfo addr 0x258ccf0 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> UpdateInfo(uint64_t challengeID, Oculus::Platform::ChallengeOptions challengeOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Challenges);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Challenges, "Oculus.Platform", "Challenges");
