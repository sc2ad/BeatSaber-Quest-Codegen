#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampResponseGenerator;
}
// Type: ::FailInfo
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1767))
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponseGenerator::FailInfo
class CORDL_TYPE Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo : public Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo(Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo(Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo& operator=(Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo&& o) noexcept = default;
  constexpr Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo& operator=(Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "failInfoValue", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo(int32_t failInfoValue) ;

/// @brief Method .ctor addr 0x10c5258 size 0x68 virtual false final false
 void _ctor(int32_t failInfoValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
// Type: Org.BouncyCastle.Tsp::TimeStampResponseGenerator
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1768))
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponseGenerator
class CORDL_TYPE TimeStampResponseGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FailInfo = Org::BouncyCastle::Tsp::Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TimeStampResponseGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: " const&", def_value: None }]
constexpr TimeStampResponseGenerator(TimeStampResponseGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: "&&", def_value: None }]
constexpr TimeStampResponseGenerator(TimeStampResponseGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampResponseGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampResponseGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampResponseGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampResponseGenerator& operator=(TimeStampResponseGenerator&& o) noexcept = default;
  constexpr TimeStampResponseGenerator& operator=(TimeStampResponseGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiStatus __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::Cmp::PkiStatus value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatus __get_status() const;

 Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_statusStrings, put=__set_statusStrings))  statusStrings;

constexpr void __set_statusStrings(Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr Org::BouncyCastle::Asn1::Asn1EncodableVector __get_statusStrings() const;

 int32_t __declspec(property(get=__get_failInfo, put=__set_failInfo))  failInfo;

constexpr void __set_failInfo(int32_t value) ;

constexpr int32_t __get_failInfo() const;

 Org::BouncyCastle::Tsp::TimeStampTokenGenerator __declspec(property(get=__get_tokenGenerator, put=__set_tokenGenerator))  tokenGenerator;

constexpr void __set_tokenGenerator(Org::BouncyCastle::Tsp::TimeStampTokenGenerator value) ;

constexpr Org::BouncyCastle::Tsp::TimeStampTokenGenerator __get_tokenGenerator() const;

 System::Collections::IList __declspec(property(get=__get_acceptedAlgorithms, put=__set_acceptedAlgorithms))  acceptedAlgorithms;

constexpr void __set_acceptedAlgorithms(System::Collections::IList value) ;

constexpr System::Collections::IList __get_acceptedAlgorithms() const;

 System::Collections::IList __declspec(property(get=__get_acceptedPolicies, put=__set_acceptedPolicies))  acceptedPolicies;

constexpr void __set_acceptedPolicies(System::Collections::IList value) ;

constexpr System::Collections::IList __get_acceptedPolicies() const;

 System::Collections::IList __declspec(property(get=__get_acceptedExtensions, put=__set_acceptedExtensions))  acceptedExtensions;

constexpr void __set_acceptedExtensions(System::Collections::IList value) ;

constexpr System::Collections::IList __get_acceptedExtensions() const;


// Methods

// Ctor Parameters [CppParam { name: "tokenGenerator", ty: "Org::BouncyCastle::Tsp::TimeStampTokenGenerator", modifiers: "", def_value: None }, CppParam { name: "acceptedAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit TimeStampResponseGenerator(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms) ;

/// @brief Method .ctor addr 0x10c4f08 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms) ;

// Ctor Parameters [CppParam { name: "tokenGenerator", ty: "Org::BouncyCastle::Tsp::TimeStampTokenGenerator", modifiers: "", def_value: None }, CppParam { name: "acceptedAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "acceptedPolicy", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit TimeStampResponseGenerator(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms, System::Collections::IList acceptedPolicy) ;

/// @brief Method .ctor addr 0x10c4fa8 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms, System::Collections::IList acceptedPolicy) ;

// Ctor Parameters [CppParam { name: "tokenGenerator", ty: "Org::BouncyCastle::Tsp::TimeStampTokenGenerator", modifiers: "", def_value: None }, CppParam { name: "acceptedAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "acceptedPolicies", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "acceptedExtensions", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit TimeStampResponseGenerator(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms, System::Collections::IList acceptedPolicies, System::Collections::IList acceptedExtensions) ;

/// @brief Method .ctor addr 0x10c4f14 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Tsp::TimeStampTokenGenerator tokenGenerator, System::Collections::IList acceptedAlgorithms, System::Collections::IList acceptedPolicies, System::Collections::IList acceptedExtensions) ;

/// @brief Method AddStatusString addr 0x10c4fb0 size 0x80 virtual false final false
 void AddStatusString(::StringW statusString) ;

/// @brief Method SetFailInfoField addr 0x10c5030 size 0x10 virtual false final false
 void SetFailInfoField(int32_t field) ;

/// @brief Method GetPkiStatusInfo addr 0x10c5040 size 0x218 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo GetPkiStatusInfo() ;

/// @brief Method Generate addr 0x10c52c0 size 0x8c virtual false final false
 Org::BouncyCastle::Tsp::TimeStampResponse Generate(Org::BouncyCastle::Tsp::TimeStampRequest request, Org::BouncyCastle::Math::BigInteger serialNumber, System::DateTime genTime) ;

/// @brief Method Generate addr 0x10c5374 size 0x430 virtual false final false
 Org::BouncyCastle::Tsp::TimeStampResponse Generate(Org::BouncyCastle::Tsp::TimeStampRequest request, Org::BouncyCastle::Math::BigInteger serialNumber, Org::BouncyCastle::Utilities::Date::DateTimeObject genTime) ;

/// @brief Method GenerateFailResponse addr 0x10c5e4c size 0x19c virtual false final false
 Org::BouncyCastle::Tsp::TimeStampResponse GenerateFailResponse(Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField, ::StringW statusString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::Org__BouncyCastle__Tsp__TimeStampResponseGenerator__FailInfo, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator/FailInfo");
NEED_NO_BOX(Org::BouncyCastle::Tsp::TimeStampResponseGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TimeStampResponseGenerator, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator");
