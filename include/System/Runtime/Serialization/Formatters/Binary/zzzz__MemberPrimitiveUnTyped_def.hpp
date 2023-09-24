#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
// Type: System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveUnTyped
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3267))
// CS Name: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
class CORDL_TYPE MemberPrimitiveUnTyped : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemberPrimitiveUnTyped() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: " const&", def_value: None }]
constexpr MemberPrimitiveUnTyped(MemberPrimitiveUnTyped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: "&&", def_value: None }]
constexpr MemberPrimitiveUnTyped(MemberPrimitiveUnTyped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberPrimitiveUnTyped(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberPrimitiveUnTyped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberPrimitiveUnTyped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberPrimitiveUnTyped& operator=(MemberPrimitiveUnTyped&& o) noexcept = default;
  constexpr MemberPrimitiveUnTyped& operator=(MemberPrimitiveUnTyped const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_typeInformation, put=__set_typeInformation))  typeInformation;

constexpr void __set_typeInformation(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_typeInformation() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped New_ctor() ;

/// @brief Method .ctor addr 0x23570bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x23570c4 size 0xc virtual false final false
 void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Set addr 0x23570d0 size 0x8 virtual false final false
 void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation) ;

/// @brief Method Write addr 0x23570d8 size 0x24 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x23570fc size 0x30 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x235712c size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
