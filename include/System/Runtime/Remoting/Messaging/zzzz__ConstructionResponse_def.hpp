#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IDictionary;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionResponse;
}
// Type: System.Runtime.Remoting.Messaging::ConstructionResponse
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3174))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3158))
// CS Name: System.Runtime.Remoting.Messaging.ConstructionResponse
class CORDL_TYPE ConstructionResponse : public System::Runtime::Remoting::Messaging::MethodResponse {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IConstructionReturnMessage
constexpr operator  System::Runtime::Remoting::Activation::IConstructionReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ConstructionResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: " const&", def_value: None }]
constexpr ConstructionResponse(ConstructionResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "&&", def_value: None }]
constexpr ConstructionResponse(ConstructionResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructionResponse(void* ptr) noexcept : System::Runtime::Remoting::Messaging::MethodResponse(ptr) {
}


  constexpr ConstructionResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructionResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructionResponse& operator=(ConstructionResponse&& o) noexcept = default;
  constexpr ConstructionResponse& operator=(ConstructionResponse const& o) noexcept = default;
                


// Properties

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;


// Methods

static System::Runtime::Remoting::Messaging::ConstructionResponse New_ctor(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x232df84 size 0xc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

static System::Runtime::Remoting::Messaging::ConstructionResponse New_ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x2338d44 size 0x4 virtual false final false
 void _ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

static System::Runtime::Remoting::Messaging::ConstructionResponse New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2341098 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Properties addr 0x2341114 size 0x4 virtual true final false
 System::Collections::IDictionary get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ConstructionResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionResponse, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
