#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder {
class XYZColor;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
namespace UnityEngine::ProBuilder {
class HSVColor;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorUtility;
}
// Type: UnityEngine.ProBuilder::ColorUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12058))
// CS Name: UnityEngine.ProBuilder.ColorUtility
class CORDL_TYPE ColorUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: " const&", def_value: None }]
constexpr ColorUtility(ColorUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
constexpr ColorUtility(ColorUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorUtility& operator=(ColorUtility&& o) noexcept = default;
  constexpr ColorUtility& operator=(ColorUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::ProBuilder::CIELabColor> __declspec(property(get=__get_ColorNameLookup, put=__set_ColorNameLookup))  ColorNameLookup;

static void __set_ColorNameLookup(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::ProBuilder::CIELabColor> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::ProBuilder::CIELabColor> __get_ColorNameLookup() ;


// Methods

/// @brief Method approx addr 0x29aa414 size 0x64 virtual false final false
static bool approx(float_t lhs, float_t rhs) ;

/// @brief Method GetColor addr 0x29aa478 size 0xe0 virtual false final false
static UnityEngine::Color GetColor(UnityEngine::Vector3 vec) ;

/// @brief Method RGBToXYZ addr 0x29a9d88 size 0x74 virtual false final false
static UnityEngine::ProBuilder::XYZColor RGBToXYZ(UnityEngine::Color col) ;

/// @brief Method RGBToXYZ addr 0x29a9e70 size 0x19c virtual false final false
static UnityEngine::ProBuilder::XYZColor RGBToXYZ(float_t r, float_t g, float_t b) ;

/// @brief Method XYZToCIE_Lab addr 0x29aa160 size 0x164 virtual false final false
static UnityEngine::ProBuilder::CIELabColor XYZToCIE_Lab(UnityEngine::ProBuilder::XYZColor xyz) ;

/// @brief Method DeltaE addr 0x29aa558 size 0x48 virtual false final false
static float_t DeltaE(UnityEngine::ProBuilder::CIELabColor lhs, UnityEngine::ProBuilder::CIELabColor rhs) ;

/// @brief Method HSVtoRGB addr 0x29aa5a0 size 0x7c virtual false final false
static UnityEngine::Color HSVtoRGB(UnityEngine::ProBuilder::HSVColor hsv) ;

/// @brief Method HSVtoRGB addr 0x29aa61c size 0xe4 virtual false final false
static UnityEngine::Color HSVtoRGB(float_t h, float_t s, float_t v) ;

/// @brief Method RGBtoHSV addr 0x29a99a4 size 0x220 virtual false final false
static UnityEngine::ProBuilder::HSVColor RGBtoHSV(UnityEngine::Color color) ;

/// @brief Method GetColorName addr 0x29aa700 size 0x210 virtual false final false
static ::StringW GetColorName(UnityEngine::Color InColor) ;

/// @brief Method CIELabFromRGB addr 0x29aa910 size 0x24 virtual false final false
static UnityEngine::ProBuilder::CIELabColor CIELabFromRGB(float_t R, float_t G, float_t B, float_t Scale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorUtility, "UnityEngine.ProBuilder", "ColorUtility");
