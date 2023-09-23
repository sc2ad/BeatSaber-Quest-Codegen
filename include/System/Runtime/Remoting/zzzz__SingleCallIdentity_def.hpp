#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SingleCallIdentity;
}
// Type: System.Runtime.Remoting::SingleCallIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3068))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3071))
// CS Name: System.Runtime.Remoting.SingleCallIdentity
class CORDL_TYPE SingleCallIdentity : public System::Runtime::Remoting::ServerIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SingleCallIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleCallIdentity", modifiers: " const&", def_value: None }]
constexpr SingleCallIdentity(SingleCallIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleCallIdentity", modifiers: "&&", def_value: None }]
constexpr SingleCallIdentity(SingleCallIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleCallIdentity(void* ptr) noexcept : System::Runtime::Remoting::ServerIdentity(ptr) {
}


  constexpr SingleCallIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleCallIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleCallIdentity& operator=(SingleCallIdentity&& o) noexcept = default;
  constexpr SingleCallIdentity& operator=(SingleCallIdentity const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }]
explicit SingleCallIdentity(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method .ctor addr 0x2327d20 size 0x30 virtual false final false
 void _ctor(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method SyncObjectProcessMessage addr 0x2327d50 size 0x210 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncObjectProcessMessage addr 0x2327f60 size 0x1c0 virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::SingleCallIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SingleCallIdentity, "System.Runtime.Remoting", "SingleCallIdentity");
