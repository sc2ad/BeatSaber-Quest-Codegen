#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections {
class IDictionary;
}
// Type: System.Collections::IDictionary
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3742))
// CS Name: System.Collections.IDictionary
class CORDL_TYPE IDictionary : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IDictionary() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDictionary(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 ::System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 ::System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::ICollection get_Values() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::IDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IDictionary, "System.Collections", "IDictionary");
