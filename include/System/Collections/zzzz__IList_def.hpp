#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections {
class IList;
}
// Type: System.Collections::IList
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3747))
// CS Name: System.Collections.IList
class CORDL_TYPE IList : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IList() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IList(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveAt(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::IList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IList, "System.Collections", "IList");
