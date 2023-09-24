#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Reflection::Emit {
class UnmanagedMarshal;
}
// Type: System.Reflection.Emit::UnmanagedMarshal
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3541))
// CS Name: System.Reflection.Emit.UnmanagedMarshal
class CORDL_TYPE UnmanagedMarshal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnmanagedMarshal() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedMarshal", modifiers: " const&", def_value: None }]
constexpr UnmanagedMarshal(UnmanagedMarshal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedMarshal", modifiers: "&&", def_value: None }]
constexpr UnmanagedMarshal(UnmanagedMarshal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmanagedMarshal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnmanagedMarshal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmanagedMarshal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmanagedMarshal& operator=(UnmanagedMarshal&& o) noexcept = default;
  constexpr UnmanagedMarshal& operator=(UnmanagedMarshal const& o) noexcept = default;
                


// Methods

static System::Reflection::Emit::UnmanagedMarshal New_ctor() ;

/// @brief Method .ctor addr 0x238ebd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::UnmanagedMarshal);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::UnmanagedMarshal, "System.Reflection.Emit", "UnmanagedMarshal");
