#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__InvalidCastException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class MemoableResetException;
}
// Type: Org.BouncyCastle.Utilities::MemoableResetException
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1835))
// CS Name: Org.BouncyCastle.Utilities.MemoableResetException
class CORDL_TYPE MemoableResetException : public ::System::InvalidCastException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MemoableResetException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoableResetException", modifiers: " const&", def_value: None }]
constexpr MemoableResetException(MemoableResetException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoableResetException", modifiers: "&&", def_value: None }]
constexpr MemoableResetException(MemoableResetException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoableResetException(void* ptr) noexcept : ::System::InvalidCastException(ptr) {
}


  constexpr MemoableResetException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoableResetException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoableResetException& operator=(MemoableResetException&& o) noexcept = default;
  constexpr MemoableResetException& operator=(MemoableResetException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
explicit MemoableResetException(::StringW msg) ;

/// @brief Method .ctor addr 0x10e2a90 size 0x8 virtual false final false
 void _ctor(::StringW msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::MemoableResetException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::MemoableResetException, "Org.BouncyCastle.Utilities", "MemoableResetException");
