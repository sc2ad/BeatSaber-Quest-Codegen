#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CrmfException;
}
// Type: Org.BouncyCastle.Crmf::CrmfException
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(698))
// CS Name: Org.BouncyCastle.Crmf.CrmfException
class CORDL_TYPE CrmfException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CrmfException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrmfException", modifiers: " const&", def_value: None }]
constexpr CrmfException(CrmfException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrmfException", modifiers: "&&", def_value: None }]
constexpr CrmfException(CrmfException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrmfException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr CrmfException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrmfException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrmfException& operator=(CrmfException&& o) noexcept = default;
  constexpr CrmfException& operator=(CrmfException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CrmfException() ;

/// @brief Method .ctor addr 0x11854e8 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CrmfException(::StringW message) ;

/// @brief Method .ctor addr 0x1185540 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit CrmfException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x11837f4 size 0x70 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CrmfException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CrmfException, "Org.BouncyCastle.Crmf", "CrmfException");
