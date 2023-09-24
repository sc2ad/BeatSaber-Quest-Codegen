#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMessageBase;
}
// Type: System.Runtime.Remoting.Messaging::CADMessageBase
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3151))
// CS Name: System.Runtime.Remoting.Messaging.CADMessageBase
class CORDL_TYPE CADMessageBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CADMessageBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: " const&", def_value: None }]
constexpr CADMessageBase(CADMessageBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: "&&", def_value: None }]
constexpr CADMessageBase(CADMessageBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADMessageBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CADMessageBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADMessageBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADMessageBase& operator=(CADMessageBase&& o) noexcept = default;
  constexpr CADMessageBase& operator=(CADMessageBase const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__args, put=__set__args))  _args;

constexpr void __set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__args() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serializedArgs, put=__set__serializedArgs))  _serializedArgs;

constexpr void __set__serializedArgs(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serializedArgs() const;

 int32_t __declspec(property(get=__get__propertyCount, put=__set__propertyCount))  _propertyCount;

constexpr void __set__propertyCount(int32_t value) ;

constexpr int32_t __get__propertyCount() const;

 System::Runtime::Remoting::Messaging::CADArgHolder __declspec(property(get=__get__callContext, put=__set__callContext))  _callContext;

constexpr void __set__callContext(System::Runtime::Remoting::Messaging::CADArgHolder value) ;

constexpr System::Runtime::Remoting::Messaging::CADArgHolder __get__callContext() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serializedMethod, put=__set_serializedMethod))  serializedMethod;

constexpr void __set_serializedMethod(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serializedMethod() const;


// Methods

static System::Runtime::Remoting::Messaging::CADMessageBase New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage msg) ;

/// @brief Method .ctor addr 0x233c32c size 0x94 virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMethodMessage msg) ;

/// @brief Method GetMethod addr 0x233c3c0 size 0x80 virtual false final false
 System::Reflection::MethodBase GetMethod() ;

/// @brief Method GetSignature addr 0x233c440 size 0x1b0 virtual false final false
static ::ArrayW<System::Type> GetSignature(System::Reflection::MethodBase methodBase, bool load) ;

/// @brief Method MarshalProperties addr 0x233c5f0 size 0x764 virtual false final false
static int32_t MarshalProperties(System::Collections::IDictionary dict, ByRef<System::Collections::ArrayList> args) ;

/// @brief Method UnmarshalProperties addr 0x233ced8 size 0x13c virtual false final false
static void UnmarshalProperties(System::Collections::IDictionary dict, int32_t count, System::Collections::ArrayList args) ;

/// @brief Method IsPossibleToIgnoreMarshal addr 0x233d014 size 0x1b0 virtual false final false
static bool IsPossibleToIgnoreMarshal(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method MarshalArgument addr 0x233d1c4 size 0x1c4 virtual false final false
 ::bs_hook::Il2CppWrapperType MarshalArgument(::bs_hook::Il2CppWrapperType arg, ByRef<System::Collections::ArrayList> args) ;

/// @brief Method UnmarshalArgument addr 0x233d388 size 0x72c virtual false final false
 ::bs_hook::Il2CppWrapperType UnmarshalArgument(::bs_hook::Il2CppWrapperType arg, System::Collections::ArrayList args) ;

/// @brief Method MarshalArguments addr 0x233dab4 size 0x100 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> MarshalArguments(::ArrayW<::bs_hook::Il2CppWrapperType> arguments, ByRef<System::Collections::ArrayList> args) ;

/// @brief Method UnmarshalArguments addr 0x233dbb4 size 0x100 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> UnmarshalArguments(::ArrayW<::bs_hook::Il2CppWrapperType> arguments, System::Collections::ArrayList args) ;

/// @brief Method SaveLogicalCallContext addr 0x233dcb4 size 0x23c virtual false final false
 void SaveLogicalCallContext(System::Runtime::Remoting::Messaging::IMethodMessage msg, ByRef<System::Collections::ArrayList> serializeList) ;

/// @brief Method GetLogicalCallContext addr 0x233def0 size 0x88 virtual false final false
 System::Runtime::Remoting::Messaging::LogicalCallContext GetLogicalCallContext(System::Collections::ArrayList args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::CADMessageBase);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMessageBase, "System.Runtime.Remoting.Messaging", "CADMessageBase");
