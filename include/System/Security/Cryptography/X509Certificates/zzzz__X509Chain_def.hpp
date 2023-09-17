#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Type: System.Security.Cryptography.X509Certificates::X509Chain
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7853))
// CS Name: System.Security.Cryptography.X509Certificates.X509Chain
class CORDL_TYPE X509Chain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509Chain() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: " const&", def_value: None }]
constexpr X509Chain(X509Chain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None }]
constexpr X509Chain(X509Chain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Chain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Chain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Chain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Chain& operator=(X509Chain&& o) noexcept = default;
  constexpr X509Chain& operator=(X509Chain const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::X509Certificates::X509ChainImpl __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(::System::Security::Cryptography::X509Certificates::X509ChainImpl value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainImpl __get_impl() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509ChainImpl __declspec(property(get=get_Impl))  Impl;

 ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=get_ChainElements))  ChainElements;

 ::System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=get_ChainPolicy))  ChainPolicy;

 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=get_ChainStatus))  ChainStatus;


// Methods

/// @brief Method get_Impl addr 0x27ed230 size 0x20 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ChainImpl get_Impl() ;

// Ctor Parameters []
explicit X509Chain() ;

/// @brief Method .ctor addr 0x27ed250 size 0x28 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "useMachineContext", ty: "bool", modifiers: "", def_value: None }]
explicit X509Chain(bool useMachineContext) ;

/// @brief Method .ctor addr 0x27ed278 size 0x34 virtual false final false
 void _ctor(bool useMachineContext) ;

// Ctor Parameters [CppParam { name: "impl", ty: "::System::Security::Cryptography::X509Certificates::X509ChainImpl", modifiers: "", def_value: None }]
explicit X509Chain(::System::Security::Cryptography::X509Certificates::X509ChainImpl impl) ;

/// @brief Method .ctor addr 0x27ed2ac size 0x34 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl impl) ;

// Ctor Parameters [CppParam { name: "chainContext", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit X509Chain(::cordl_internals::intptr_t chainContext) ;

/// @brief Method .ctor addr 0x27ed2e0 size 0x48 virtual false final false
 void _ctor(::cordl_internals::intptr_t chainContext) ;

/// @brief Method get_ChainElements addr 0x27ed328 size 0x30 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection get_ChainElements() ;

/// @brief Method get_ChainPolicy addr 0x27ed358 size 0x30 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ChainPolicy get_ChainPolicy() ;

/// @brief Method get_ChainStatus addr 0x27ed388 size 0x30 virtual false final false
 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> get_ChainStatus() ;

/// @brief Method Build addr 0x27ec088 size 0x40 virtual false final false
 bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method Reset addr 0x27ed3b8 size 0x30 virtual false final false
 void Reset() ;

/// @brief Method Create addr 0x27ec01c size 0x6c virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509Chain Create() ;

/// @brief Method Dispose addr 0x27ed3e8 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x27ed454 size 0x20 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x27ed4e0 size 0xa0 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Chain, "System.Security.Cryptography.X509Certificates", "X509Chain");
