#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Net::Security {
class SslStream;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace System::IO {
class Stream;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsStream;
}
// Type: Mono.Unity::UnityTlsStream
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7664))
// CS Name: Mono.Unity.UnityTlsStream
class CORDL_TYPE UnityTlsStream : public Mono::Net::Security::MobileAuthenticatedStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityTlsStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: " const&", def_value: None }]
constexpr UnityTlsStream(UnityTlsStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: "&&", def_value: None }]
constexpr UnityTlsStream(UnityTlsStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityTlsStream(void* ptr) noexcept : Mono::Net::Security::MobileAuthenticatedStream(ptr) {
}


  constexpr UnityTlsStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityTlsStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityTlsStream& operator=(UnityTlsStream&& o) noexcept = default;
  constexpr UnityTlsStream& operator=(UnityTlsStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "System::Net::Security::SslStream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Net::Security::MobileTlsProvider", modifiers: "", def_value: None }]
explicit UnityTlsStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider) ;

/// @brief Method .ctor addr 0x268b378 size 0x94 virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider) ;

/// @brief Method CreateContext addr 0x268bec8 size 0x70 virtual true final false
 Mono::Net::Security::MobileTlsContext CreateContext(Mono::Net::Security::MonoSslAuthenticationOptions options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
NEED_NO_BOX(Mono::Unity::UnityTlsStream);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsStream, "Mono.Unity", "UnityTlsStream");
