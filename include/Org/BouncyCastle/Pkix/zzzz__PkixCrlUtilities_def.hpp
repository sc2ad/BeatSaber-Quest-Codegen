#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
// Type: Org.BouncyCastle.Pkix::PkixCrlUtilities
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1725))
// CS Name: Org.BouncyCastle.Pkix.PkixCrlUtilities
class CORDL_TYPE PkixCrlUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixCrlUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCrlUtilities", modifiers: " const&", def_value: None }]
constexpr PkixCrlUtilities(PkixCrlUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCrlUtilities", modifiers: "&&", def_value: None }]
constexpr PkixCrlUtilities(PkixCrlUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCrlUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCrlUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCrlUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCrlUtilities& operator=(PkixCrlUtilities&& o) noexcept = default;
  constexpr PkixCrlUtilities& operator=(PkixCrlUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method FindCrls addr 0x1078ed4 size 0x764 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlselect, Org::BouncyCastle::Pkix::PkixParameters paramsPkix, System::DateTime currentDate) ;

/// @brief Method FindCrls addr 0x1079bb0 size 0x1d4 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlselect, Org::BouncyCastle::Pkix::PkixParameters paramsPkix) ;

/// @brief Method FindCrls addr 0x1079638 size 0x578 virtual false final false
 System::Collections::ICollection FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlSelect, System::Collections::IList crlStores) ;

// Ctor Parameters []
explicit PkixCrlUtilities() ;

/// @brief Method .ctor addr 0x1078ec4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCrlUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCrlUtilities, "Org.BouncyCastle.Pkix", "PkixCrlUtilities");
