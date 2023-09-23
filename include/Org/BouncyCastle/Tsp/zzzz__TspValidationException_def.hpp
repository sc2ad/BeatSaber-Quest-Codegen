#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspValidationException;
}
// Type: Org.BouncyCastle.Tsp::TspValidationException
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1774))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1776))
// CS Name: Org.BouncyCastle.Tsp.TspValidationException
class CORDL_TYPE TspValidationException : public Org::BouncyCastle::Tsp::TspException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TspValidationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TspValidationException", modifiers: " const&", def_value: None }]
constexpr TspValidationException(TspValidationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TspValidationException", modifiers: "&&", def_value: None }]
constexpr TspValidationException(TspValidationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TspValidationException(void* ptr) noexcept : Org::BouncyCastle::Tsp::TspException(ptr) {
}


  constexpr TspValidationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TspValidationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TspValidationException& operator=(TspValidationException&& o) noexcept = default;
  constexpr TspValidationException& operator=(TspValidationException const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_failureCode, put=__set_failureCode))  failureCode;

constexpr void __set_failureCode(int32_t value) ;

constexpr int32_t __get_failureCode() const;


// Properties

 int32_t __declspec(property(get=get_FailureCode))  FailureCode;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TspValidationException(::StringW message) ;

/// @brief Method .ctor addr 0x10c4e30 size 0x1c virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "failureCode", ty: "int32_t", modifiers: "", def_value: None }]
explicit TspValidationException(::StringW message, int32_t failureCode) ;

/// @brief Method .ctor addr 0x10c39b4 size 0x24 virtual false final false
 void _ctor(::StringW message, int32_t failureCode) ;

/// @brief Method get_FailureCode addr 0x10caca4 size 0x8 virtual false final false
 int32_t get_FailureCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TspValidationException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TspValidationException, "Org.BouncyCastle.Tsp", "TspValidationException");
