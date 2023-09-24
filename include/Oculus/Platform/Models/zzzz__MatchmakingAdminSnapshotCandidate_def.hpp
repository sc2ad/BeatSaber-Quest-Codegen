#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshotCandidate;
}
// Type: Oculus.Platform.Models::MatchmakingAdminSnapshotCandidate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13438))
// CS Name: Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
class CORDL_TYPE MatchmakingAdminSnapshotCandidate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MatchmakingAdminSnapshotCandidate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidate", modifiers: " const&", def_value: None }]
constexpr MatchmakingAdminSnapshotCandidate(MatchmakingAdminSnapshotCandidate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidate", modifiers: "&&", def_value: None }]
constexpr MatchmakingAdminSnapshotCandidate(MatchmakingAdminSnapshotCandidate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingAdminSnapshotCandidate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingAdminSnapshotCandidate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingAdminSnapshotCandidate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingAdminSnapshotCandidate& operator=(MatchmakingAdminSnapshotCandidate&& o) noexcept = default;
  constexpr MatchmakingAdminSnapshotCandidate& operator=(MatchmakingAdminSnapshotCandidate const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_CanMatch, put=__set_CanMatch))  CanMatch;

constexpr void __set_CanMatch(bool value) ;

constexpr bool __get_CanMatch() const;

 double_t __declspec(property(get=__get_MyTotalScore, put=__set_MyTotalScore))  MyTotalScore;

constexpr void __set_MyTotalScore(double_t value) ;

constexpr double_t __get_MyTotalScore() const;

 double_t __declspec(property(get=__get_TheirCurrentThreshold, put=__set_TheirCurrentThreshold))  TheirCurrentThreshold;

constexpr void __set_TheirCurrentThreshold(double_t value) ;

constexpr double_t __get_TheirCurrentThreshold() const;

 double_t __declspec(property(get=__get_TheirTotalScore, put=__set_TheirTotalScore))  TheirTotalScore;

constexpr void __set_TheirTotalScore(double_t value) ;

constexpr double_t __get_TheirTotalScore() const;

 ::StringW __declspec(property(get=__get_TraceId, put=__set_TraceId))  TraceId;

constexpr void __set_TraceId(::StringW value) ;

constexpr ::StringW __get_TraceId() const;


// Methods

static Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a04d0 size 0xbc virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidate");
