#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
// Type: Oculus.Platform.Models::MatchmakingStats
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13445))
// CS Name: Oculus.Platform.Models.MatchmakingStats
class CORDL_TYPE MatchmakingStats : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MatchmakingStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingStats", modifiers: " const&", def_value: None }]
constexpr MatchmakingStats(MatchmakingStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingStats", modifiers: "&&", def_value: None }]
constexpr MatchmakingStats(MatchmakingStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingStats(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingStats& operator=(MatchmakingStats&& o) noexcept = default;
  constexpr MatchmakingStats& operator=(MatchmakingStats const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_DrawCount, put=__set_DrawCount))  DrawCount;

constexpr void __set_DrawCount(uint32_t value) ;

constexpr uint32_t __get_DrawCount() const;

 uint32_t __declspec(property(get=__get_LossCount, put=__set_LossCount))  LossCount;

constexpr void __set_LossCount(uint32_t value) ;

constexpr uint32_t __get_LossCount() const;

 uint32_t __declspec(property(get=__get_SkillLevel, put=__set_SkillLevel))  SkillLevel;

constexpr void __set_SkillLevel(uint32_t value) ;

constexpr uint32_t __get_SkillLevel() const;

 double_t __declspec(property(get=__get_SkillMean, put=__set_SkillMean))  SkillMean;

constexpr void __set_SkillMean(double_t value) ;

constexpr double_t __get_SkillMean() const;

 double_t __declspec(property(get=__get_SkillStandardDeviation, put=__set_SkillStandardDeviation))  SkillStandardDeviation;

constexpr void __set_SkillStandardDeviation(double_t value) ;

constexpr double_t __get_SkillStandardDeviation() const;

 uint32_t __declspec(property(get=__get_WinCount, put=__set_WinCount))  WinCount;

constexpr void __set_WinCount(uint32_t value) ;

constexpr uint32_t __get_WinCount() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingStats(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a122c size 0xc8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingStats, "Oculus.Platform.Models", "MatchmakingStats");
