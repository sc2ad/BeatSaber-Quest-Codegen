#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorImportNamespaceAttribute;
}
// Type: JetBrains.Annotations::RazorImportNamespaceAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15743))
// CS Name: JetBrains.Annotations.RazorImportNamespaceAttribute
class CORDL_TYPE RazorImportNamespaceAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RazorImportNamespaceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorImportNamespaceAttribute", modifiers: " const&", def_value: None }]
constexpr RazorImportNamespaceAttribute(RazorImportNamespaceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorImportNamespaceAttribute", modifiers: "&&", def_value: None }]
constexpr RazorImportNamespaceAttribute(RazorImportNamespaceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorImportNamespaceAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorImportNamespaceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorImportNamespaceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorImportNamespaceAttribute& operator=(RazorImportNamespaceAttribute&& o) noexcept = default;
  constexpr RazorImportNamespaceAttribute& operator=(RazorImportNamespaceAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

static JetBrains::Annotations::RazorImportNamespaceAttribute New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2d41374 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x2d4139c size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x2d413a4 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorImportNamespaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorImportNamespaceAttribute, "JetBrains.Annotations", "RazorImportNamespaceAttribute");
