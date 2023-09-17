#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Resources {
class IResourceReader;
}
// Type: System.Resources::IResourceReader
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3417))
// CS Name: System.Resources.IResourceReader
class CORDL_TYPE IResourceReader : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IResourceReader() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResourceReader(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::IDictionaryEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
} // end anonymous namespace
NEED_NO_BOX(::System::Resources::IResourceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::IResourceReader, "System.Resources", "IResourceReader");
