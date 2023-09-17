#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Type: ::IStandaloneThreadRunnable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12761))
// CS Name: IStandaloneThreadRunnable
class CORDL_TYPE IStandaloneThreadRunnable : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IStandaloneThreadRunnable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStandaloneThreadRunnable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveNext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunnable, "", "IStandaloneThreadRunnable");
