#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeEntry;
}
// Type: Oculus.Platform.Models::ChallengeEntry
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13403))
// CS Name: Oculus.Platform.Models.ChallengeEntry
class CORDL_TYPE ChallengeEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ChallengeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: " const&", def_value: None }]
constexpr ChallengeEntry(ChallengeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: "&&", def_value: None }]
constexpr ChallengeEntry(ChallengeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChallengeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeEntry& operator=(ChallengeEntry&& o) noexcept = default;
  constexpr ChallengeEntry& operator=(ChallengeEntry const& o) noexcept = default;
                


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

 System::DateTime __declspec(property(get=__get_Timestamp, put=__set_Timestamp))  Timestamp;

constexpr void __set_Timestamp(System::DateTime value) ;

constexpr System::DateTime __get_Timestamp() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_User, put=__set_User))  User;

constexpr void __set_User(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_User() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ChallengeEntry(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259dfc4 size 0x110 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::ChallengeEntry);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ChallengeEntry, "Oculus.Platform.Models", "ChallengeEntry");
