#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
struct ____Org__BouncyCastle__Asn1__X509__Target__Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
// Type: ::Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(385))
// CS Name: Org.BouncyCastle.Asn1.X509.Target::Choice
struct CORDL_TYPE ____Org__BouncyCastle__Asn1__X509__Target__Choice : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__X509__Target__Choice(int32_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__Asn1__X509__Target__Choice(____Org__BouncyCastle__Asn1__X509__Target__Choice const&) = default;
                    constexpr ____Org__BouncyCastle__Asn1__X509__Target__Choice(____Org__BouncyCastle__Asn1__X509__Target__Choice&&) = default;
                    constexpr ____Org__BouncyCastle__Asn1__X509__Target__Choice& operator=(____Org__BouncyCastle__Asn1__X509__Target__Choice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__Asn1__X509__Target__Choice& operator=(____Org__BouncyCastle__Asn1__X509__Target__Choice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Asn1__X509__Target__Choice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__Asn1__X509__Target__Choice_Unwrapped : int32_t {
__Name = 0,
__Group = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__Asn1__X509__Target__Choice_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__Asn1__X509__Target__Choice_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Name offset 0
static ::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice const Name;

/// @brief Field Group offset 0
static ::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice const Group;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::Target
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(386))
// CS Name: Org.BouncyCastle.Asn1.X509.Target
class CORDL_TYPE Target : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using Choice = ::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Target() = default;

// Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: " const&", def_value: None }]
constexpr Target(Target const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "&&", def_value: None }]
constexpr Target(Target&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Target(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Target& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Target& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Target& operator=(Target&& o) noexcept = default;
  constexpr Target& operator=(Target const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_targetName, put=__set_targetName))  targetName;

constexpr void __set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_targetName() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_targetGroup, put=__set_targetGroup))  targetGroup;

constexpr void __set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_targetGroup() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_TargetGroup))  TargetGroup;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_TargetName))  TargetName;


// Methods

/// @brief Method GetInstance addr 0x110d924 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::Target GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tagObj", ty: "::Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit Target(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj) ;

/// @brief Method .ctor addr 0x110daac size 0x114 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj) ;

// Ctor Parameters [CppParam { name: "type", ty: "::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit Target(::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method .ctor addr 0x110dbc0 size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method get_TargetGroup addr 0x110dc3c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_TargetGroup() ;

/// @brief Method get_TargetName addr 0x110dc44 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_TargetName() ;

/// @brief Method ToAsn1Object addr 0x110dc4c size 0x94 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::____Org__BouncyCastle__Asn1__X509__Target__Choice, "Org.BouncyCastle.Asn1.X509", "Target/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Target);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Target, "Org.BouncyCastle.Asn1.X509", "Target");
