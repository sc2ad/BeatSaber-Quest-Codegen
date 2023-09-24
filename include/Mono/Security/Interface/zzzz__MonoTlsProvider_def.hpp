#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
struct Guid;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
// Type: Mono.Security.Interface::MonoTlsProvider
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13993))
// CS Name: Mono.Security.Interface.MonoTlsProvider
class CORDL_TYPE MonoTlsProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoTlsProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: " const&", def_value: None }]
constexpr MonoTlsProvider(MonoTlsProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: "&&", def_value: None }]
constexpr MonoTlsProvider(MonoTlsProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsProvider& operator=(MonoTlsProvider&& o) noexcept = default;
  constexpr MonoTlsProvider& operator=(MonoTlsProvider const& o) noexcept = default;
                


// Properties

 System::Guid __declspec(property(get=get_ID))  ID;

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_SupportsSslStream))  SupportsSslStream;

 bool __declspec(property(get=get_SupportsConnectionInfo))  SupportsConnectionInfo;

 bool __declspec(property(get=get_SupportsMonoExtensions))  SupportsMonoExtensions;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_SupportedProtocols))  SupportedProtocols;

 bool __declspec(property(get=get_SupportsCleanShutdown))  SupportsCleanShutdown;


// Methods

static Mono::Security::Interface::MonoTlsProvider New_ctor() ;

/// @brief Method .ctor addr 0x229575c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Guid get_ID() ;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_SupportsSslStream addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsSslStream() ;

/// @brief Method get_SupportsConnectionInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsConnectionInfo() ;

/// @brief Method get_SupportsMonoExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsMonoExtensions() ;

/// @brief Method get_SupportedProtocols addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Authentication::SslProtocols get_SupportedProtocols() ;

/// @brief Method get_SupportsCleanShutdown addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsCleanShutdown() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::MonoTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsProvider, "Mono.Security.Interface", "MonoTlsProvider");
