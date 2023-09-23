#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeUtilities;
}
// Type: Org.BouncyCastle.Utilities.Date::DateTimeUtilities
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1792))
// CS Name: Org.BouncyCastle.Utilities.Date.DateTimeUtilities
class CORDL_TYPE DateTimeUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: " const&", def_value: None }]
constexpr DateTimeUtilities(DateTimeUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: "&&", def_value: None }]
constexpr DateTimeUtilities(DateTimeUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeUtilities& operator=(DateTimeUtilities&& o) noexcept = default;
  constexpr DateTimeUtilities& operator=(DateTimeUtilities const& o) noexcept = default;
                


// Fields

static System::DateTime __declspec(property(get=__get_UnixEpoch, put=__set_UnixEpoch))  UnixEpoch;

static void __set_UnixEpoch(System::DateTime value) ;

static System::DateTime __get_UnixEpoch() ;


// Methods

// Ctor Parameters []
explicit DateTimeUtilities() ;

/// @brief Method .ctor addr 0x10cf590 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method DateTimeToUnixMs addr 0x10cf598 size 0x15c virtual false final false
static int64_t DateTimeToUnixMs(System::DateTime dateTime) ;

/// @brief Method UnixMsToDateTime addr 0x10cf6f4 size 0x94 virtual false final false
static System::DateTime UnixMsToDateTime(int64_t unixMs) ;

/// @brief Method CurrentUnixMs addr 0x10cf788 size 0x84 virtual false final false
static int64_t CurrentUnixMs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Date
NEED_NO_BOX(Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Date::DateTimeUtilities, "Org.BouncyCastle.Utilities.Date", "DateTimeUtilities");
