#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace JetBrains::Annotations {
class MacroAttribute;
}
// Type: JetBrains.Annotations::MacroAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15701))
// CS Name: JetBrains.Annotations.MacroAttribute
class CORDL_TYPE MacroAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MacroAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: " const&", def_value: None }]
constexpr MacroAttribute(MacroAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "&&", def_value: None }]
constexpr MacroAttribute(MacroAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacroAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr MacroAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacroAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacroAttribute& operator=(MacroAttribute&& o) noexcept = default;
  constexpr MacroAttribute& operator=(MacroAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Expression_k__BackingField, put=__set__Expression_k__BackingField))  _Expression_k__BackingField;

constexpr void __set__Expression_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Expression_k__BackingField() const;

 int32_t __declspec(property(get=__get__Editable_k__BackingField, put=__set__Editable_k__BackingField))  _Editable_k__BackingField;

constexpr void __set__Editable_k__BackingField(int32_t value) ;

constexpr int32_t __get__Editable_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Target_k__BackingField, put=__set__Target_k__BackingField))  _Target_k__BackingField;

constexpr void __set__Target_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Target_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Expression, put=set_Expression))  Expression;

 int32_t __declspec(property(get=get_Editable, put=set_Editable))  Editable;

 ::StringW __declspec(property(get=get_Target, put=set_Target))  Target;


// Methods

/// @brief Method get_Expression addr 0x2d40ec8 size 0x8 virtual false final false
 ::StringW get_Expression() ;

/// @brief Method set_Expression addr 0x2d40ed0 size 0x8 virtual false final false
 void set_Expression(::StringW value) ;

/// @brief Method get_Editable addr 0x2d40ed8 size 0x8 virtual false final false
 int32_t get_Editable() ;

/// @brief Method set_Editable addr 0x2d40ee0 size 0x8 virtual false final false
 void set_Editable(int32_t value) ;

/// @brief Method get_Target addr 0x2d40ee8 size 0x8 virtual false final false
 ::StringW get_Target() ;

/// @brief Method set_Target addr 0x2d40ef0 size 0x8 virtual false final false
 void set_Target(::StringW value) ;

static JetBrains::Annotations::MacroAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40ef8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::MacroAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MacroAttribute, "JetBrains.Annotations", "MacroAttribute");
