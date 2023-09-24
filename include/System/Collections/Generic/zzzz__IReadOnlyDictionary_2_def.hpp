#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Type: System.Collections.Generic::IReadOnlyDictionary`2
namespace System::Collections::Generic {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3822))
// CS Name: System.Collections.Generic.IReadOnlyDictionary`2
class CORDL_TYPE IReadOnlyDictionary_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IReadOnlyDictionary_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReadOnlyDictionary_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 TValue __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue get_Item(TKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IReadOnlyDictionary_2, "System.Collections.Generic", "IReadOnlyDictionary`2");
