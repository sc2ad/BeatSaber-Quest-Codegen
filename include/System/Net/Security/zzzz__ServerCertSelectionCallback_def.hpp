#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Net::Security {
class ServerCertSelectionCallback;
}
// Type: System.Net.Security::ServerCertSelectionCallback
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8222))
// CS Name: System.Net.Security.ServerCertSelectionCallback
class CORDL_TYPE ServerCertSelectionCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ServerCertSelectionCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: " const&", def_value: None }]
constexpr ServerCertSelectionCallback(ServerCertSelectionCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: "&&", def_value: None }]
constexpr ServerCertSelectionCallback(ServerCertSelectionCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerCertSelectionCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ServerCertSelectionCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerCertSelectionCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerCertSelectionCallback& operator=(ServerCertSelectionCallback&& o) noexcept = default;
  constexpr ServerCertSelectionCallback& operator=(ServerCertSelectionCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ServerCertSelectionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x276d3f0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x276d4c4 size 0x14 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate Invoke(::StringW hostName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::ServerCertSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::ServerCertSelectionCallback, "System.Net.Security", "ServerCertSelectionCallback");
