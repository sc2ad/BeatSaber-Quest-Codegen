#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogate;
}
// Type: System.Runtime.Remoting.Messaging::RemotingSurrogate
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3179))
// CS Name: System.Runtime.Remoting.Messaging.RemotingSurrogate
class CORDL_TYPE RemotingSurrogate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializationSurrogate
constexpr operator  ::System::Runtime::Serialization::ISerializationSurrogate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RemotingSurrogate() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogate", modifiers: " const&", def_value: None }]
constexpr RemotingSurrogate(RemotingSurrogate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogate", modifiers: "&&", def_value: None }]
constexpr RemotingSurrogate(RemotingSurrogate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingSurrogate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemotingSurrogate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingSurrogate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingSurrogate& operator=(RemotingSurrogate&& o) noexcept = default;
  constexpr RemotingSurrogate& operator=(RemotingSurrogate const& o) noexcept = default;
                


// Methods

/// @brief Method GetObjectData addr 0x23457e4 size 0x118 virtual true final false
 void GetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc) ;

/// @brief Method SetObjectData addr 0x23458fc size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType SetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc, ::System::Runtime::Serialization::ISurrogateSelector selector) ;

// Ctor Parameters []
explicit RemotingSurrogate() ;

/// @brief Method .ctor addr 0x234593c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogate, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
