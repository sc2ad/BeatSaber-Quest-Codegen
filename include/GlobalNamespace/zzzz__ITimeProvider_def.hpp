#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ITimeProvider;
}
// Type: ::ITimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5472))
// CS Name: ITimeProvider
class CORDL_TYPE ITimeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITimeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITimeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_time))  time;


// Methods

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_time() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITimeProvider, "", "ITimeProvider");
