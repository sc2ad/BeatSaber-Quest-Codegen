#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Type: Org.BouncyCastle.Asn1.X509::GeneralName
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(361))
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralName
class CORDL_TYPE GeneralName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GeneralName() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: " const&", def_value: None }]
constexpr GeneralName(GeneralName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: "&&", def_value: None }]
constexpr GeneralName(GeneralName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralName(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr GeneralName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralName& operator=(GeneralName&& o) noexcept = default;
  constexpr GeneralName& operator=(GeneralName const& o) noexcept = default;
                


// Fields

/// @brief Field OtherName offset 0
static constexpr int32_t  OtherName{0};

/// @brief Field Rfc822Name offset 0
static constexpr int32_t  Rfc822Name{1};

/// @brief Field DnsName offset 0
static constexpr int32_t  DnsName{2};

/// @brief Field X400Address offset 0
static constexpr int32_t  X400Address{3};

/// @brief Field DirectoryName offset 0
static constexpr int32_t  DirectoryName{4};

/// @brief Field EdiPartyName offset 0
static constexpr int32_t  EdiPartyName{5};

/// @brief Field UniformResourceIdentifier offset 0
static constexpr int32_t  UniformResourceIdentifier{6};

/// @brief Field IPAddress offset 0
static constexpr int32_t  IPAddress{7};

/// @brief Field RegisteredID offset 0
static constexpr int32_t  RegisteredID{8};

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;

 int32_t __declspec(property(get=__get_tag, put=__set_tag))  tag;

constexpr void __set_tag(int32_t value) ;

constexpr int32_t __get_tag() const;


// Properties

 int32_t __declspec(property(get=get_TagNo))  TagNo;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "directoryName", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }]
explicit GeneralName(::Org::BouncyCastle::Asn1::X509::X509Name directoryName) ;

/// @brief Method .ctor addr 0x1103c04 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name directoryName) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }]
explicit GeneralName(::Org::BouncyCastle::Asn1::Asn1Object name, int32_t tag) ;

/// @brief Method .ctor addr 0x1103c34 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Object name, int32_t tag) ;

// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit GeneralName(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable name) ;

/// @brief Method .ctor addr 0x1103c64 size 0x30 virtual false final false
 void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable name) ;

// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit GeneralName(int32_t tag, ::StringW name) ;

/// @brief Method .ctor addr 0x1103c94 size 0x23c virtual false final false
 void _ctor(int32_t tag, ::StringW name) ;

/// @brief Method GetInstance addr 0x110415c size 0x428 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralName GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x11045fc size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralName GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj, bool explicitly) ;

/// @brief Method get_TagNo addr 0x1104614 size 0x8 virtual false final false
 int32_t get_TagNo() ;

/// @brief Method get_Name addr 0x110461c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Name() ;

/// @brief Method ToString addr 0x1104624 size 0x12c virtual true final false
 ::StringW ToString() ;

/// @brief Method toGeneralNameEncoding addr 0x1103f48 size 0x214 virtual false final false
 ::ArrayW<uint8_t> toGeneralNameEncoding(::StringW ip) ;

/// @brief Method parseIPv4Mask addr 0x1104e6c size 0x84 virtual false final false
 void parseIPv4Mask(::StringW mask, ::ArrayW<uint8_t> addr, int32_t offset) ;

/// @brief Method parseIPv4 addr 0x1104d6c size 0x100 virtual false final false
 void parseIPv4(::StringW ip, ::ArrayW<uint8_t> addr, int32_t offset) ;

/// @brief Method parseMask addr 0x1104cb4 size 0xb8 virtual false final false
 ::ArrayW<int32_t> parseMask(::StringW mask) ;

/// @brief Method copyInts addr 0x1104c28 size 0x8c virtual false final false
 void copyInts(::ArrayW<int32_t> parsedIp, ::ArrayW<uint8_t> addr, int32_t offSet) ;

/// @brief Method parseIPv6 addr 0x11047f4 size 0x434 virtual false final false
 ::ArrayW<int32_t> parseIPv6(::StringW ip) ;

/// @brief Method ToAsn1Object addr 0x1104ef0 size 0x78 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralName, "Org.BouncyCastle.Asn1.X509", "GeneralName");
