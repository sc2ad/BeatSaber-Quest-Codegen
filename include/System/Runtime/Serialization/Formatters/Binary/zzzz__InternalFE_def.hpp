#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalSerializerTypeE;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Runtime::Serialization::Formatters {
struct TypeFilterLevel;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalFE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3293))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalFE
class CORDL_TYPE InternalFE : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InternalFE() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: " const&", def_value: None }]
constexpr InternalFE(InternalFE const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "&&", def_value: None }]
constexpr InternalFE(InternalFE&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalFE(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InternalFE& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalFE& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalFE& operator=(InternalFE&& o) noexcept = default;
  constexpr InternalFE& operator=(InternalFE const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::FormatterTypeStyle __declspec(property(get=__get_FEtypeFormat, put=__set_FEtypeFormat))  FEtypeFormat;

constexpr void __set_FEtypeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterTypeStyle __get_FEtypeFormat() const;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=__get_FEassemblyFormat, put=__set_FEassemblyFormat))  FEassemblyFormat;

constexpr void __set_FEassemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __get_FEassemblyFormat() const;

 System::Runtime::Serialization::Formatters::TypeFilterLevel __declspec(property(get=__get_FEsecurityLevel, put=__set_FEsecurityLevel))  FEsecurityLevel;

constexpr void __set_FEsecurityLevel(System::Runtime::Serialization::Formatters::TypeFilterLevel value) ;

constexpr System::Runtime::Serialization::Formatters::TypeFilterLevel __get_FEsecurityLevel() const;

 System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE __declspec(property(get=__get_FEserializerTypeEnum, put=__set_FEserializerTypeEnum))  FEserializerTypeEnum;

constexpr void __set_FEserializerTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE __get_FEserializerTypeEnum() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::InternalFE New_ctor() ;

/// @brief Method .ctor addr 0x2369f34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::InternalFE);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalFE, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
