#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class SupplementaryMetric;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardEntry;
}
// Type: Oculus.Platform.Models::LeaderboardEntry
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13429))
// CS Name: Oculus.Platform.Models.LeaderboardEntry
class CORDL_TYPE LeaderboardEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

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

 ::StringW __declspec(property(get=__get_DisplayScore, put=__set_DisplayScore))  DisplayScore;

constexpr void __set_DisplayScore(::StringW value) ;

constexpr ::StringW __get_DisplayScore() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ExtraData, put=__set_ExtraData))  ExtraData;

constexpr void __set_ExtraData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ExtraData() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 int32_t __declspec(property(get=__get_Rank, put=__set_Rank))  Rank;

constexpr void __set_Rank(int32_t value) ;

constexpr int32_t __get_Rank() const;

 int64_t __declspec(property(get=__get_Score, put=__set_Score))  Score;

constexpr void __set_Score(int64_t value) ;

constexpr int64_t __get_Score() const;

 Oculus::Platform::Models::SupplementaryMetric __declspec(property(get=__get_SupplementaryMetricOptional, put=__set_SupplementaryMetricOptional))  SupplementaryMetricOptional;

constexpr void __set_SupplementaryMetricOptional(Oculus::Platform::Models::SupplementaryMetric value) ;

constexpr Oculus::Platform::Models::SupplementaryMetric __get_SupplementaryMetricOptional() const;

 Oculus::Platform::Models::SupplementaryMetric __declspec(property(get=__get_SupplementaryMetric, put=__set_SupplementaryMetric))  SupplementaryMetric;

constexpr void __set_SupplementaryMetric(Oculus::Platform::Models::SupplementaryMetric value) ;

constexpr Oculus::Platform::Models::SupplementaryMetric __get_SupplementaryMetric() const;

 System::DateTime __declspec(property(get=__get_Timestamp, put=__set_Timestamp))  Timestamp;

constexpr void __set_Timestamp(System::DateTime value) ;

constexpr System::DateTime __get_Timestamp() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_User, put=__set_User))  User;

constexpr void __set_User(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_User() const;


// Methods

static Oculus::Platform::Models::LeaderboardEntry New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f7fc size 0x1ac virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardEntry, "Oculus.Platform.Models", "LeaderboardEntry");
