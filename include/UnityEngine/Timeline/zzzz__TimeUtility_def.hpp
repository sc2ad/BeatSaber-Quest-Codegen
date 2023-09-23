#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeUtility;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimeUtility____c;
}
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14153))
// CS Name: UnityEngine.Timeline.TimeUtility::<>c
class CORDL_TYPE UnityEngine__Timeline__TimeUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__TimeUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimeUtility____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TimeUtility____c(UnityEngine__Timeline__TimeUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimeUtility____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TimeUtility____c(UnityEngine__Timeline__TimeUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimeUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TimeUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimeUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimeUtility____c& operator=(UnityEngine__Timeline__TimeUtility____c&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TimeUtility____c& operator=(UnityEngine__Timeline__TimeUtility____c const& o) noexcept = default;
                


// Fields

static UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c value) ;

static UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c __get___9() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__15_0() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__15_1, put=__set___9__15_1))  __9__15_1;

static void __set___9__15_1(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__15_1() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__16_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__Timeline__TimeUtility____c() ;

/// @brief Method .ctor addr 0x2adba24 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ParseTimeCode>b__15_0 addr 0x2adba2c size 0x58 virtual false final false
 bool _ParseTimeCode_b__15_0(char16_t c) ;

/// @brief Method <ParseTimeCode>b__15_1 addr 0x2adba84 size 0x1c virtual false final false
 bool _ParseTimeCode_b__15_1(char16_t c) ;

/// @brief Method <ParseTimeSeconds>b__16_0 addr 0x2adbaa0 size 0x58 virtual false final false
 bool _ParseTimeSeconds_b__16_0(char16_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeUtility
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14154))
// CS Name: UnityEngine.Timeline.TimeUtility
class CORDL_TYPE TimeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeUtility", modifiers: " const&", def_value: None }]
constexpr TimeUtility(TimeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeUtility", modifiers: "&&", def_value: None }]
constexpr TimeUtility(TimeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeUtility& operator=(TimeUtility&& o) noexcept = default;
  constexpr TimeUtility& operator=(TimeUtility const& o) noexcept = default;
                


// Fields

static double_t __declspec(property(get=__get_kTimeEpsilon, put=__set_kTimeEpsilon))  kTimeEpsilon;

static void __set_kTimeEpsilon(double_t value) ;

static double_t __get_kTimeEpsilon() ;

static double_t __declspec(property(get=__get_kFrameRateEpsilon, put=__set_kFrameRateEpsilon))  kFrameRateEpsilon;

static void __set_kFrameRateEpsilon(double_t value) ;

static double_t __get_kFrameRateEpsilon() ;

static double_t __declspec(property(get=__get_k_MaxTimelineDurationInSeconds, put=__set_k_MaxTimelineDurationInSeconds))  k_MaxTimelineDurationInSeconds;

static void __set_k_MaxTimelineDurationInSeconds(double_t value) ;

static double_t __get_k_MaxTimelineDurationInSeconds() ;

static double_t __declspec(property(get=__get_kFrameRateRounding, put=__set_kFrameRateRounding))  kFrameRateRounding;

static void __set_kFrameRateRounding(double_t value) ;

static double_t __get_kFrameRateRounding() ;


// Methods

/// @brief Method ValidateFrameRate addr 0x2ad9e20 size 0xb8 virtual false final false
static void ValidateFrameRate(double_t frameRate) ;

/// @brief Method ToFrames addr 0x2ad9ed8 size 0x114 virtual false final false
static int32_t ToFrames(double_t time, double_t frameRate) ;

/// @brief Method ToExactFrames addr 0x2ada094 size 0x68 virtual false final false
static double_t ToExactFrames(double_t time, double_t frameRate) ;

/// @brief Method FromFrames addr 0x2ada0fc size 0x6c virtual false final false
static double_t FromFrames(int32_t frames, double_t frameRate) ;

/// @brief Method FromFrames addr 0x2ada168 size 0x68 virtual false final false
static double_t FromFrames(double_t frames, double_t frameRate) ;

/// @brief Method OnFrameBoundary addr 0x2ada1d0 size 0x74 virtual false final false
static bool OnFrameBoundary(double_t time, double_t frameRate) ;

/// @brief Method GetEpsilon addr 0x2ad9fec size 0xa8 virtual false final false
static double_t GetEpsilon(double_t time, double_t frameRate) ;

/// @brief Method OnFrameBoundary addr 0x2ada244 size 0x120 virtual false final false
static bool OnFrameBoundary(double_t time, double_t frameRate, double_t epsilon) ;

/// @brief Method RoundToFrame addr 0x2ada364 size 0xdc virtual false final false
static double_t RoundToFrame(double_t time, double_t frameRate) ;

/// @brief Method TimeAsFrames addr 0x2ada440 size 0xd0 virtual false final false
static ::StringW TimeAsFrames(double_t timeValue, double_t frameRate, ::StringW format) ;

/// @brief Method TimeAsTimeCode addr 0x2ada510 size 0x49c virtual false final false
static ::StringW TimeAsTimeCode(double_t timeValue, double_t frameRate, ::StringW format) ;

/// @brief Method ParseTimeCode addr 0x2ada9ac size 0x510 virtual false final false
static double_t ParseTimeCode(::StringW timeCode, double_t frameRate, double_t defaultValue) ;

/// @brief Method ParseTimeSeconds addr 0x2adaf8c size 0x378 virtual false final false
static double_t ParseTimeSeconds(::StringW timeCode, double_t frameRate, double_t defaultValue) ;

/// @brief Method GetAnimationClipLength addr 0x2adb304 size 0x164 virtual false final false
static double_t GetAnimationClipLength(UnityEngine::AnimationClip clip) ;

/// @brief Method RemoveChar addr 0x2adaebc size 0xd0 virtual false final false
static ::StringW RemoveChar(::StringW str, System::Func_2<char16_t,bool> charToRemoveFunc) ;

/// @brief Method GetClosestFrameRate addr 0x2adb468 size 0xf0 virtual false final false
static UnityEngine::Playables::FrameRate GetClosestFrameRate(double_t frameRate) ;

/// @brief Method ToFrameRate addr 0x2adb558 size 0x168 virtual false final false
static UnityEngine::Playables::FrameRate ToFrameRate(UnityEngine::Timeline::StandardFrameRates enumValue) ;

/// @brief Method ToStandardFrameRate addr 0x2adb6c0 size 0x2a8 virtual false final false
static bool ToStandardFrameRate(UnityEngine::Playables::FrameRate rate, ByRef<UnityEngine::Timeline::StandardFrameRates> standard) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimeUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeUtility, "UnityEngine.Timeline", "TimeUtility");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimeUtility____c, "UnityEngine.Timeline", "TimeUtility/<>c");
