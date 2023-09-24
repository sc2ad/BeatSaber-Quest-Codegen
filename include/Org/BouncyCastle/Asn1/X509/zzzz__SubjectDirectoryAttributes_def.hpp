#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectDirectoryAttributes;
}
// Type: Org.BouncyCastle.Asn1.X509::SubjectDirectoryAttributes
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(382))
// CS Name: Org.BouncyCastle.Asn1.X509.SubjectDirectoryAttributes
class CORDL_TYPE SubjectDirectoryAttributes : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubjectDirectoryAttributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: " const&", def_value: None }]
constexpr SubjectDirectoryAttributes(SubjectDirectoryAttributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: "&&", def_value: None }]
constexpr SubjectDirectoryAttributes(SubjectDirectoryAttributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubjectDirectoryAttributes(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SubjectDirectoryAttributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubjectDirectoryAttributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubjectDirectoryAttributes& operator=(SubjectDirectoryAttributes&& o) noexcept = default;
  constexpr SubjectDirectoryAttributes& operator=(SubjectDirectoryAttributes const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(System::Collections::IList value) ;

constexpr System::Collections::IList __get_attributes() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_Attributes))  Attributes;


// Methods

/// @brief Method GetInstance addr 0x110c4dc size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110c664 size 0x360 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes New_ctor(System::Collections::ArrayList attributes) ;

/// @brief Method .ctor addr 0x110c9c4 size 0x4 virtual false final false
 void _ctor(System::Collections::ArrayList attributes) ;

static Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes New_ctor(System::Collections::IList attributes) ;

/// @brief Method .ctor addr 0x110c9c8 size 0x78 virtual false final false
 void _ctor(System::Collections::IList attributes) ;

/// @brief Method ToAsn1Object addr 0x110ca40 size 0x2c8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_Attributes addr 0x110cd08 size 0x68 virtual false final false
 System::Collections::IEnumerable get_Attributes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes, "Org.BouncyCastle.Asn1.X509", "SubjectDirectoryAttributes");
