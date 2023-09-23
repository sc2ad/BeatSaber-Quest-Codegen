#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHStandardGroups;
}
// Type: Org.BouncyCastle.Crypto.Agreement::DHStandardGroups
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(735))
// CS Name: Org.BouncyCastle.Crypto.Agreement.DHStandardGroups
class CORDL_TYPE DHStandardGroups : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DHStandardGroups() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: " const&", def_value: None }]
constexpr DHStandardGroups(DHStandardGroups const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: "&&", def_value: None }]
constexpr DHStandardGroups(DHStandardGroups&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHStandardGroups(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHStandardGroups& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHStandardGroups& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHStandardGroups& operator=(DHStandardGroups&& o) noexcept = default;
  constexpr DHStandardGroups& operator=(DHStandardGroups const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Two() ;

static ::StringW __declspec(property(get=__get_rfc2409_768_p, put=__set_rfc2409_768_p))  rfc2409_768_p;

static void __set_rfc2409_768_p(::StringW value) ;

static ::StringW __get_rfc2409_768_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc2409_768, put=__set_rfc2409_768))  rfc2409_768;

static void __set_rfc2409_768(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc2409_768() ;

static ::StringW __declspec(property(get=__get_rfc2409_1024_p, put=__set_rfc2409_1024_p))  rfc2409_1024_p;

static void __set_rfc2409_1024_p(::StringW value) ;

static ::StringW __get_rfc2409_1024_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc2409_1024, put=__set_rfc2409_1024))  rfc2409_1024;

static void __set_rfc2409_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc2409_1024() ;

static ::StringW __declspec(property(get=__get_rfc3526_1536_p, put=__set_rfc3526_1536_p))  rfc3526_1536_p;

static void __set_rfc3526_1536_p(::StringW value) ;

static ::StringW __get_rfc3526_1536_p() ;

static int32_t __declspec(property(get=__get_rfc3526_1536_l, put=__set_rfc3526_1536_l))  rfc3526_1536_l;

static void __set_rfc3526_1536_l(int32_t value) ;

static int32_t __get_rfc3526_1536_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_1536, put=__set_rfc3526_1536))  rfc3526_1536;

static void __set_rfc3526_1536(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_1536() ;

static ::StringW __declspec(property(get=__get_rfc3526_2048_p, put=__set_rfc3526_2048_p))  rfc3526_2048_p;

static void __set_rfc3526_2048_p(::StringW value) ;

static ::StringW __get_rfc3526_2048_p() ;

static int32_t __declspec(property(get=__get_rfc3526_2048_l, put=__set_rfc3526_2048_l))  rfc3526_2048_l;

static void __set_rfc3526_2048_l(int32_t value) ;

static int32_t __get_rfc3526_2048_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_2048, put=__set_rfc3526_2048))  rfc3526_2048;

static void __set_rfc3526_2048(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_2048() ;

static ::StringW __declspec(property(get=__get_rfc3526_3072_p, put=__set_rfc3526_3072_p))  rfc3526_3072_p;

static void __set_rfc3526_3072_p(::StringW value) ;

static ::StringW __get_rfc3526_3072_p() ;

static int32_t __declspec(property(get=__get_rfc3526_3072_l, put=__set_rfc3526_3072_l))  rfc3526_3072_l;

static void __set_rfc3526_3072_l(int32_t value) ;

static int32_t __get_rfc3526_3072_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_3072, put=__set_rfc3526_3072))  rfc3526_3072;

static void __set_rfc3526_3072(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_3072() ;

static ::StringW __declspec(property(get=__get_rfc3526_4096_p, put=__set_rfc3526_4096_p))  rfc3526_4096_p;

static void __set_rfc3526_4096_p(::StringW value) ;

static ::StringW __get_rfc3526_4096_p() ;

static int32_t __declspec(property(get=__get_rfc3526_4096_l, put=__set_rfc3526_4096_l))  rfc3526_4096_l;

static void __set_rfc3526_4096_l(int32_t value) ;

static int32_t __get_rfc3526_4096_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_4096, put=__set_rfc3526_4096))  rfc3526_4096;

static void __set_rfc3526_4096(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_4096() ;

static ::StringW __declspec(property(get=__get_rfc3526_6144_p, put=__set_rfc3526_6144_p))  rfc3526_6144_p;

static void __set_rfc3526_6144_p(::StringW value) ;

static ::StringW __get_rfc3526_6144_p() ;

static int32_t __declspec(property(get=__get_rfc3526_6144_l, put=__set_rfc3526_6144_l))  rfc3526_6144_l;

static void __set_rfc3526_6144_l(int32_t value) ;

static int32_t __get_rfc3526_6144_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_6144, put=__set_rfc3526_6144))  rfc3526_6144;

static void __set_rfc3526_6144(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_6144() ;

static ::StringW __declspec(property(get=__get_rfc3526_8192_p, put=__set_rfc3526_8192_p))  rfc3526_8192_p;

static void __set_rfc3526_8192_p(::StringW value) ;

static ::StringW __get_rfc3526_8192_p() ;

static int32_t __declspec(property(get=__get_rfc3526_8192_l, put=__set_rfc3526_8192_l))  rfc3526_8192_l;

static void __set_rfc3526_8192_l(int32_t value) ;

static int32_t __get_rfc3526_8192_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc3526_8192, put=__set_rfc3526_8192))  rfc3526_8192;

static void __set_rfc3526_8192(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc3526_8192() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc4306_768, put=__set_rfc4306_768))  rfc4306_768;

static void __set_rfc4306_768(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc4306_768() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc4306_1024, put=__set_rfc4306_1024))  rfc4306_1024;

static void __set_rfc4306_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc4306_1024() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc5996_768, put=__set_rfc5996_768))  rfc5996_768;

static void __set_rfc5996_768(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc5996_768() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc5996_1024, put=__set_rfc5996_1024))  rfc5996_1024;

static void __set_rfc5996_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc5996_1024() ;

static ::StringW __declspec(property(get=__get_rfc7919_ffdhe2048_p, put=__set_rfc7919_ffdhe2048_p))  rfc7919_ffdhe2048_p;

static void __set_rfc7919_ffdhe2048_p(::StringW value) ;

static ::StringW __get_rfc7919_ffdhe2048_p() ;

static int32_t __declspec(property(get=__get_rfc7919_ffdhe2048_l, put=__set_rfc7919_ffdhe2048_l))  rfc7919_ffdhe2048_l;

static void __set_rfc7919_ffdhe2048_l(int32_t value) ;

static int32_t __get_rfc7919_ffdhe2048_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc7919_ffdhe2048, put=__set_rfc7919_ffdhe2048))  rfc7919_ffdhe2048;

static void __set_rfc7919_ffdhe2048(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc7919_ffdhe2048() ;

static ::StringW __declspec(property(get=__get_rfc7919_ffdhe3072_p, put=__set_rfc7919_ffdhe3072_p))  rfc7919_ffdhe3072_p;

static void __set_rfc7919_ffdhe3072_p(::StringW value) ;

static ::StringW __get_rfc7919_ffdhe3072_p() ;

static int32_t __declspec(property(get=__get_rfc7919_ffdhe3072_l, put=__set_rfc7919_ffdhe3072_l))  rfc7919_ffdhe3072_l;

static void __set_rfc7919_ffdhe3072_l(int32_t value) ;

static int32_t __get_rfc7919_ffdhe3072_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc7919_ffdhe3072, put=__set_rfc7919_ffdhe3072))  rfc7919_ffdhe3072;

static void __set_rfc7919_ffdhe3072(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc7919_ffdhe3072() ;

static ::StringW __declspec(property(get=__get_rfc7919_ffdhe4096_p, put=__set_rfc7919_ffdhe4096_p))  rfc7919_ffdhe4096_p;

static void __set_rfc7919_ffdhe4096_p(::StringW value) ;

static ::StringW __get_rfc7919_ffdhe4096_p() ;

static int32_t __declspec(property(get=__get_rfc7919_ffdhe4096_l, put=__set_rfc7919_ffdhe4096_l))  rfc7919_ffdhe4096_l;

static void __set_rfc7919_ffdhe4096_l(int32_t value) ;

static int32_t __get_rfc7919_ffdhe4096_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc7919_ffdhe4096, put=__set_rfc7919_ffdhe4096))  rfc7919_ffdhe4096;

static void __set_rfc7919_ffdhe4096(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc7919_ffdhe4096() ;

static ::StringW __declspec(property(get=__get_rfc7919_ffdhe6144_p, put=__set_rfc7919_ffdhe6144_p))  rfc7919_ffdhe6144_p;

static void __set_rfc7919_ffdhe6144_p(::StringW value) ;

static ::StringW __get_rfc7919_ffdhe6144_p() ;

static int32_t __declspec(property(get=__get_rfc7919_ffdhe6144_l, put=__set_rfc7919_ffdhe6144_l))  rfc7919_ffdhe6144_l;

static void __set_rfc7919_ffdhe6144_l(int32_t value) ;

static int32_t __get_rfc7919_ffdhe6144_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc7919_ffdhe6144, put=__set_rfc7919_ffdhe6144))  rfc7919_ffdhe6144;

static void __set_rfc7919_ffdhe6144(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc7919_ffdhe6144() ;

static ::StringW __declspec(property(get=__get_rfc7919_ffdhe8192_p, put=__set_rfc7919_ffdhe8192_p))  rfc7919_ffdhe8192_p;

static void __set_rfc7919_ffdhe8192_p(::StringW value) ;

static ::StringW __get_rfc7919_ffdhe8192_p() ;

static int32_t __declspec(property(get=__get_rfc7919_ffdhe8192_l, put=__set_rfc7919_ffdhe8192_l))  rfc7919_ffdhe8192_l;

static void __set_rfc7919_ffdhe8192_l(int32_t value) ;

static int32_t __get_rfc7919_ffdhe8192_l() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_rfc7919_ffdhe8192, put=__set_rfc7919_ffdhe8192))  rfc7919_ffdhe8192;

static void __set_rfc7919_ffdhe8192(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_rfc7919_ffdhe8192() ;


// Methods

/// @brief Method FromHex addr 0x118eb9c size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger FromHex(::StringW hex) ;

/// @brief Method FromPG addr 0x118ec3c size 0xb4 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters FromPG(::StringW hexP, ::StringW hexG) ;

/// @brief Method SafePrimeGen2 addr 0x118ecf0 size 0x58 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters SafePrimeGen2(::StringW hexP) ;

/// @brief Method SafePrimeGen2 addr 0x118ed48 size 0xd0 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters SafePrimeGen2(::StringW hexP, int32_t l) ;

// Ctor Parameters []
explicit DHStandardGroups() ;

/// @brief Method .ctor addr 0x118f2ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups, "Org.BouncyCastle.Crypto.Agreement", "DHStandardGroups");
