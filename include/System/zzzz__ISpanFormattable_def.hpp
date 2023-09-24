#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class ISpanFormattable;
}
// Type: System::ISpanFormattable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2420))
// CS Name: System.ISpanFormattable
class CORDL_TYPE ISpanFormattable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISpanFormattable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISpanFormattable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TryFormat addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ISpanFormattable);
DEFINE_IL2CPP_ARG_TYPE(System::ISpanFormattable, "System", "ISpanFormattable");
