#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509list_ref;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
// Forward declare root types
namespace Mono::Unity {
class X509ChainImplUnityTls;
}
// Type: Mono.Unity::X509ChainImplUnityTls
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7665))
// CS Name: Mono.Unity.X509ChainImplUnityTls
class CORDL_TYPE X509ChainImplUnityTls : public System::Security::Cryptography::X509Certificates::X509ChainImpl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509ChainImplUnityTls() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplUnityTls", modifiers: " const&", def_value: None }]
constexpr X509ChainImplUnityTls(X509ChainImplUnityTls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplUnityTls", modifiers: "&&", def_value: None }]
constexpr X509ChainImplUnityTls(X509ChainImplUnityTls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainImplUnityTls(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509ChainImpl(ptr) {
}


  constexpr X509ChainImplUnityTls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainImplUnityTls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainImplUnityTls& operator=(X509ChainImplUnityTls&& o) noexcept = default;
  constexpr X509ChainImplUnityTls& operator=(X509ChainImplUnityTls const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(System::Security::Cryptography::X509Certificates::X509ChainElementCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509ChainElementCollection __get_elements() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref __declspec(property(get=__get_nativeCertificateChain, put=__set_nativeCertificateChain))  nativeCertificateChain;

constexpr void __set_nativeCertificateChain(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref __get_nativeCertificateChain() const;

 System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=__get_policy, put=__set_policy))  policy;

constexpr void __set_policy(System::Security::Cryptography::X509Certificates::X509ChainPolicy value) ;

constexpr System::Security::Cryptography::X509Certificates::X509ChainPolicy __get_policy() const;

 System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=__get_chainStatusList, put=__set_chainStatusList))  chainStatusList;

constexpr void __set_chainStatusList(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509ChainStatus> value) ;

constexpr System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509ChainStatus> __get_chainStatusList() const;

 bool __declspec(property(get=__get_reverseOrder, put=__set_reverseOrder))  reverseOrder;

constexpr void __set_reverseOrder(bool value) ;

constexpr bool __get_reverseOrder() const;


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref __declspec(property(get=get_NativeCertificateChain))  NativeCertificateChain;

 System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=get_ChainElements))  ChainElements;

 System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=get_ChainPolicy))  ChainPolicy;

 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=get_ChainStatus))  ChainStatus;


// Methods

static Mono::Unity::X509ChainImplUnityTls New_ctor(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder) ;

/// @brief Method .ctor addr 0x268a8fc size 0x88 virtual false final false
 void _ctor(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder) ;

/// @brief Method get_IsValid addr 0x268bf38 size 0x28 virtual true final false
 bool get_IsValid() ;

/// @brief Method get_NativeCertificateChain addr 0x268bf60 size 0x8 virtual false final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref get_NativeCertificateChain() ;

/// @brief Method get_ChainElements addr 0x268bf68 size 0x2dc virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainElementCollection get_ChainElements() ;

/// @brief Method AddStatus addr 0x268c244 size 0x10c virtual true final false
 void AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error) ;

/// @brief Method get_ChainPolicy addr 0x268c350 size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainPolicy get_ChainPolicy() ;

/// @brief Method get_ChainStatus addr 0x268c358 size 0x7c virtual true final false
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> get_ChainStatus() ;

/// @brief Method Build addr 0x268c3d4 size 0x8 virtual true final false
 bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method Reset addr 0x268c3dc size 0x40 virtual true final false
 void Reset() ;

/// @brief Method Dispose addr 0x268c41c size 0x38 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
NEED_NO_BOX(Mono::Unity::X509ChainImplUnityTls);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::X509ChainImplUnityTls, "Mono.Unity", "X509ChainImplUnityTls");
