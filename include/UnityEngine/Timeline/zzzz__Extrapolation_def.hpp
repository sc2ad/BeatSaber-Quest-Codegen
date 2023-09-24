#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__Extrapolation____c;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Extrapolation;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__Extrapolation____c;
}
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14141))
// CS Name: UnityEngine.Timeline.Extrapolation::<>c
class CORDL_TYPE UnityEngine__Timeline__Extrapolation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__Extrapolation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__Extrapolation____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__Extrapolation____c(UnityEngine__Timeline__Extrapolation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__Extrapolation____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__Extrapolation____c(UnityEngine__Timeline__Extrapolation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__Extrapolation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__Extrapolation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__Extrapolation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__Extrapolation____c& operator=(UnityEngine__Timeline__Extrapolation____c&& o) noexcept = default;
  constexpr UnityEngine__Timeline__Extrapolation____c& operator=(UnityEngine__Timeline__Extrapolation____c const& o) noexcept = default;
                


// Fields

static UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c value) ;

static UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c __get___9() ;

static System::Comparison_1<UnityEngine::Timeline::TimelineClip> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip> value) ;

static System::Comparison_1<UnityEngine::Timeline::TimelineClip> __get___9__2_0() ;


// Methods

static UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c New_ctor() ;

/// @brief Method .ctor addr 0x2ad8234 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortClipsByStartTime>b__2_0 addr 0x2ad823c size 0x34 virtual false final false
 int32_t _SortClipsByStartTime_b__2_0(UnityEngine::Timeline::TimelineClip clip1, UnityEngine::Timeline::TimelineClip clip2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::Extrapolation
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14142))
// CS Name: UnityEngine.Timeline.Extrapolation
class CORDL_TYPE Extrapolation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Extrapolation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: " const&", def_value: None }]
constexpr Extrapolation(Extrapolation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "&&", def_value: None }]
constexpr Extrapolation(Extrapolation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Extrapolation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Extrapolation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Extrapolation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Extrapolation& operator=(Extrapolation&& o) noexcept = default;
  constexpr Extrapolation& operator=(Extrapolation const& o) noexcept = default;
                


// Fields

static double_t __declspec(property(get=__get_kMinExtrapolationTime, put=__set_kMinExtrapolationTime))  kMinExtrapolationTime;

static void __set_kMinExtrapolationTime(double_t value) ;

static double_t __get_kMinExtrapolationTime() ;


// Methods

/// @brief Method CalculateExtrapolationTimes addr 0x2ad7c04 size 0x40c virtual false final false
static void CalculateExtrapolationTimes(UnityEngine::Timeline::TrackAsset asset) ;

/// @brief Method SortClipsByStartTime addr 0x2ad8010 size 0x13c virtual false final false
static ::ArrayW<UnityEngine::Timeline::TimelineClip> SortClipsByStartTime(::ArrayW<UnityEngine::Timeline::TimelineClip> clips) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::Extrapolation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Extrapolation, "UnityEngine.Timeline", "Extrapolation");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c, "UnityEngine.Timeline", "Extrapolation/<>c");
