#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableSet;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableSet
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1789))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableSet
class CORDL_TYPE UnmodifiableSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Utilities::Collections::ISet
constexpr operator  Org::BouncyCastle::Utilities::Collections::ISet() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnmodifiableSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: " const&", def_value: None }]
constexpr UnmodifiableSet(UnmodifiableSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: "&&", def_value: None }]
constexpr UnmodifiableSet(UnmodifiableSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnmodifiableSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableSet& operator=(UnmodifiableSet&& o) noexcept = default;
  constexpr UnmodifiableSet& operator=(UnmodifiableSet const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static Org::BouncyCastle::Utilities::Collections::UnmodifiableSet New_ctor() ;

/// @brief Method .ctor addr 0x10ceee0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x10ceee8 size 0x40 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method AddAll addr 0x10cef28 size 0x40 virtual true final false
 void AddAll(System::Collections::IEnumerable e) ;

/// @brief Method Clear addr 0x10cef68 size 0x40 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x10cefa8 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Remove addr 0x10cefb0 size 0x40 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method RemoveAll addr 0x10ceff0 size 0x40 virtual true final false
 void RemoveAll(System::Collections::IEnumerable e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::UnmodifiableSet);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableSet, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableSet");
