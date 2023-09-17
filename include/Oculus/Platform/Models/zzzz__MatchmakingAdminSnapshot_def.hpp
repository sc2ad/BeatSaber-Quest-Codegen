#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshotCandidateList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Type: Oculus.Platform.Models::MatchmakingAdminSnapshot
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13437))
// CS Name: Oculus.Platform.Models.MatchmakingAdminSnapshot
class CORDL_TYPE MatchmakingAdminSnapshot : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MatchmakingAdminSnapshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshot", modifiers: " const&", def_value: None }]
constexpr MatchmakingAdminSnapshot(MatchmakingAdminSnapshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshot", modifiers: "&&", def_value: None }]
constexpr MatchmakingAdminSnapshot(MatchmakingAdminSnapshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingAdminSnapshot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingAdminSnapshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingAdminSnapshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingAdminSnapshot& operator=(MatchmakingAdminSnapshot&& o) noexcept = default;
  constexpr MatchmakingAdminSnapshot& operator=(MatchmakingAdminSnapshot const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList __declspec(property(get=__get_Candidates, put=__set_Candidates))  Candidates;

constexpr void __set_Candidates(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList value) ;

constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList __get_Candidates() const;

 double_t __declspec(property(get=__get_MyCurrentThreshold, put=__set_MyCurrentThreshold))  MyCurrentThreshold;

constexpr void __set_MyCurrentThreshold(double_t value) ;

constexpr double_t __get_MyCurrentThreshold() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingAdminSnapshot(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a01d4 size 0xc0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingAdminSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingAdminSnapshot, "Oculus.Platform.Models", "MatchmakingAdminSnapshot");
