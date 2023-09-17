#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System {
class IDisposable;
}
// Type: System::IDisposable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2414))
// CS Name: System.IDisposable
class CORDL_TYPE IDisposable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDisposable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDisposable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::IDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IDisposable, "System", "IDisposable");
