#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollection_1;
}
// Type: System.Collections.Concurrent::IProducerConsumerCollection`1
namespace System::Collections::Concurrent {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3797))
// CS Name: System.Collections.Concurrent.IProducerConsumerCollection`1
class CORDL_TYPE IProducerConsumerCollection_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

~IProducerConsumerCollection_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IProducerConsumerCollection_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TryAdd addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryAdd(T item) ;

/// @brief Method TryTake addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryTake(ByRef<T> item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<T> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::IProducerConsumerCollection_1, "System.Collections.Concurrent", "IProducerConsumerCollection`1");
