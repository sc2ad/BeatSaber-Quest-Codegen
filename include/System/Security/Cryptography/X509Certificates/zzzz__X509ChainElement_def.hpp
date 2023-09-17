#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainElement
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7854))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainElement
class CORDL_TYPE X509ChainElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509ChainElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: " const&", def_value: None }]
constexpr X509ChainElement(X509ChainElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: "&&", def_value: None }]
constexpr X509ChainElement(X509ChainElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ChainElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainElement& operator=(X509ChainElement&& o) noexcept = default;
  constexpr X509ChainElement& operator=(X509ChainElement const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2 value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2 __get_certificate() const;

 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value) ;

constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> __get_status() const;

 ::StringW __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::StringW value) ;

constexpr ::StringW __get_info() const;

 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __declspec(property(get=__get_compressed_status_flags, put=__set_compressed_status_flags))  compressed_status_flags;

constexpr void __set_compressed_status_flags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __get_compressed_status_flags() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=get_Certificate))  Certificate;

 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=get_ChainElementStatus))  ChainElementStatus;

 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __declspec(property(get=get_StatusFlags, put=set_StatusFlags))  StatusFlags;


// Methods

// Ctor Parameters [CppParam { name: "certificate", ty: "::System::Security::Cryptography::X509Certificates::X509Certificate2", modifiers: "", def_value: None }]
explicit X509ChainElement(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method .ctor addr 0x27ed580 size 0x6c virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method get_Certificate addr 0x27ed5ec size 0x8 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2 get_Certificate() ;

/// @brief Method get_ChainElementStatus addr 0x27ed5f4 size 0x8 virtual false final false
 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> get_ChainElementStatus() ;

/// @brief Method get_StatusFlags addr 0x27ed5fc size 0x8 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags() ;

/// @brief Method set_StatusFlags addr 0x27ed604 size 0x8 virtual false final false
 void set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) ;

/// @brief Method Count addr 0x27ed60c size 0x24 virtual false final false
 int32_t Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags) ;

/// @brief Method Set addr 0x27ed630 size 0x74 virtual false final false
 void Set(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> status, ByRef<int32_t> position, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask) ;

/// @brief Method UncompressFlags addr 0x27ed83c size 0x248 virtual false final false
 void UncompressFlags() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElement, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
