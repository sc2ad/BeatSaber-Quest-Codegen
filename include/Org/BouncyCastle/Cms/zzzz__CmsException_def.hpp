#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsException;
}
// Type: Org.BouncyCastle.Cms::CmsException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(612))
// CS Name: Org.BouncyCastle.Cms.CmsException
class CORDL_TYPE CmsException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CmsException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: " const&", def_value: None }]
constexpr CmsException(CmsException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: "&&", def_value: None }]
constexpr CmsException(CmsException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr CmsException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsException& operator=(CmsException&& o) noexcept = default;
  constexpr CmsException& operator=(CmsException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CmsException() ;

/// @brief Method .ctor addr 0x114e07c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
explicit CmsException(::StringW msg) ;

/// @brief Method .ctor addr 0x114e0d4 size 0x68 virtual false final false
 void _ctor(::StringW msg) ;

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit CmsException(::StringW msg, System::Exception e) ;

/// @brief Method .ctor addr 0x114e13c size 0x70 virtual false final false
 void _ctor(::StringW msg, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsException, "Org.BouncyCastle.Cms", "CmsException");
