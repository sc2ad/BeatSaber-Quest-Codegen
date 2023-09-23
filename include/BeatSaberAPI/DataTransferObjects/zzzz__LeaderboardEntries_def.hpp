#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntry;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntries;
}
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardEntries
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6175))
// CS Name: BeatSaberAPI.DataTransferObjects.LeaderboardEntries
class CORDL_TYPE LeaderboardEntries : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LeaderboardEntries() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntries", modifiers: " const&", def_value: None }]
constexpr LeaderboardEntries(LeaderboardEntries const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntries", modifiers: "&&", def_value: None }]
constexpr LeaderboardEntries(LeaderboardEntries&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardEntries(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardEntries& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardEntries& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardEntries& operator=(LeaderboardEntries&& o) noexcept = default;
  constexpr LeaderboardEntries& operator=(LeaderboardEntries const& o) noexcept = default;
                


// Fields

 ::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry> __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry> value) ;

constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry> __get_entries() const;


// Methods

// Ctor Parameters []
explicit LeaderboardEntries() ;

/// @brief Method .ctor addr 0x21d733c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::LeaderboardEntries);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardEntries, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntries");
