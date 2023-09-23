#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryMethodCall
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3258))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
class CORDL_TYPE BinaryMethodCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BinaryMethodCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: " const&", def_value: None }]
constexpr BinaryMethodCall(BinaryMethodCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: "&&", def_value: None }]
constexpr BinaryMethodCall(BinaryMethodCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryMethodCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryMethodCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryMethodCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryMethodCall& operator=(BinaryMethodCall&& o) noexcept = default;
  constexpr BinaryMethodCall& operator=(BinaryMethodCall const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_methodName, put=__set_methodName))  methodName;

constexpr void __set_methodName(::StringW value) ;

constexpr ::StringW __get_methodName() const;

 ::StringW __declspec(property(get=__get_typeName, put=__set_typeName))  typeName;

constexpr void __set_typeName(::StringW value) ;

constexpr ::StringW __get_typeName() const;

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


// Methods

/// @brief Method Write addr 0x2355d70 size 0x148 virtual false final false
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Dump addr 0x2355eb8 size 0x4 virtual false final false
 void Dump() ;

// Ctor Parameters []
explicit BinaryMethodCall() ;

/// @brief Method .ctor addr 0x2355ebc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
