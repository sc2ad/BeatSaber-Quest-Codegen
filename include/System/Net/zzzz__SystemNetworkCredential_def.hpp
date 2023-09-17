#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
namespace {
// Forward declare root types
namespace System::Net {
class SystemNetworkCredential;
}
// Type: System.Net::SystemNetworkCredential
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7932))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7911))
// CS Name: System.Net.SystemNetworkCredential
class CORDL_TYPE SystemNetworkCredential : public ::System::Net::NetworkCredential {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SystemNetworkCredential() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemNetworkCredential", modifiers: " const&", def_value: None }]
constexpr SystemNetworkCredential(SystemNetworkCredential const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemNetworkCredential", modifiers: "&&", def_value: None }]
constexpr SystemNetworkCredential(SystemNetworkCredential&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemNetworkCredential(void* ptr) noexcept : ::System::Net::NetworkCredential(ptr) {
}


  constexpr SystemNetworkCredential& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemNetworkCredential& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemNetworkCredential& operator=(SystemNetworkCredential&& o) noexcept = default;
  constexpr SystemNetworkCredential& operator=(SystemNetworkCredential const& o) noexcept = default;
                


// Fields

static ::System::Net::SystemNetworkCredential __declspec(property(get=__get_defaultCredential, put=__set_defaultCredential))  defaultCredential;

static void __set_defaultCredential(::System::Net::SystemNetworkCredential value) ;

static ::System::Net::SystemNetworkCredential __get_defaultCredential() ;


// Methods

// Ctor Parameters []
explicit SystemNetworkCredential() ;

/// @brief Method .ctor addr 0x2809f50 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::SystemNetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SystemNetworkCredential, "System.Net", "SystemNetworkCredential");
