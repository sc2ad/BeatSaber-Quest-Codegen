#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Type: UnityEngine.UIElements::StyleProperty
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7361))
// CS Name: UnityEngine.UIElements.StyleProperty
class CORDL_TYPE StyleProperty : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StyleProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: " const&", def_value: None }]
constexpr StyleProperty(StyleProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "&&", def_value: None }]
constexpr StyleProperty(StyleProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleProperty(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleProperty& operator=(StyleProperty&& o) noexcept = default;
  constexpr StyleProperty& operator=(StyleProperty const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_Line, put=__set_m_Line))  m_Line;

constexpr void __set_m_Line(int32_t value) ;

constexpr int32_t __get_m_Line() const;

 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __declspec(property(get=__get_m_Values, put=__set_m_Values))  m_Values;

constexpr void __set_m_Values(::ArrayW<UnityEngine::UIElements::StyleValueHandle> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __get_m_Values() const;

 bool __declspec(property(get=__get_isCustomProperty, put=__set_isCustomProperty))  isCustomProperty;

constexpr void __set_isCustomProperty(bool value) ;

constexpr bool __get_isCustomProperty() const;

 bool __declspec(property(get=__get_requireVariableResolve, put=__set_requireVariableResolve))  requireVariableResolve;

constexpr void __set_requireVariableResolve(bool value) ;

constexpr bool __get_requireVariableResolve() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __declspec(property(get=get_values))  values;


// Methods

/// @brief Method get_name addr 0x2cf24b4 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_values addr 0x2cf24bc size 0x8 virtual false final false
 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> get_values() ;

static UnityEngine::UIElements::StyleProperty New_ctor() ;

/// @brief Method .ctor addr 0x2cf24c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleProperty);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleProperty, "UnityEngine.UIElements", "StyleProperty");
