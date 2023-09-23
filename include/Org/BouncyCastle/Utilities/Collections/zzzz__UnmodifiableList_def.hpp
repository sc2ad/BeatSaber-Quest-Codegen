#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableList;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableList
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1787))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableList
class CORDL_TYPE UnmodifiableList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnmodifiableList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableList", modifiers: " const&", def_value: None }]
constexpr UnmodifiableList(UnmodifiableList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableList", modifiers: "&&", def_value: None }]
constexpr UnmodifiableList(UnmodifiableList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnmodifiableList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableList& operator=(UnmodifiableList&& o) noexcept = default;
  constexpr UnmodifiableList& operator=(UnmodifiableList const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit UnmodifiableList() ;

/// @brief Method .ctor addr 0x10ce758 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x10ce760 size 0x40 virtual true final false
 int32_t Add(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Clear addr 0x10ce7a0 size 0x40 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Insert addr 0x10ce7e0 size 0x40 virtual true final false
 void Insert(int32_t i, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x10ce820 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method Remove addr 0x10ce828 size 0x40 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method RemoveAt addr 0x10ce868 size 0x40 virtual true final false
 void RemoveAt(int32_t i) ;

/// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Item addr 0x10ce8a8 size 0x10 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t i) ;

/// @brief Method set_Item addr 0x10ce8b8 size 0x40 virtual true final false
 void set_Item(int32_t i, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::UnmodifiableList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableList, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableList");
