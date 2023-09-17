#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Text {
class StringBuilder;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Forward declare root types
namespace System {
class ITupleInternal;
}
// Type: System::ITupleInternal
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2487))
// CS Name: System.ITupleInternal
class CORDL_TYPE ITupleInternal : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

~ITupleInternal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITupleInternal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::System::Text::StringBuilder sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ITupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::ITupleInternal, "System", "ITupleInternal");
