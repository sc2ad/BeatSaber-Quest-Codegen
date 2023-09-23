#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
// Type: Org.BouncyCastle.Tsp::GenTimeAccuracy
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1763))
// CS Name: Org.BouncyCastle.Tsp.GenTimeAccuracy
class CORDL_TYPE GenTimeAccuracy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GenTimeAccuracy() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: " const&", def_value: None }]
constexpr GenTimeAccuracy(GenTimeAccuracy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: "&&", def_value: None }]
constexpr GenTimeAccuracy(GenTimeAccuracy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenTimeAccuracy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenTimeAccuracy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenTimeAccuracy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenTimeAccuracy& operator=(GenTimeAccuracy&& o) noexcept = default;
  constexpr GenTimeAccuracy& operator=(GenTimeAccuracy const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Tsp::Accuracy __declspec(property(get=__get_accuracy, put=__set_accuracy))  accuracy;

constexpr void __set_accuracy(Org::BouncyCastle::Asn1::Tsp::Accuracy value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::Accuracy __get_accuracy() const;


// Properties

 int32_t __declspec(property(get=get_Seconds))  Seconds;

 int32_t __declspec(property(get=get_Millis))  Millis;

 int32_t __declspec(property(get=get_Micros))  Micros;


// Methods

// Ctor Parameters [CppParam { name: "accuracy", ty: "Org::BouncyCastle::Asn1::Tsp::Accuracy", modifiers: "", def_value: None }]
explicit GenTimeAccuracy(Org::BouncyCastle::Asn1::Tsp::Accuracy accuracy) ;

/// @brief Method .ctor addr 0x10c2db0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Tsp::Accuracy accuracy) ;

/// @brief Method get_Seconds addr 0x10c2dd8 size 0x2c virtual false final false
 int32_t get_Seconds() ;

/// @brief Method get_Millis addr 0x10c2e1c size 0x2c virtual false final false
 int32_t get_Millis() ;

/// @brief Method get_Micros addr 0x10c2e48 size 0x2c virtual false final false
 int32_t get_Micros() ;

/// @brief Method GetTimeComponent addr 0x10c2e04 size 0x18 virtual false final false
 int32_t GetTimeComponent(Org::BouncyCastle::Asn1::DerInteger time) ;

/// @brief Method ToString addr 0x10c2e74 size 0x1bc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::GenTimeAccuracy);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::GenTimeAccuracy, "Org.BouncyCastle.Tsp", "GenTimeAccuracy");
