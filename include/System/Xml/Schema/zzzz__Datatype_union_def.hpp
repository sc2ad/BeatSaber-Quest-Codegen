#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_union;
}
// Type: System.Xml.Schema::Datatype_union
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11565))
// CS Name: System.Xml.Schema.Datatype_union
class CORDL_TYPE Datatype_union : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_union() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: " const&", def_value: None }]
constexpr Datatype_union(Datatype_union const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "&&", def_value: None }]
constexpr Datatype_union(Datatype_union&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_union(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_union& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_union& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_union& operator=(Datatype_union&& o) noexcept = default;
  constexpr Datatype_union& operator=(Datatype_union const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;

 ::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> __declspec(property(get=__get_types, put=__set_types))  types;

constexpr void __set_types(::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> value) ;

constexpr ::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> __get_types() const;


// Methods

/// @brief Method HasAtomicMembers addr 0x2723a98 size 0x80 virtual false final false
 bool HasAtomicMembers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_union, "System.Xml.Schema", "Datatype_union");
