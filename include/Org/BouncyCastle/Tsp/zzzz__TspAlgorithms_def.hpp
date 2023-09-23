#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspAlgorithms;
}
// Type: Org.BouncyCastle.Tsp::TspAlgorithms
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1773))
// CS Name: Org.BouncyCastle.Tsp.TspAlgorithms
class CORDL_TYPE TspAlgorithms : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TspAlgorithms() = default;

// Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: " const&", def_value: None }]
constexpr TspAlgorithms(TspAlgorithms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: "&&", def_value: None }]
constexpr TspAlgorithms(TspAlgorithms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TspAlgorithms(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TspAlgorithms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TspAlgorithms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TspAlgorithms& operator=(TspAlgorithms&& o) noexcept = default;
  constexpr TspAlgorithms& operator=(TspAlgorithms const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_MD5, put=__set_MD5))  MD5;

static void __set_MD5(::StringW value) ;

static ::StringW __get_MD5() ;

static ::StringW __declspec(property(get=__get_Sha1, put=__set_Sha1))  Sha1;

static void __set_Sha1(::StringW value) ;

static ::StringW __get_Sha1() ;

static ::StringW __declspec(property(get=__get_Sha224, put=__set_Sha224))  Sha224;

static void __set_Sha224(::StringW value) ;

static ::StringW __get_Sha224() ;

static ::StringW __declspec(property(get=__get_Sha256, put=__set_Sha256))  Sha256;

static void __set_Sha256(::StringW value) ;

static ::StringW __get_Sha256() ;

static ::StringW __declspec(property(get=__get_Sha384, put=__set_Sha384))  Sha384;

static void __set_Sha384(::StringW value) ;

static ::StringW __get_Sha384() ;

static ::StringW __declspec(property(get=__get_Sha512, put=__set_Sha512))  Sha512;

static void __set_Sha512(::StringW value) ;

static ::StringW __get_Sha512() ;

static ::StringW __declspec(property(get=__get_RipeMD128, put=__set_RipeMD128))  RipeMD128;

static void __set_RipeMD128(::StringW value) ;

static ::StringW __get_RipeMD128() ;

static ::StringW __declspec(property(get=__get_RipeMD160, put=__set_RipeMD160))  RipeMD160;

static void __set_RipeMD160(::StringW value) ;

static ::StringW __get_RipeMD160() ;

static ::StringW __declspec(property(get=__get_RipeMD256, put=__set_RipeMD256))  RipeMD256;

static void __set_RipeMD256(::StringW value) ;

static ::StringW __get_RipeMD256() ;

static ::StringW __declspec(property(get=__get_Gost3411, put=__set_Gost3411))  Gost3411;

static void __set_Gost3411(::StringW value) ;

static ::StringW __get_Gost3411() ;

static ::StringW __declspec(property(get=__get_Gost3411_2012_256, put=__set_Gost3411_2012_256))  Gost3411_2012_256;

static void __set_Gost3411_2012_256(::StringW value) ;

static ::StringW __get_Gost3411_2012_256() ;

static ::StringW __declspec(property(get=__get_Gost3411_2012_512, put=__set_Gost3411_2012_512))  Gost3411_2012_512;

static void __set_Gost3411_2012_512(::StringW value) ;

static ::StringW __get_Gost3411_2012_512() ;

static ::StringW __declspec(property(get=__get_SM3, put=__set_SM3))  SM3;

static void __set_SM3(::StringW value) ;

static ::StringW __get_SM3() ;

static System::Collections::IList __declspec(property(get=__get_Allowed, put=__set_Allowed))  Allowed;

static void __set_Allowed(System::Collections::IList value) ;

static System::Collections::IList __get_Allowed() ;


// Methods

// Ctor Parameters []
explicit TspAlgorithms() ;

/// @brief Method .ctor addr 0x10c8390 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TspAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TspAlgorithms, "Org.BouncyCastle.Tsp", "TspAlgorithms");
