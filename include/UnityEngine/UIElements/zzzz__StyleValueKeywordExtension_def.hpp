#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueKeywordExtension;
}
// Type: UnityEngine.UIElements::StyleValueKeywordExtension
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7380))
// CS Name: UnityEngine.UIElements.StyleValueKeywordExtension
class CORDL_TYPE StyleValueKeywordExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleValueKeywordExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: " const&", def_value: None }]
constexpr StyleValueKeywordExtension(StyleValueKeywordExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: "&&", def_value: None }]
constexpr StyleValueKeywordExtension(StyleValueKeywordExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleValueKeywordExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleValueKeywordExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleValueKeywordExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleValueKeywordExtension& operator=(StyleValueKeywordExtension&& o) noexcept = default;
  constexpr StyleValueKeywordExtension& operator=(StyleValueKeywordExtension const& o) noexcept = default;
                


// Methods

/// @brief Method ToUssString addr 0x2cf5448 size 0x120 virtual false final false
static ::StringW ToUssString(UnityEngine::UIElements::StyleValueKeyword svk) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleValueKeywordExtension);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueKeywordExtension, "UnityEngine.UIElements", "StyleValueKeywordExtension");
