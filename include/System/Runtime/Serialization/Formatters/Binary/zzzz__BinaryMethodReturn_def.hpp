#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodReturn;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryMethodReturn
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3259))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
class CORDL_TYPE BinaryMethodReturn : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BinaryMethodReturn() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: " const&", def_value: None }]
constexpr BinaryMethodReturn(BinaryMethodReturn const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: "&&", def_value: None }]
constexpr BinaryMethodReturn(BinaryMethodReturn&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryMethodReturn(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryMethodReturn& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryMethodReturn& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryMethodReturn& operator=(BinaryMethodReturn&& o) noexcept = default;
  constexpr BinaryMethodReturn& operator=(BinaryMethodReturn const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_returnValue, put=__set_returnValue))  returnValue;

constexpr void __set_returnValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_returnValue() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_args() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_callContext, put=__set_callContext))  callContext;

constexpr void __set_callContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_callContext() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_argTypes, put=__set_argTypes))  argTypes;

constexpr void __set_argTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_argTypes() const;

 bool __declspec(property(get=__get_bArgsPrimitive, put=__set_bArgsPrimitive))  bArgsPrimitive;

constexpr void __set_bArgsPrimitive(bool value) ;

constexpr bool __get_bArgsPrimitive() const;

 System::Runtime::Serialization::Formatters::Binary::MessageEnum __declspec(property(get=__get_messageEnum, put=__set_messageEnum))  messageEnum;

constexpr void __set_messageEnum(System::Runtime::Serialization::Formatters::Binary::MessageEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MessageEnum __get_messageEnum() const;

 System::Type __declspec(property(get=__get_returnType, put=__set_returnType))  returnType;

constexpr void __set_returnType(System::Type value) ;

constexpr System::Type __get_returnType() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_instanceOfVoid, put=__set_instanceOfVoid))  instanceOfVoid;

static void __set_instanceOfVoid(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_instanceOfVoid() ;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn New_ctor() ;

/// @brief Method .ctor addr 0x2355f74 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method Write addr 0x2355f84 size 0x148 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Dump addr 0x23560cc size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
