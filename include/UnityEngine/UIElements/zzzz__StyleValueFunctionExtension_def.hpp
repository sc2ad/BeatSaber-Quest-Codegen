#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueFunctionExtension;
}
// Type: UnityEngine.UIElements::StyleValueFunctionExtension
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7374))
// CS Name: UnityEngine.UIElements.StyleValueFunctionExtension
class CORDL_TYPE StyleValueFunctionExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleValueFunctionExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueFunctionExtension", modifiers: " const&", def_value: None }]
constexpr StyleValueFunctionExtension(StyleValueFunctionExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueFunctionExtension", modifiers: "&&", def_value: None }]
constexpr StyleValueFunctionExtension(StyleValueFunctionExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleValueFunctionExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleValueFunctionExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleValueFunctionExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleValueFunctionExtension& operator=(StyleValueFunctionExtension&& o) noexcept = default;
  constexpr StyleValueFunctionExtension& operator=(StyleValueFunctionExtension const& o) noexcept = default;
                


// Methods

/// @brief Method ToUssString addr 0x2cf3f64 size 0xf4 virtual false final false
static ::StringW ToUssString(UnityEngine::UIElements::StyleValueFunction svf) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleValueFunctionExtension);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueFunctionExtension, "UnityEngine.UIElements", "StyleValueFunctionExtension");
