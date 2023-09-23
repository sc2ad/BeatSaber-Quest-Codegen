#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Nullable;
}
// Type: System::Nullable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2448))
// CS Name: System.Nullable
class CORDL_TYPE Nullable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nullable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nullable", modifiers: " const&", def_value: None }]
constexpr Nullable(Nullable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nullable", modifiers: "&&", def_value: None }]
constexpr Nullable(Nullable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nullable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nullable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nullable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nullable& operator=(Nullable&& o) noexcept = default;
  constexpr Nullable& operator=(Nullable const& o) noexcept = default;
                


// Methods

/// @brief Method GetUnderlyingType addr 0x2442c04 size 0x150 virtual false final false
static System::Type GetUnderlyingType(System::Type nullableType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Nullable);
DEFINE_IL2CPP_ARG_TYPE(System::Nullable, "System", "Nullable");
