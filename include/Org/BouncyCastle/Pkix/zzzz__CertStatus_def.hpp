#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
// Type: Org.BouncyCastle.Pkix::CertStatus
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1709))
// CS Name: Org.BouncyCastle.Pkix.CertStatus
class CORDL_TYPE CertStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: " const&", def_value: None }]
constexpr CertStatus(CertStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
constexpr CertStatus(CertStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertStatus& operator=(CertStatus&& o) noexcept = default;
  constexpr CertStatus& operator=(CertStatus const& o) noexcept = default;
                


// Fields

/// @brief Field Unrevoked offset 0
static constexpr int32_t  Unrevoked{11};

/// @brief Field Undetermined offset 0
static constexpr int32_t  Undetermined{12};

 int32_t __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(int32_t value) ;

constexpr int32_t __get_status() const;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_revocationDate, put=__set_revocationDate))  revocationDate;

constexpr void __set_revocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject __get_revocationDate() const;


// Properties

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_RevocationDate, put=set_RevocationDate))  RevocationDate;

 int32_t __declspec(property(get=get_Status, put=set_Status))  Status;


// Methods

/// @brief Method get_RevocationDate addr 0x105c584 size 0x8 virtual false final false
 ::Org::BouncyCastle::Utilities::Date::DateTimeObject get_RevocationDate() ;

/// @brief Method set_RevocationDate addr 0x105c58c size 0x8 virtual false final false
 void set_RevocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_Status addr 0x105c594 size 0x8 virtual false final false
 int32_t get_Status() ;

/// @brief Method set_Status addr 0x105c59c size 0x8 virtual false final false
 void set_Status(int32_t value) ;

// Ctor Parameters []
explicit CertStatus() ;

/// @brief Method .ctor addr 0x105c5a4 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::CertStatus, "Org.BouncyCastle.Pkix", "CertStatus");
