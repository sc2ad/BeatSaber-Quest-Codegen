#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainImpl
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7857))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainImpl
class CORDL_TYPE X509ChainImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509ChainImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImpl", modifiers: " const&", def_value: None }]
constexpr X509ChainImpl(X509ChainImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImpl", modifiers: "&&", def_value: None }]
constexpr X509ChainImpl(X509ChainImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ChainImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainImpl& operator=(X509ChainImpl&& o) noexcept = default;
  constexpr X509ChainImpl& operator=(X509ChainImpl const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=get_ChainElements))  ChainElements;

 System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=get_ChainPolicy))  ChainPolicy;

 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=get_ChainStatus))  ChainStatus;


// Methods

/// @brief Method get_IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsValid() ;

/// @brief Method ThrowIfContextInvalid addr 0x27ee224 size 0x40 virtual false final false
 void ThrowIfContextInvalid() ;

/// @brief Method get_ChainElements addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainElementCollection get_ChainElements() ;

/// @brief Method get_ChainPolicy addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainPolicy get_ChainPolicy() ;

/// @brief Method get_ChainStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> get_ChainStatus() ;

/// @brief Method Build addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method AddStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags errorCode) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

/// @brief Method Dispose addr 0x27ed474 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x27ee264 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x27ee268 size 0xa0 virtual true final false
 void Finalize() ;

// Ctor Parameters []
explicit X509ChainImpl() ;

/// @brief Method .ctor addr 0x27ee308 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ChainImpl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainImpl, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
