#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsVolatile;
}
// Type: System.Runtime.CompilerServices::IsVolatile
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3371))
// CS Name: System.Runtime.CompilerServices.IsVolatile
class CORDL_TYPE IsVolatile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsVolatile() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsVolatile", modifiers: " const&", def_value: None }]
constexpr IsVolatile(IsVolatile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsVolatile", modifiers: "&&", def_value: None }]
constexpr IsVolatile(IsVolatile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsVolatile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IsVolatile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsVolatile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsVolatile& operator=(IsVolatile&& o) noexcept = default;
  constexpr IsVolatile& operator=(IsVolatile const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::IsVolatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsVolatile, "System.Runtime.CompilerServices", "IsVolatile");
