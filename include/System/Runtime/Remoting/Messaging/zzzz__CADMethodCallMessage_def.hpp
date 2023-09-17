#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
// Type: System.Runtime.Remoting.Messaging::CADMethodCallMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3152))
// CS Name: System.Runtime.Remoting.Messaging.CADMethodCallMessage
class CORDL_TYPE CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CADMethodCallMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: " const&", def_value: None }]
constexpr CADMethodCallMessage(CADMethodCallMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: "&&", def_value: None }]
constexpr CADMethodCallMessage(CADMethodCallMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADMethodCallMessage(void* ptr) noexcept : ::System::Runtime::Remoting::Messaging::CADMessageBase(ptr) {
}


  constexpr CADMethodCallMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADMethodCallMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADMethodCallMessage& operator=(CADMethodCallMessage&& o) noexcept = default;
  constexpr CADMethodCallMessage& operator=(CADMethodCallMessage const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::StringW value) ;

constexpr ::StringW __get__uri() const;


// Properties

 ::StringW __declspec(property(get=get_Uri))  Uri;

 int32_t __declspec(property(get=get_PropertiesCount))  PropertiesCount;


// Methods

/// @brief Method get_Uri addr 0x233df78 size 0x8 virtual false final false
 ::StringW get_Uri() ;

/// @brief Method Create addr 0x23376e4 size 0x90 virtual false final false
static ::System::Runtime::Remoting::Messaging::CADMethodCallMessage Create(::System::Runtime::Remoting::Messaging::IMessage callMsg) ;

// Ctor Parameters [CppParam { name: "callMsg", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
explicit CADMethodCallMessage(::System::Runtime::Remoting::Messaging::IMethodCallMessage callMsg) ;

/// @brief Method .ctor addr 0x233df80 size 0x1f0 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage callMsg) ;

/// @brief Method GetArguments addr 0x233e170 size 0x140 virtual false final false
 ::System::Collections::ArrayList GetArguments() ;

/// @brief Method GetArgs addr 0x233e2b0 size 0x10 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetArgs(::System::Collections::ArrayList args) ;

/// @brief Method get_PropertiesCount addr 0x233e2c0 size 0x8 virtual false final false
 int32_t get_PropertiesCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodCallMessage, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
