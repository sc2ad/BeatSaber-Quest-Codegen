#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Forward declare root types
namespace System {
class IValueTupleInternal;
}
// Type: System::IValueTupleInternal
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2503))
// CS Name: System.IValueTupleInternal
class CORDL_TYPE IValueTupleInternal : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const noexcept;

~IValueTupleInternal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValueTupleInternal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToStringEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IValueTupleInternal);
DEFINE_IL2CPP_ARG_TYPE(System::IValueTupleInternal, "System", "IValueTupleInternal");
