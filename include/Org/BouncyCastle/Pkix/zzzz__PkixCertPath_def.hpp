#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPath
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1715))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPath
class CORDL_TYPE PkixCertPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkixCertPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: " const&", def_value: None }]
constexpr PkixCertPath(PkixCertPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "&&", def_value: None }]
constexpr PkixCertPath(PkixCertPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPath& operator=(PkixCertPath&& o) noexcept = default;
  constexpr PkixCertPath& operator=(PkixCertPath const& o) noexcept = default;
                


// Fields

static System::Collections::IList __declspec(property(get=__get_certPathEncodings, put=__set_certPathEncodings))  certPathEncodings;

static void __set_certPathEncodings(System::Collections::IList value) ;

static System::Collections::IList __get_certPathEncodings() ;

 System::Collections::IList __declspec(property(get=__get_certificates, put=__set_certificates))  certificates;

constexpr void __set_certificates(System::Collections::IList value) ;

constexpr System::Collections::IList __get_certificates() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_Encodings))  Encodings;

 System::Collections::IList __declspec(property(get=get_Certificates))  Certificates;


// Methods

/// @brief Method SortCerts addr 0x1063f04 size 0xd94 virtual false final false
static System::Collections::IList SortCerts(System::Collections::IList certs) ;

// Ctor Parameters [CppParam { name: "certificates", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit PkixCertPath(System::Collections::ICollection certificates) ;

/// @brief Method .ctor addr 0x105f1e8 size 0xac virtual false final false
 void _ctor(System::Collections::ICollection certificates) ;

// Ctor Parameters [CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit PkixCertPath(System::IO::Stream inStream) ;

/// @brief Method .ctor addr 0x1064c98 size 0x58 virtual false final false
 void _ctor(System::IO::Stream inStream) ;

// Ctor Parameters [CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::StringW", modifiers: "", def_value: None }]
explicit PkixCertPath(System::IO::Stream inStream, ::StringW encoding) ;

/// @brief Method .ctor addr 0x1064cf0 size 0x86c virtual false final false
 void _ctor(System::IO::Stream inStream, ::StringW encoding) ;

/// @brief Method get_Encodings addr 0x106555c size 0x90 virtual true final false
 System::Collections::IEnumerable get_Encodings() ;

/// @brief Method Equals addr 0x10655ec size 0x41c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1065a08 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetEncoded addr 0x1065a30 size 0x344 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0x1065d74 size 0x88c virtual true final false
 ::ArrayW<uint8_t> GetEncoded(::StringW encoding) ;

/// @brief Method get_Certificates addr 0x106681c size 0xc virtual true final false
 System::Collections::IList get_Certificates() ;

/// @brief Method ToAsn1Object addr 0x1066600 size 0x100 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method ToDerEncoded addr 0x1066700 size 0x11c virtual false final false
 ::ArrayW<uint8_t> ToDerEncoded(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPath);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPath, "Org.BouncyCastle.Pkix", "PkixCertPath");
