#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionary;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionary
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1785))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
class CORDL_TYPE UnmodifiableDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnmodifiableDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: " const&", def_value: None }]
constexpr UnmodifiableDictionary(UnmodifiableDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: "&&", def_value: None }]
constexpr UnmodifiableDictionary(UnmodifiableDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnmodifiableDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableDictionary& operator=(UnmodifiableDictionary&& o) noexcept = default;
  constexpr UnmodifiableDictionary& operator=(UnmodifiableDictionary const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

static Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary New_ctor() ;

/// @brief Method .ctor addr 0x10cdfa0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x10cdfa8 size 0x40 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType k, ::bs_hook::Il2CppWrapperType v) ;

/// @brief Method Clear addr 0x10cdfe8 size 0x40 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x10ce028 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method Remove addr 0x10ce038 size 0x40 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x10ce078 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method get_Item addr 0x10ce080 size 0x10 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method set_Item addr 0x10ce090 size 0x40 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType k, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionary");
