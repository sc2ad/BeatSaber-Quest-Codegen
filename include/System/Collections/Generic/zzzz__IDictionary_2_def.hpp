#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Type: System.Collections.Generic::IDictionary`2
namespace System::Collections::Generic {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3813))
// CS Name: System.Collections.Generic.IDictionary`2
class CORDL_TYPE IDictionary_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IDictionary_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDictionary_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::Generic::ICollection_1<TKey> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::ICollection_1<TValue> __declspec(property(get=get_Values))  Values;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue get_Item(TKey key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Item(TKey key, TValue value) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::ICollection_1<TKey> get_Keys() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::ICollection_1<TValue> get_Values() ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ContainsKey(TKey key) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(TKey key, TValue value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Remove(TKey key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IDictionary_2, "System.Collections.Generic", "IDictionary`2");
