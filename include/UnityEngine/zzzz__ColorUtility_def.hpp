#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class ColorUtility;
}
// Type: UnityEngine::ColorUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10189))
// CS Name: UnityEngine.ColorUtility
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
                


// Methods

/// @brief Method ToHtmlStringRGB addr 0x2b62084 size 0x3f0 virtual false final false
static ::StringW ToHtmlStringRGB(::UnityEngine::Color color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUtility, "UnityEngine", "ColorUtility");
