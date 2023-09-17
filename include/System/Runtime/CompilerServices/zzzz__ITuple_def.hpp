#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Type: System.Runtime.CompilerServices::ITuple
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3367))
// CS Name: System.Runtime.CompilerServices.ITuple
class CORDL_TYPE ITuple : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITuple() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITuple(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::ITuple);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ITuple, "System.Runtime.CompilerServices", "ITuple");
