#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
// Type: Org.BouncyCastle.Asn1.Tsp::Accuracy
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(314))
// CS Name: Org.BouncyCastle.Asn1.Tsp.Accuracy
class CORDL_TYPE Accuracy : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Accuracy() = default;

// Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: " const&", def_value: None }]
constexpr Accuracy(Accuracy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: "&&", def_value: None }]
constexpr Accuracy(Accuracy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Accuracy(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Accuracy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Accuracy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Accuracy& operator=(Accuracy&& o) noexcept = default;
  constexpr Accuracy& operator=(Accuracy const& o) noexcept = default;
                


// Fields

/// @brief Field MinMillis offset 0
static constexpr int32_t  MinMillis{1};

/// @brief Field MaxMillis offset 0
static constexpr int32_t  MaxMillis{999};

/// @brief Field MinMicros offset 0
static constexpr int32_t  MinMicros{1};

/// @brief Field MaxMicros offset 0
static constexpr int32_t  MaxMicros{999};

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_seconds, put=__set_seconds))  seconds;

constexpr void __set_seconds(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_seconds() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_millis, put=__set_millis))  millis;

constexpr void __set_millis(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_millis() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_micros, put=__set_micros))  micros;

constexpr void __set_micros(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_micros() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Seconds))  Seconds;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Millis))  Millis;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Micros))  Micros;


// Methods

static Org::BouncyCastle::Asn1::Tsp::Accuracy New_ctor(Org::BouncyCastle::Asn1::DerInteger seconds, Org::BouncyCastle::Asn1::DerInteger millis, Org::BouncyCastle::Asn1::DerInteger micros) ;

/// @brief Method .ctor addr 0xfeb760 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger seconds, Org::BouncyCastle::Asn1::DerInteger millis, Org::BouncyCastle::Asn1::DerInteger micros) ;

static Org::BouncyCastle::Asn1::Tsp::Accuracy New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfeb844 size 0x310 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xfebb54 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Tsp::Accuracy GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Seconds addr 0xfebbf8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Seconds() ;

/// @brief Method get_Millis addr 0xfebc00 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Millis() ;

/// @brief Method get_Micros addr 0xfebc08 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Micros() ;

/// @brief Method ToAsn1Object addr 0xfebc10 size 0x138 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Tsp::Accuracy);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Tsp::Accuracy, "Org.BouncyCastle.Asn1.Tsp", "Accuracy");
