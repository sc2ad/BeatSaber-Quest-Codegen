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
class MemberPrimitiveTyped;
}
// Type: System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveTyped
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3263))
// CS Name: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
class CORDL_TYPE MemberPrimitiveTyped : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemberPrimitiveTyped() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: " const&", def_value: None }]
constexpr MemberPrimitiveTyped(MemberPrimitiveTyped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: "&&", def_value: None }]
constexpr MemberPrimitiveTyped(MemberPrimitiveTyped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberPrimitiveTyped(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberPrimitiveTyped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberPrimitiveTyped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberPrimitiveTyped& operator=(MemberPrimitiveTyped&& o) noexcept = default;
  constexpr MemberPrimitiveTyped& operator=(MemberPrimitiveTyped const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_primitiveTypeEnum, put=__set_primitiveTypeEnum))  primitiveTypeEnum;

constexpr void __set_primitiveTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_primitiveTypeEnum() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped New_ctor() ;

/// @brief Method .ctor addr 0x2356220 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x2356228 size 0xc virtual false final false
 void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Write addr 0x2356234 size 0x60 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2356294 size 0x48 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x23562dc size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
