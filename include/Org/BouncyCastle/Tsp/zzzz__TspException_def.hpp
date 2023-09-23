#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspException;
}
// Type: Org.BouncyCastle.Tsp::TspException
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1774))
// CS Name: Org.BouncyCastle.Tsp.TspException
class CORDL_TYPE TspException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TspException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: " const&", def_value: None }]
constexpr TspException(TspException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: "&&", def_value: None }]
constexpr TspException(TspException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TspException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr TspException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TspException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TspException& operator=(TspException&& o) noexcept = default;
  constexpr TspException& operator=(TspException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TspException() ;

/// @brief Method .ctor addr 0x10c8398 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TspException(::StringW message) ;

/// @brief Method .ctor addr 0x10c7b88 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit TspException(::StringW message, System::Exception e) ;

/// @brief Method .ctor addr 0x10c48ac size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TspException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TspException, "Org.BouncyCastle.Tsp", "TspException");
