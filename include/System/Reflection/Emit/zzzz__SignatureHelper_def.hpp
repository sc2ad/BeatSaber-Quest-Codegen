#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Reflection::Emit {
class SignatureHelper;
}
// Type: System.Reflection.Emit::SignatureHelper
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3539))
// CS Name: System.Reflection.Emit.SignatureHelper
class CORDL_TYPE SignatureHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignatureHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: " const&", def_value: None }]
constexpr SignatureHelper(SignatureHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: "&&", def_value: None }]
constexpr SignatureHelper(SignatureHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureHelper& operator=(SignatureHelper&& o) noexcept = default;
  constexpr SignatureHelper& operator=(SignatureHelper const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::SignatureHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::SignatureHelper, "System.Reflection.Emit", "SignatureHelper");
