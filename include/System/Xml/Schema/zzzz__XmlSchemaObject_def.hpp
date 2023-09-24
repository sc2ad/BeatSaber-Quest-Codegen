#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Type: System.Xml.Schema::XmlSchemaObject
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11672))
// CS Name: System.Xml.Schema.XmlSchemaObject
class CORDL_TYPE XmlSchemaObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: " const&", def_value: None }]
constexpr XmlSchemaObject(XmlSchemaObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: "&&", def_value: None }]
constexpr XmlSchemaObject(XmlSchemaObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlSchemaObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaObject& operator=(XmlSchemaObject&& o) noexcept = default;
  constexpr XmlSchemaObject& operator=(XmlSchemaObject const& o) noexcept = default;
                


// Methods

/// @brief Method OnAdd addr 0x27352b0 size 0x4 virtual true final false
 void OnAdd(System::Xml::Schema::XmlSchemaObjectCollection container, ::bs_hook::Il2CppWrapperType item) ;

/// @brief Method OnRemove addr 0x27352b4 size 0x4 virtual true final false
 void OnRemove(System::Xml::Schema::XmlSchemaObjectCollection container, ::bs_hook::Il2CppWrapperType item) ;

/// @brief Method OnClear addr 0x27352b8 size 0x4 virtual true final false
 void OnClear(System::Xml::Schema::XmlSchemaObjectCollection container) ;

static System::Xml::Schema::XmlSchemaObject New_ctor() ;

/// @brief Method .ctor addr 0x2733760 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaObject);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaObject, "System.Xml.Schema", "XmlSchemaObject");
