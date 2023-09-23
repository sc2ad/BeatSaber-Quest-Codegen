#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsStreamException;
}
// Type: Org.BouncyCastle.Cms::CmsStreamException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(661))
// CS Name: Org.BouncyCastle.Cms.CmsStreamException
class CORDL_TYPE CmsStreamException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CmsStreamException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: " const&", def_value: None }]
constexpr CmsStreamException(CmsStreamException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: "&&", def_value: None }]
constexpr CmsStreamException(CmsStreamException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsStreamException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr CmsStreamException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsStreamException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsStreamException& operator=(CmsStreamException&& o) noexcept = default;
  constexpr CmsStreamException& operator=(CmsStreamException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CmsStreamException() ;

/// @brief Method .ctor addr 0x1174cf0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit CmsStreamException(::StringW name) ;

/// @brief Method .ctor addr 0x1174cf8 size 0x8 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit CmsStreamException(::StringW name, System::Exception e) ;

/// @brief Method .ctor addr 0x11680b0 size 0x8 virtual false final false
 void _ctor(::StringW name, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsStreamException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsStreamException, "Org.BouncyCastle.Cms", "CmsStreamException");
