#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Type: System.Runtime.Remoting.Messaging::CADMethodReturnMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3153))
// CS Name: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
class CORDL_TYPE CADMethodReturnMessage : public System::Runtime::Remoting::Messaging::CADMessageBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CADMethodReturnMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: " const&", def_value: None }]
constexpr CADMethodReturnMessage(CADMethodReturnMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: "&&", def_value: None }]
constexpr CADMethodReturnMessage(CADMethodReturnMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADMethodReturnMessage(void* ptr) noexcept : System::Runtime::Remoting::Messaging::CADMessageBase(ptr) {
}


  constexpr CADMethodReturnMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADMethodReturnMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADMethodReturnMessage& operator=(CADMethodReturnMessage&& o) noexcept = default;
  constexpr CADMethodReturnMessage& operator=(CADMethodReturnMessage const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__returnValue, put=__set__returnValue))  _returnValue;

constexpr void __set__returnValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__returnValue() const;

 System::Runtime::Remoting::Messaging::CADArgHolder __declspec(property(get=__get__exception, put=__set__exception))  _exception;

constexpr void __set__exception(System::Runtime::Remoting::Messaging::CADArgHolder value) ;

constexpr System::Runtime::Remoting::Messaging::CADArgHolder __get__exception() const;

 ::ArrayW<System::Type> __declspec(property(get=__get__sig, put=__set__sig))  _sig;

constexpr void __set__sig(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get__sig() const;


// Properties

 int32_t __declspec(property(get=get_PropertiesCount))  PropertiesCount;


// Methods

/// @brief Method Create addr 0x233e2c8 size 0x90 virtual false final false
static System::Runtime::Remoting::Messaging::CADMethodReturnMessage Create(System::Runtime::Remoting::Messaging::IMessage callMsg) ;

// Ctor Parameters [CppParam { name: "retMsg", ty: "System::Runtime::Remoting::Messaging::IMethodReturnMessage", modifiers: "", def_value: None }]
explicit CADMethodReturnMessage(System::Runtime::Remoting::Messaging::IMethodReturnMessage retMsg) ;

/// @brief Method .ctor addr 0x233e358 size 0x37c virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage retMsg) ;

/// @brief Method GetArguments addr 0x233e6d4 size 0x140 virtual false final false
 System::Collections::ArrayList GetArguments() ;

/// @brief Method GetArgs addr 0x233e814 size 0x10 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetArgs(System::Collections::ArrayList args) ;

/// @brief Method GetReturnValue addr 0x233e824 size 0x10 virtual false final false
 ::bs_hook::Il2CppWrapperType GetReturnValue(System::Collections::ArrayList args) ;

/// @brief Method GetException addr 0x233e834 size 0xa4 virtual false final false
 System::Exception GetException(System::Collections::ArrayList args) ;

/// @brief Method get_PropertiesCount addr 0x233e8d8 size 0x8 virtual false final false
 int32_t get_PropertiesCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::CADMethodReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodReturnMessage, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
