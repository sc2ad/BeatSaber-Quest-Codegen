#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
struct System__Xml__Schema__XmlSchemaParticle__Occurs;
}
namespace System::Xml::Schema {
class System__Xml__Schema__XmlSchemaParticle__EmptyParticle;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Type: ::Occurs
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11674))
// CS Name: System.Xml.Schema.XmlSchemaParticle::Occurs
struct CORDL_TYPE System__Xml__Schema__XmlSchemaParticle__Occurs : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XmlSchemaParticle__Occurs(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__XmlSchemaParticle__Occurs(System__Xml__Schema__XmlSchemaParticle__Occurs const&) = default;
                    constexpr System__Xml__Schema__XmlSchemaParticle__Occurs(System__Xml__Schema__XmlSchemaParticle__Occurs&&) = default;
                    constexpr System__Xml__Schema__XmlSchemaParticle__Occurs& operator=(System__Xml__Schema__XmlSchemaParticle__Occurs const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XmlSchemaParticle__Occurs& operator=(System__Xml__Schema__XmlSchemaParticle__Occurs&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XmlSchemaParticle__Occurs(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__XmlSchemaParticle__Occurs_Unwrapped : int32_t {
__None = 0,
__Min = 1,
__Max = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__XmlSchemaParticle__Occurs_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__XmlSchemaParticle__Occurs_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs const None;

/// @brief Field Min offset 0
static System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs const Min;

/// @brief Field Max offset 0
static System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XmlSchemaParticle
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11676))
// CS Name: System.Xml.Schema.XmlSchemaParticle
class CORDL_TYPE XmlSchemaParticle : public System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
using EmptyParticle = System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle;

using Occurs = System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlSchemaParticle() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: " const&", def_value: None }]
constexpr XmlSchemaParticle(XmlSchemaParticle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "&&", def_value: None }]
constexpr XmlSchemaParticle(XmlSchemaParticle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaParticle(void* ptr) noexcept : System::Xml::Schema::XmlSchemaAnnotated(ptr) {
}


  constexpr XmlSchemaParticle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaParticle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaParticle& operator=(XmlSchemaParticle&& o) noexcept = default;
  constexpr XmlSchemaParticle& operator=(XmlSchemaParticle const& o) noexcept = default;
                


// Fields

 System::Decimal __declspec(property(get=__get_minOccurs, put=__set_minOccurs))  minOccurs;

constexpr void __set_minOccurs(System::Decimal value) ;

constexpr System::Decimal __get_minOccurs() const;

 System::Decimal __declspec(property(get=__get_maxOccurs, put=__set_maxOccurs))  maxOccurs;

constexpr void __set_maxOccurs(System::Decimal value) ;

constexpr System::Decimal __get_maxOccurs() const;

 System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs value) ;

constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs __get_flags() const;

static System::Xml::Schema::XmlSchemaParticle __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Xml::Schema::XmlSchemaParticle value) ;

static System::Xml::Schema::XmlSchemaParticle __get_Empty() ;


// Properties

 System::Decimal __declspec(property(put=set_MinOccurs))  MinOccurs;

 System::Decimal __declspec(property(put=set_MaxOccurs))  MaxOccurs;


// Methods

/// @brief Method set_MinOccurs addr 0x2733f64 size 0x12c virtual false final false
 void set_MinOccurs(System::Decimal value) ;

/// @brief Method set_MaxOccurs addr 0x2734090 size 0x164 virtual false final false
 void set_MaxOccurs(System::Decimal value) ;

// Ctor Parameters []
explicit XmlSchemaParticle() ;

/// @brief Method .ctor addr 0x273385c size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: ::EmptyParticle
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11675))
// CS Name: System.Xml.Schema.XmlSchemaParticle::EmptyParticle
class CORDL_TYPE System__Xml__Schema__XmlSchemaParticle__EmptyParticle : public System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Xml__Schema__XmlSchemaParticle__EmptyParticle() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__XmlSchemaParticle__EmptyParticle", modifiers: " const&", def_value: None }]
constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle(System__Xml__Schema__XmlSchemaParticle__EmptyParticle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__XmlSchemaParticle__EmptyParticle", modifiers: "&&", def_value: None }]
constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle(System__Xml__Schema__XmlSchemaParticle__EmptyParticle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XmlSchemaParticle__EmptyParticle(void* ptr) noexcept : System::Xml::Schema::XmlSchemaParticle(ptr) {
}


  constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle& operator=(System__Xml__Schema__XmlSchemaParticle__EmptyParticle&& o) noexcept = default;
  constexpr System__Xml__Schema__XmlSchemaParticle__EmptyParticle& operator=(System__Xml__Schema__XmlSchemaParticle__EmptyParticle const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit System__Xml__Schema__XmlSchemaParticle__EmptyParticle() ;

/// @brief Method .ctor addr 0x27353e8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
NEED_NO_BOX(System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle, "System.Xml.Schema", "XmlSchemaParticle/EmptyParticle");
NEED_NO_BOX(System::Xml::Schema::XmlSchemaParticle);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaParticle, "System.Xml.Schema", "XmlSchemaParticle");
