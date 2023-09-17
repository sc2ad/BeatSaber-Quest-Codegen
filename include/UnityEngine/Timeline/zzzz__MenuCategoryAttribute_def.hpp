#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
class MenuCategoryAttribute;
}
// Type: UnityEngine.Timeline::MenuCategoryAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14137))
// CS Name: UnityEngine.Timeline.MenuCategoryAttribute
class CORDL_TYPE MenuCategoryAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MenuCategoryAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: " const&", def_value: None }]
constexpr MenuCategoryAttribute(MenuCategoryAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: "&&", def_value: None }]
constexpr MenuCategoryAttribute(MenuCategoryAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuCategoryAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr MenuCategoryAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuCategoryAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuCategoryAttribute& operator=(MenuCategoryAttribute&& o) noexcept = default;
  constexpr MenuCategoryAttribute& operator=(MenuCategoryAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_category, put=__set_category))  category;

constexpr void __set_category(::StringW value) ;

constexpr ::StringW __get_category() const;


// Methods

// Ctor Parameters [CppParam { name: "category", ty: "::StringW", modifiers: "", def_value: None }]
explicit MenuCategoryAttribute(::StringW category) ;

/// @brief Method .ctor addr 0x2ad5e4c size 0x6c virtual false final false
 void _ctor(::StringW category) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::MenuCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MenuCategoryAttribute, "UnityEngine.Timeline", "MenuCategoryAttribute");
