#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System {
class Type;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SingletonIdentity;
}
// Type: System.Runtime.Remoting::SingletonIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3068))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3070))
// CS Name: System.Runtime.Remoting.SingletonIdentity
class CORDL_TYPE SingletonIdentity : public System::Runtime::Remoting::ServerIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SingletonIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingletonIdentity", modifiers: " const&", def_value: None }]
constexpr SingletonIdentity(SingletonIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingletonIdentity", modifiers: "&&", def_value: None }]
constexpr SingletonIdentity(SingletonIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingletonIdentity(void* ptr) noexcept : System::Runtime::Remoting::ServerIdentity(ptr) {
}


  constexpr SingletonIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingletonIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingletonIdentity& operator=(SingletonIdentity&& o) noexcept = default;
  constexpr SingletonIdentity& operator=(SingletonIdentity const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }]
explicit SingletonIdentity(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method .ctor addr 0x2327944 size 0x30 virtual false final false
 void _ctor(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method GetServerObject addr 0x2327974 size 0x1f0 virtual false final false
 System::MarshalByRefObject GetServerObject() ;

/// @brief Method SyncObjectProcessMessage addr 0x2327b6c size 0xd0 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncObjectProcessMessage addr 0x2327c3c size 0xe4 virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::SingletonIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SingletonIdentity, "System.Runtime.Remoting", "SingletonIdentity");
