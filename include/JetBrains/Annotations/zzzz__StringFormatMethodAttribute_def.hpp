#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class StringFormatMethodAttribute;
}
// Type: JetBrains.Annotations::StringFormatMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15682))
// CS Name: JetBrains.Annotations.StringFormatMethodAttribute
class CORDL_TYPE StringFormatMethodAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StringFormatMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: " const&", def_value: None }]
constexpr StringFormatMethodAttribute(StringFormatMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: "&&", def_value: None }]
constexpr StringFormatMethodAttribute(StringFormatMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringFormatMethodAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr StringFormatMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringFormatMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringFormatMethodAttribute& operator=(StringFormatMethodAttribute&& o) noexcept = default;
  constexpr StringFormatMethodAttribute& operator=(StringFormatMethodAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__FormatParameterName_k__BackingField, put=__set__FormatParameterName_k__BackingField))  _FormatParameterName_k__BackingField;

constexpr void __set__FormatParameterName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__FormatParameterName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_FormatParameterName, put=set_FormatParameterName))  FormatParameterName;


// Methods

static JetBrains::Annotations::StringFormatMethodAttribute New_ctor(::StringW formatParameterName) ;

/// @brief Method .ctor addr 0x2d40a7c size 0x28 virtual false final false
 void _ctor(::StringW formatParameterName) ;

/// @brief Method get_FormatParameterName addr 0x2d40aa4 size 0x8 virtual false final false
 ::StringW get_FormatParameterName() ;

/// @brief Method set_FormatParameterName addr 0x2d40aac size 0x8 virtual false final false
 void set_FormatParameterName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::StringFormatMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::StringFormatMethodAttribute, "JetBrains.Annotations", "StringFormatMethodAttribute");
