#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetExtensions;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetExtensions
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7561))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetExtensions
class CORDL_TYPE StyleSheetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleSheetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: " const&", def_value: None }]
constexpr StyleSheetExtensions(StyleSheetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: "&&", def_value: None }]
constexpr StyleSheetExtensions(StyleSheetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSheetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSheetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSheetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSheetExtensions& operator=(StyleSheetExtensions&& o) noexcept = default;
  constexpr StyleSheetExtensions& operator=(StyleSheetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ReadAsString addr 0x2c6cec0 size 0x2dc virtual false final false
static ::StringW ReadAsString(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method IsVarFunction addr 0x2c6d430 size 0x34 virtual false final false
static bool IsVarFunction(UnityEngine::UIElements::StyleValueHandle handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StyleSheetExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleSheetExtensions, "UnityEngine.UIElements.StyleSheets", "StyleSheetExtensions");
