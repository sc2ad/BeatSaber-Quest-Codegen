#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class DeclarationOfMajority;
}
// Type: ::Choice
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(185))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.DeclarationOfMajority::Choice
struct CORDL_TYPE Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice(Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice const&) = default;
                    constexpr Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice(Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice&&) = default;
                    constexpr Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice& operator=(Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice& operator=(Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice_Unwrapped : int32_t {
__NotYoungerThan = 0,
__FullAgeAtCountry = 1,
__DateOfBirth = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotYoungerThan offset 0
static Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice const NotYoungerThan;

/// @brief Field FullAgeAtCountry offset 0
static Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice const FullAgeAtCountry;

/// @brief Field DateOfBirth offset 0
static Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice const DateOfBirth;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::DeclarationOfMajority
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(186))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.DeclarationOfMajority
class CORDL_TYPE DeclarationOfMajority : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using Choice = Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DeclarationOfMajority() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: " const&", def_value: None }]
constexpr DeclarationOfMajority(DeclarationOfMajority const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "&&", def_value: None }]
constexpr DeclarationOfMajority(DeclarationOfMajority&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeclarationOfMajority(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DeclarationOfMajority& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeclarationOfMajority& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeclarationOfMajority& operator=(DeclarationOfMajority&& o) noexcept = default;
  constexpr DeclarationOfMajority& operator=(DeclarationOfMajority const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1TaggedObject __declspec(property(get=__get_declaration, put=__set_declaration))  declaration;

constexpr void __set_declaration(Org::BouncyCastle::Asn1::Asn1TaggedObject value) ;

constexpr Org::BouncyCastle::Asn1::Asn1TaggedObject __get_declaration() const;


// Properties

 Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice __declspec(property(get=get_Type))  Type;

 int32_t __declspec(property(get=get_NotYoungerThan))  NotYoungerThan;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_FullAgeAtCountry))  FullAgeAtCountry;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_DateOfBirth))  DateOfBirth;


// Methods

// Ctor Parameters [CppParam { name: "notYoungerThan", ty: "int32_t", modifiers: "", def_value: None }]
explicit DeclarationOfMajority(int32_t notYoungerThan) ;

/// @brief Method .ctor addr 0xee9d08 size 0xb4 virtual false final false
 void _ctor(int32_t notYoungerThan) ;

// Ctor Parameters [CppParam { name: "fullAge", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "country", ty: "::StringW", modifiers: "", def_value: None }]
explicit DeclarationOfMajority(bool fullAge, ::StringW country) ;

/// @brief Method .ctor addr 0xee9dbc size 0x220 virtual false final false
 void _ctor(bool fullAge, ::StringW country) ;

// Ctor Parameters [CppParam { name: "dateOfBirth", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }]
explicit DeclarationOfMajority(Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth) ;

/// @brief Method .ctor addr 0xee9fdc size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth) ;

/// @brief Method GetInstance addr 0xeea060 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "o", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit DeclarationOfMajority(Org::BouncyCastle::Asn1::Asn1TaggedObject o) ;

/// @brief Method .ctor addr 0xeea1e8 size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject o) ;

/// @brief Method ToAsn1Object addr 0xeea2a8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_Type addr 0xeea2b0 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice get_Type() ;

/// @brief Method get_NotYoungerThan addr 0xeea2cc size 0x40 virtual true final false
 int32_t get_NotYoungerThan() ;

/// @brief Method get_FullAgeAtCountry addr 0xeea30c size 0x38 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_FullAgeAtCountry() ;

/// @brief Method get_DateOfBirth addr 0xeea344 size 0x38 virtual true final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_DateOfBirth() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority/Choice");
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority");
