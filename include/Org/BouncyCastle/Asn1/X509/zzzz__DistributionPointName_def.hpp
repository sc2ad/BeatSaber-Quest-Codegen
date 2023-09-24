#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
// Type: Org.BouncyCastle.Asn1.X509::DistributionPointName
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(358))
// CS Name: Org.BouncyCastle.Asn1.X509.DistributionPointName
class CORDL_TYPE DistributionPointName : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DistributionPointName() = default;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: " const&", def_value: None }]
constexpr DistributionPointName(DistributionPointName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "&&", def_value: None }]
constexpr DistributionPointName(DistributionPointName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DistributionPointName(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DistributionPointName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DistributionPointName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DistributionPointName& operator=(DistributionPointName&& o) noexcept = default;
  constexpr DistributionPointName& operator=(DistributionPointName const& o) noexcept = default;
                


// Fields

/// @brief Field FullName offset 0
static constexpr int32_t  FullName{0};

/// @brief Field NameRelativeToCrlIssuer offset 0
static constexpr int32_t  NameRelativeToCrlIssuer{1};

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_name() const;

 int32_t __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(int32_t value) ;

constexpr int32_t __get_type() const;


// Properties

 int32_t __declspec(property(get=get_PointType))  PointType;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method GetInstance addr 0x1101df0 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::DistributionPointName GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x1102290 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::DistributionPointName GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::DistributionPointName New_ctor(int32_t type, Org::BouncyCastle::Asn1::Asn1Encodable name) ;

/// @brief Method .ctor addr 0x1102470 size 0x30 virtual false final false
 void _ctor(int32_t type, Org::BouncyCastle::Asn1::Asn1Encodable name) ;

static Org::BouncyCastle::Asn1::X509::DistributionPointName New_ctor(Org::BouncyCastle::Asn1::X509::GeneralNames name) ;

/// @brief Method .ctor addr 0x11024a0 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralNames name) ;

/// @brief Method get_PointType addr 0x11024cc size 0x8 virtual false final false
 int32_t get_PointType() ;

/// @brief Method get_Name addr 0x11024d4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Name() ;

static Org::BouncyCastle::Asn1::X509::DistributionPointName New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject obj) ;

/// @brief Method .ctor addr 0x1102418 size 0x58 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject obj) ;

/// @brief Method ToAsn1Object addr 0x11024dc size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x1102550 size 0x168 virtual true final false
 ::StringW ToString() ;

/// @brief Method appendObject addr 0x11026b8 size 0xf8 virtual false final false
 void appendObject(System::Text::StringBuilder buf, ::StringW sep, ::StringW name, ::StringW val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::DistributionPointName);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DistributionPointName, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");
