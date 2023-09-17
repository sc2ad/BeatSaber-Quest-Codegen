#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Type: System.Collections.Generic::IEnumerator`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3818))
// CS Name: System.Collections.Generic.IEnumerator`1
class CORDL_TYPE IEnumerator_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

~IEnumerator_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEnumerator_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
