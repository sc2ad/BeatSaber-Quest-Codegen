#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class IDisposable;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class DisposerReplySink;
}
// Type: System.Runtime.Remoting::DisposerReplySink
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3072))
// CS Name: System.Runtime.Remoting.DisposerReplySink
class CORDL_TYPE DisposerReplySink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisposerReplySink() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: " const&", def_value: None }]
constexpr DisposerReplySink(DisposerReplySink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: "&&", def_value: None }]
constexpr DisposerReplySink(DisposerReplySink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisposerReplySink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisposerReplySink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisposerReplySink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisposerReplySink& operator=(DisposerReplySink&& o) noexcept = default;
  constexpr DisposerReplySink& operator=(DisposerReplySink const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__next() const;

 System::IDisposable __declspec(property(get=__get__disposable, put=__set__disposable))  _disposable;

constexpr void __set__disposable(System::IDisposable value) ;

constexpr System::IDisposable __get__disposable() const;


// Methods

static System::Runtime::Remoting::DisposerReplySink New_ctor(System::Runtime::Remoting::Messaging::IMessageSink next, System::IDisposable disposable) ;

/// @brief Method .ctor addr 0x2328120 size 0x2c virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMessageSink next, System::IDisposable disposable) ;

/// @brief Method SyncProcessMessage addr 0x232814c size 0x11c virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x2328268 size 0x40 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::DisposerReplySink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::DisposerReplySink, "System.Runtime.Remoting", "DisposerReplySink");
