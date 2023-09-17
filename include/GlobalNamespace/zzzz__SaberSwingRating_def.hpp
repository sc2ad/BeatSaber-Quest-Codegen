#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class SaberSwingRating;
}
// Type: ::SaberSwingRating
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4223))
// CS Name: SaberSwingRating
class CORDL_TYPE SaberSwingRating : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SaberSwingRating() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: " const&", def_value: None }]
constexpr SaberSwingRating(SaberSwingRating const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: "&&", def_value: None }]
constexpr SaberSwingRating(SaberSwingRating&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberSwingRating(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SaberSwingRating& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberSwingRating& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberSwingRating& operator=(SaberSwingRating&& o) noexcept = default;
  constexpr SaberSwingRating& operator=(SaberSwingRating const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxNormalAngleDiff offset 0
static constexpr float_t  kMaxNormalAngleDiff{90};

/// @brief Field kToleranceNormalAngleDiff offset 0
static constexpr float_t  kToleranceNormalAngleDiff{75};

/// @brief Field kMaxBeforeCutSwingDuration offset 0
static constexpr float_t  kMaxBeforeCutSwingDuration{0.4};

/// @brief Field kMaxAfterCutSwingDuration offset 0
static constexpr float_t  kMaxAfterCutSwingDuration{0.4};

/// @brief Field kBeforeCutAngleFor1Rating offset 0
static constexpr float_t  kBeforeCutAngleFor1Rating{100};

/// @brief Field kAfterCutAngleFor1Rating offset 0
static constexpr float_t  kAfterCutAngleFor1Rating{60};


// Methods

/// @brief Method NormalRating addr 0x21c0ec4 size 0x2c virtual false final false
static float_t NormalRating(float_t normalDiff) ;

/// @brief Method BeforeCutStepRating addr 0x21c0e88 size 0x3c virtual false final false
static float_t BeforeCutStepRating(float_t angleDiff, float_t normalDiff) ;

/// @brief Method AfterCutStepRating addr 0x21c0ef0 size 0x3c virtual false final false
static float_t AfterCutStepRating(float_t angleDiff, float_t normalDiff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SaberSwingRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRating, "", "SaberSwingRating");
