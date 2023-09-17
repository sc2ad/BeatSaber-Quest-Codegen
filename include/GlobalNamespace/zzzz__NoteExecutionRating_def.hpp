#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteData__ScoringType;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteExecutionRating__Rating;
}
namespace GlobalNamespace {
class NoteExecutionRating;
}
// Type: ::Rating
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4610))
// CS Name: NoteExecutionRating::Rating
struct CORDL_TYPE ____GlobalNamespace__NoteExecutionRating__Rating : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__NoteExecutionRating__Rating(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__NoteExecutionRating__Rating(____GlobalNamespace__NoteExecutionRating__Rating const&) = default;
                    constexpr ____GlobalNamespace__NoteExecutionRating__Rating(____GlobalNamespace__NoteExecutionRating__Rating&&) = default;
                    constexpr ____GlobalNamespace__NoteExecutionRating__Rating& operator=(____GlobalNamespace__NoteExecutionRating__Rating const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__NoteExecutionRating__Rating& operator=(____GlobalNamespace__NoteExecutionRating__Rating&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NoteExecutionRating__Rating(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__NoteExecutionRating__Rating_Unwrapped : int32_t {
__GoodCut = 0,
__Miss = 1,
__BadCut = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__NoteExecutionRating__Rating_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__NoteExecutionRating__Rating_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GoodCut offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating const GoodCut;

/// @brief Field Miss offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating const Miss;

/// @brief Field BadCut offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating const BadCut;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteExecutionRating
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4611))
// CS Name: NoteExecutionRating
class CORDL_TYPE NoteExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
// Declarations
using Rating = ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteExecutionRating() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: " const&", def_value: None }]
constexpr NoteExecutionRating(NoteExecutionRating const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: "&&", def_value: None }]
constexpr NoteExecutionRating(NoteExecutionRating&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteExecutionRating(void* ptr) noexcept : ::GlobalNamespace::BeatmapObjectExecutionRating(ptr) {
}


  constexpr NoteExecutionRating& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteExecutionRating& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteExecutionRating& operator=(NoteExecutionRating&& o) noexcept = default;
  constexpr NoteExecutionRating& operator=(NoteExecutionRating const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating __declspec(property(get=__get_rating, put=__set_rating))  rating;

constexpr void __set_rating(::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating __get_rating() const;

 int32_t __declspec(property(get=__get_cutScore, put=__set_cutScore))  cutScore;

constexpr void __set_cutScore(int32_t value) ;

constexpr int32_t __get_cutScore() const;

 int32_t __declspec(property(get=__get_beforeCutScore, put=__set_beforeCutScore))  beforeCutScore;

constexpr void __set_beforeCutScore(int32_t value) ;

constexpr int32_t __get_beforeCutScore() const;

 int32_t __declspec(property(get=__get_centerDistanceCutScore, put=__set_centerDistanceCutScore))  centerDistanceCutScore;

constexpr void __set_centerDistanceCutScore(int32_t value) ;

constexpr int32_t __get_centerDistanceCutScore() const;

 int32_t __declspec(property(get=__get_afterCutScore, put=__set_afterCutScore))  afterCutScore;

constexpr void __set_afterCutScore(int32_t value) ;

constexpr int32_t __get_afterCutScore() const;

 ::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType __declspec(property(get=__get_scoringType, put=__set_scoringType))  scoringType;

constexpr void __set_scoringType(::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType __get_scoringType() const;


// Methods

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scoringType", ty: "::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType", modifiers: "", def_value: None }, CppParam { name: "rating", ty: "::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating", modifiers: "", def_value: None }, CppParam { name: "cutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beforeCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "centerDistanceCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "afterCutScore", ty: "int32_t", modifiers: "", def_value: None }]
explicit NoteExecutionRating(float_t time, ::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType scoringType, ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore) ;

/// @brief Method .ctor addr 0x2215f94 size 0x54 virtual false final false
 void _ctor(float_t time, ::GlobalNamespace::____GlobalNamespace__NoteData__ScoringType scoringType, ::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NoteExecutionRating__Rating, "", "NoteExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::NoteExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteExecutionRating, "", "NoteExecutionRating");
