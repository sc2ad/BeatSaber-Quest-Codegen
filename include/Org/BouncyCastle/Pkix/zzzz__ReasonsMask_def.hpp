#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
// Type: Org.BouncyCastle.Pkix::ReasonsMask
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1729))
// CS Name: Org.BouncyCastle.Pkix.ReasonsMask
class CORDL_TYPE ReasonsMask : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReasonsMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReasonsMask", modifiers: " const&", def_value: None }]
constexpr ReasonsMask(ReasonsMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReasonsMask", modifiers: "&&", def_value: None }]
constexpr ReasonsMask(ReasonsMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReasonsMask(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReasonsMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReasonsMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReasonsMask& operator=(ReasonsMask&& o) noexcept = default;
  constexpr ReasonsMask& operator=(ReasonsMask const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__reasons, put=__set__reasons))  _reasons;

constexpr void __set__reasons(int32_t value) ;

constexpr int32_t __get__reasons() const;

static Org::BouncyCastle::Pkix::ReasonsMask __declspec(property(get=__get_AllReasons, put=__set_AllReasons))  AllReasons;

static void __set_AllReasons(Org::BouncyCastle::Pkix::ReasonsMask value) ;

static Org::BouncyCastle::Pkix::ReasonsMask __get_AllReasons() ;


// Properties

 bool __declspec(property(get=get_IsAllReasons))  IsAllReasons;

 Org::BouncyCastle::Asn1::X509::ReasonFlags __declspec(property(get=get_Reasons))  Reasons;


// Methods

static Org::BouncyCastle::Pkix::ReasonsMask New_ctor(int32_t reasons) ;

/// @brief Method .ctor addr 0x10871a4 size 0x28 virtual false final false
 void _ctor(int32_t reasons) ;

static Org::BouncyCastle::Pkix::ReasonsMask New_ctor() ;

/// @brief Method .ctor addr 0x10871cc size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method AddReasons addr 0x10871e8 size 0x48 virtual false final false
 void AddReasons(Org::BouncyCastle::Pkix::ReasonsMask mask) ;

/// @brief Method get_IsAllReasons addr 0x1087298 size 0x74 virtual false final false
 bool get_IsAllReasons() ;

/// @brief Method Intersect addr 0x108730c size 0xc8 virtual false final false
 Org::BouncyCastle::Pkix::ReasonsMask Intersect(Org::BouncyCastle::Pkix::ReasonsMask mask) ;

/// @brief Method HasNewReasons addr 0x10873d4 size 0x54 virtual false final false
 bool HasNewReasons(Org::BouncyCastle::Pkix::ReasonsMask mask) ;

/// @brief Method get_Reasons addr 0x1087230 size 0x68 virtual false final false
 Org::BouncyCastle::Asn1::X509::ReasonFlags get_Reasons() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::ReasonsMask);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::ReasonsMask, "Org.BouncyCastle.Pkix", "ReasonsMask");
