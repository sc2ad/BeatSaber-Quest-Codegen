#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroups;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroups
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(716))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakePrimeOrderGroups
class CORDL_TYPE JPakePrimeOrderGroups : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JPakePrimeOrderGroups() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: " const&", def_value: None }]
constexpr JPakePrimeOrderGroups(JPakePrimeOrderGroups const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: "&&", def_value: None }]
constexpr JPakePrimeOrderGroups(JPakePrimeOrderGroups&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakePrimeOrderGroups(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakePrimeOrderGroups& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakePrimeOrderGroups& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakePrimeOrderGroups& operator=(JPakePrimeOrderGroups&& o) noexcept = default;
  constexpr JPakePrimeOrderGroups& operator=(JPakePrimeOrderGroups const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __declspec(property(get=__get_SUN_JCE_1024, put=__set_SUN_JCE_1024))  SUN_JCE_1024;

static void __set_SUN_JCE_1024(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup value) ;

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __get_SUN_JCE_1024() ;

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __declspec(property(get=__get_NIST_2048, put=__set_NIST_2048))  NIST_2048;

static void __set_NIST_2048(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup value) ;

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __get_NIST_2048() ;

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __declspec(property(get=__get_NIST_3072, put=__set_NIST_3072))  NIST_3072;

static void __set_NIST_3072(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup value) ;

static ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup __get_NIST_3072() ;


// Methods

// Ctor Parameters []
explicit JPakePrimeOrderGroups() ;

/// @brief Method .ctor addr 0x118a8c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakePrimeOrderGroups");
