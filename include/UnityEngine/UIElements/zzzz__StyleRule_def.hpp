#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleRule;
}
// Type: UnityEngine.UIElements::StyleRule
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7375))
// CS Name: UnityEngine.UIElements.StyleRule
class CORDL_TYPE StyleRule : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StyleRule() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: " const&", def_value: None }]
constexpr StyleRule(StyleRule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "&&", def_value: None }]
constexpr StyleRule(StyleRule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleRule(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleRule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleRule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleRule& operator=(StyleRule&& o) noexcept = default;
  constexpr StyleRule& operator=(StyleRule const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::UIElements::StyleProperty> __declspec(property(get=__get_m_Properties, put=__set_m_Properties))  m_Properties;

constexpr void __set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty> __get_m_Properties() const;

 int32_t __declspec(property(get=__get_line, put=__set_line))  line;

constexpr void __set_line(int32_t value) ;

constexpr int32_t __get_line() const;

 int32_t __declspec(property(get=__get_customPropertiesCount, put=__set_customPropertiesCount))  customPropertiesCount;

constexpr void __set_customPropertiesCount(int32_t value) ;

constexpr int32_t __get_customPropertiesCount() const;


// Properties

 ::ArrayW<::UnityEngine::UIElements::StyleProperty> __declspec(property(get=get_properties))  properties;


// Methods

/// @brief Method get_properties addr 0x2cf4058 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::UIElements::StyleProperty> get_properties() ;

// Ctor Parameters []
explicit StyleRule() ;

/// @brief Method .ctor addr 0x2cf4060 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleRule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleRule, "UnityEngine.UIElements", "StyleRule");
