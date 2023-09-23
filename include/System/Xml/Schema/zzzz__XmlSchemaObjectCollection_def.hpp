#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Type: System.Xml.Schema::XmlSchemaObjectCollection
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11673))
// CS Name: System.Xml.Schema.XmlSchemaObjectCollection
class CORDL_TYPE XmlSchemaObjectCollection : public System::Collections::CollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlSchemaObjectCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: " const&", def_value: None }]
constexpr XmlSchemaObjectCollection(XmlSchemaObjectCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: "&&", def_value: None }]
constexpr XmlSchemaObjectCollection(XmlSchemaObjectCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaObjectCollection(void* ptr) noexcept : System::Collections::CollectionBase(ptr) {
}


  constexpr XmlSchemaObjectCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaObjectCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaObjectCollection& operator=(XmlSchemaObjectCollection&& o) noexcept = default;
  constexpr XmlSchemaObjectCollection& operator=(XmlSchemaObjectCollection const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaObject __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(System::Xml::Schema::XmlSchemaObject value) ;

constexpr System::Xml::Schema::XmlSchemaObject __get_parent() const;


// Methods

// Ctor Parameters []
explicit XmlSchemaObjectCollection() ;

/// @brief Method .ctor addr 0x27352bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x2734258 size 0xb8 virtual false final false
 int32_t Add(System::Xml::Schema::XmlSchemaObject item) ;

/// @brief Method OnInsert addr 0x27352c4 size 0x1c virtual true final false
 void OnInsert(int32_t index, ::bs_hook::Il2CppWrapperType item) ;

/// @brief Method OnSet addr 0x27352e0 size 0x5c virtual true final false
 void OnSet(int32_t index, ::bs_hook::Il2CppWrapperType oldValue, ::bs_hook::Il2CppWrapperType newValue) ;

/// @brief Method OnClear addr 0x273533c size 0x1c virtual true final false
 void OnClear() ;

/// @brief Method OnRemove addr 0x2735358 size 0x1c virtual true final false
 void OnRemove(int32_t index, ::bs_hook::Il2CppWrapperType item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaObjectCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaObjectCollection, "System.Xml.Schema", "XmlSchemaObjectCollection");
