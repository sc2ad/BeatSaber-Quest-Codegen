#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class SliderController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderShaderHelper;
}
// Type: ::SliderShaderHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4941))
// CS Name: SliderShaderHelper
class CORDL_TYPE SliderShaderHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SliderShaderHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: " const&", def_value: None }]
constexpr SliderShaderHelper(SliderShaderHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: "&&", def_value: None }]
constexpr SliderShaderHelper(SliderShaderHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderShaderHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SliderShaderHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderShaderHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderShaderHelper& operator=(SliderShaderHelper&& o) noexcept = default;
  constexpr SliderShaderHelper& operator=(SliderShaderHelper const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_colorPropertyId, put=__set_colorPropertyId))  colorPropertyId;

static void __set_colorPropertyId(int32_t value) ;

static int32_t __get_colorPropertyId() ;

static int32_t __declspec(property(get=__get_saberAttractionPointPropertyId, put=__set_saberAttractionPointPropertyId))  saberAttractionPointPropertyId;

static void __set_saberAttractionPointPropertyId(int32_t value) ;

static int32_t __get_saberAttractionPointPropertyId() ;

static int32_t __declspec(property(get=__get_timeSinceHeadNoteJumpPropertyId, put=__set_timeSinceHeadNoteJumpPropertyId))  timeSinceHeadNoteJumpPropertyId;

static void __set_timeSinceHeadNoteJumpPropertyId(int32_t value) ;

static int32_t __get_timeSinceHeadNoteJumpPropertyId() ;

static int32_t __declspec(property(get=__get_headNoteJumpDataPropertyId, put=__set_headNoteJumpDataPropertyId))  headNoteJumpDataPropertyId;

static void __set_headNoteJumpDataPropertyId(int32_t value) ;

static int32_t __get_headNoteJumpDataPropertyId() ;

static int32_t __declspec(property(get=__get_tailNoteJumpDataPropertyId, put=__set_tailNoteJumpDataPropertyId))  tailNoteJumpDataPropertyId;

static void __set_tailNoteJumpDataPropertyId(int32_t value) ;

static int32_t __get_tailNoteJumpDataPropertyId() ;

static int32_t __declspec(property(get=__get_jumpSpeedPropertyId, put=__set_jumpSpeedPropertyId))  jumpSpeedPropertyId;

static void __set_jumpSpeedPropertyId(int32_t value) ;

static int32_t __get_jumpSpeedPropertyId() ;

static int32_t __declspec(property(get=__get_jumpDistancePropertyId, put=__set_jumpDistancePropertyId))  jumpDistancePropertyId;

static void __set_jumpDistancePropertyId(int32_t value) ;

static int32_t __get_jumpDistancePropertyId() ;

static int32_t __declspec(property(get=__get_randomPropertyId, put=__set_randomPropertyId))  randomPropertyId;

static void __set_randomPropertyId(int32_t value) ;

static int32_t __get_randomPropertyId() ;

static int32_t __declspec(property(get=__get_headFadeLengthPropertyId, put=__set_headFadeLengthPropertyId))  headFadeLengthPropertyId;

static void __set_headFadeLengthPropertyId(int32_t value) ;

static int32_t __get_headFadeLengthPropertyId() ;

static int32_t __declspec(property(get=__get_tailFadeLengthPropertyId, put=__set_tailFadeLengthPropertyId))  tailFadeLengthPropertyId;

static void __set_tailFadeLengthPropertyId(int32_t value) ;

static int32_t __get_tailFadeLengthPropertyId() ;

static int32_t __declspec(property(get=__get_sliderZLengthPropertyId, put=__set_sliderZLengthPropertyId))  sliderZLengthPropertyId;

static void __set_sliderZLengthPropertyId(int32_t value) ;

static int32_t __get_sliderZLengthPropertyId() ;

static int32_t __declspec(property(get=__get_sliderLengthPropertyId, put=__set_sliderLengthPropertyId))  sliderLengthPropertyId;

static void __set_sliderLengthPropertyId(int32_t value) ;

static int32_t __get_sliderLengthPropertyId() ;

static int32_t __declspec(property(get=__get_tailHeadNoteJumpOffsetDifferencePropertyId, put=__set_tailHeadNoteJumpOffsetDifferencePropertyId))  tailHeadNoteJumpOffsetDifferencePropertyId;

static void __set_tailHeadNoteJumpOffsetDifferencePropertyId(int32_t value) ;

static int32_t __get_tailHeadNoteJumpOffsetDifferencePropertyId() ;

static int32_t __declspec(property(get=__get_saberAttractionMultiplier, put=__set_saberAttractionMultiplier))  saberAttractionMultiplier;

static void __set_saberAttractionMultiplier(int32_t value) ;

static int32_t __get_saberAttractionMultiplier() ;


// Methods

/// @brief Method SetTimeSinceHeadNoteJump addr 0x224c600 size 0x7c virtual false final false
static void SetTimeSinceHeadNoteJump(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, float_t time) ;

/// @brief Method SetTailHeadNoteJumpOffsetDifference addr 0x224c67c size 0x7c virtual false final false
static void SetTailHeadNoteJumpOffsetDifference(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, float_t tailHeadNoteJumpOffsetDifference) ;

/// @brief Method SetSaberAttractionPoint addr 0x224c6f8 size 0x98 virtual false final false
static void SetSaberAttractionPoint(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, ::UnityEngine::Vector3 attractPoint) ;

/// @brief Method EnableSaberAttraction addr 0x223e168 size 0x88 virtual false final false
static void EnableSaberAttraction(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, bool enableSaberAttraction) ;

/// @brief Method SetColor addr 0x224c790 size 0x9c virtual false final false
static void SetColor(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, ::UnityEngine::Color color) ;

/// @brief Method SetInitialProperties addr 0x224c82c size 0x260 virtual false final false
static void SetInitialProperties(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, ::UnityEngine::Color sliderColor, float_t headNoteGravity, float_t tailNoteGravity, float_t noteJumpMovementSpeed, float_t jumpDistance, float_t sliderZLength, float_t sliderLength, bool hasHeadNote, bool hasTailNote, float_t randomValue) ;

/// @brief Method SetInitialProperties addr 0x223e010 size 0x158 virtual false final false
static void SetInitialProperties(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, ::GlobalNamespace::SliderController sliderController, float_t noteJumpMovementSpeed) ;

/// @brief Method UpdateMaterialPropertyBlock addr 0x223e1f0 size 0x160 virtual false final false
static void UpdateMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock materialPropertyBlock, ::GlobalNamespace::SliderController sliderController, float_t timeSinceHeadNoteJump, float_t jumpOffsetY) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SliderShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderShaderHelper, "", "SliderShaderHelper");
