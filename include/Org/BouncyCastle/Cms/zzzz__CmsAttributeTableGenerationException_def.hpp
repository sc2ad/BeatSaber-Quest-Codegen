#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerationException;
}
// Type: Org.BouncyCastle.Cms::CmsAttributeTableGenerationException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(612))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(613))
// CS Name: Org.BouncyCastle.Cms.CmsAttributeTableGenerationException
class CORDL_TYPE CmsAttributeTableGenerationException : public Org::BouncyCastle::Cms::CmsException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CmsAttributeTableGenerationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerationException", modifiers: " const&", def_value: None }]
constexpr CmsAttributeTableGenerationException(CmsAttributeTableGenerationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerationException", modifiers: "&&", def_value: None }]
constexpr CmsAttributeTableGenerationException(CmsAttributeTableGenerationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAttributeTableGenerationException(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsException(ptr) {
}


  constexpr CmsAttributeTableGenerationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAttributeTableGenerationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAttributeTableGenerationException& operator=(CmsAttributeTableGenerationException&& o) noexcept = default;
  constexpr CmsAttributeTableGenerationException& operator=(CmsAttributeTableGenerationException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Cms::CmsAttributeTableGenerationException New_ctor() ;

/// @brief Method .ctor addr 0x114e1ac size 0x4 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::CmsAttributeTableGenerationException New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x114e1b0 size 0x4 virtual false final false
 void _ctor(::StringW name) ;

static Org::BouncyCastle::Cms::CmsAttributeTableGenerationException New_ctor(::StringW name, System::Exception e) ;

/// @brief Method .ctor addr 0x114e1b4 size 0x4 virtual false final false
 void _ctor(::StringW name, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsAttributeTableGenerationException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsAttributeTableGenerationException, "Org.BouncyCastle.Cms", "CmsAttributeTableGenerationException");
