#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsAuthEnvelopedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(627))
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedGenerator
class CORDL_TYPE CmsAuthEnvelopedGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsAuthEnvelopedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: " const&", def_value: None }]
constexpr CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: "&&", def_value: None }]
constexpr CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthEnvelopedGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsAuthEnvelopedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthEnvelopedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthEnvelopedGenerator& operator=(CmsAuthEnvelopedGenerator&& o) noexcept = default;
  constexpr CmsAuthEnvelopedGenerator& operator=(CmsAuthEnvelopedGenerator const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_Aes128Ccm, put=__set_Aes128Ccm))  Aes128Ccm;

static void __set_Aes128Ccm(::StringW value) ;

static ::StringW __get_Aes128Ccm() ;

static ::StringW __declspec(property(get=__get_Aes192Ccm, put=__set_Aes192Ccm))  Aes192Ccm;

static void __set_Aes192Ccm(::StringW value) ;

static ::StringW __get_Aes192Ccm() ;

static ::StringW __declspec(property(get=__get_Aes256Ccm, put=__set_Aes256Ccm))  Aes256Ccm;

static void __set_Aes256Ccm(::StringW value) ;

static ::StringW __get_Aes256Ccm() ;

static ::StringW __declspec(property(get=__get_Aes128Gcm, put=__set_Aes128Gcm))  Aes128Gcm;

static void __set_Aes128Gcm(::StringW value) ;

static ::StringW __get_Aes128Gcm() ;

static ::StringW __declspec(property(get=__get_Aes192Gcm, put=__set_Aes192Gcm))  Aes192Gcm;

static void __set_Aes192Gcm(::StringW value) ;

static ::StringW __get_Aes192Gcm() ;

static ::StringW __declspec(property(get=__get_Aes256Gcm, put=__set_Aes256Gcm))  Aes256Gcm;

static void __set_Aes256Gcm(::StringW value) ;

static ::StringW __get_Aes256Gcm() ;


// Methods

static Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator New_ctor() ;

/// @brief Method .ctor addr 0x1152478 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedGenerator");
