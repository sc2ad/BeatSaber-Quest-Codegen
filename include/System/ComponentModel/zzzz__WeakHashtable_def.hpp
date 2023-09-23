#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::ComponentModel {
class System__ComponentModel__WeakHashtable__WeakKeyComparer;
}
namespace System::ComponentModel {
class WeakHashtable;
}
// Type: ::WeakKeyComparer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8345))
// CS Name: System.ComponentModel.WeakHashtable::WeakKeyComparer
class CORDL_TYPE System__ComponentModel__WeakHashtable__WeakKeyComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEqualityComparer
constexpr operator  System::Collections::IEqualityComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__ComponentModel__WeakHashtable__WeakKeyComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__WeakHashtable__WeakKeyComparer", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer(System__ComponentModel__WeakHashtable__WeakKeyComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__WeakHashtable__WeakKeyComparer", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer(System__ComponentModel__WeakHashtable__WeakKeyComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__WeakHashtable__WeakKeyComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer& operator=(System__ComponentModel__WeakHashtable__WeakKeyComparer&& o) noexcept = default;
  constexpr System__ComponentModel__WeakHashtable__WeakKeyComparer& operator=(System__ComponentModel__WeakHashtable__WeakKeyComparer const& o) noexcept = default;
                


// Methods

/// @brief Method System.Collections.IEqualityComparer.Equals addr 0x27a8000 size 0x15c virtual true final true
 bool System_Collections_IEqualityComparer_Equals(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method System.Collections.IEqualityComparer.GetHashCode addr 0x27a815c size 0x20 virtual true final true
 int32_t System_Collections_IEqualityComparer_GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit System__ComponentModel__WeakHashtable__WeakKeyComparer() ;

/// @brief Method .ctor addr 0x27a7ff8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::WeakHashtable
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8346))
// CS Name: System.ComponentModel.WeakHashtable
class CORDL_TYPE WeakHashtable : public System::Collections::Hashtable {
public:
// Declarations
using WeakKeyComparer = System::ComponentModel::System__ComponentModel__WeakHashtable__WeakKeyComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~WeakHashtable() = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: " const&", def_value: None }]
constexpr WeakHashtable(WeakHashtable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "&&", def_value: None }]
constexpr WeakHashtable(WeakHashtable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WeakHashtable(void* ptr) noexcept : System::Collections::Hashtable(ptr) {
}


  constexpr WeakHashtable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WeakHashtable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WeakHashtable& operator=(WeakHashtable&& o) noexcept = default;
  constexpr WeakHashtable& operator=(WeakHashtable const& o) noexcept = default;
                


// Fields

static System::Collections::IEqualityComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

static void __set__comparer(System::Collections::IEqualityComparer value) ;

static System::Collections::IEqualityComparer __get__comparer() ;


// Methods

// Ctor Parameters []
explicit WeakHashtable() ;

/// @brief Method .ctor addr 0x27a7f0c size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method Clear addr 0x27a7f70 size 0x8 virtual true final false
 void Clear() ;

/// @brief Method Remove addr 0x27a7f78 size 0x8 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__WeakHashtable__WeakKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__WeakHashtable__WeakKeyComparer, "System.ComponentModel", "WeakHashtable/WeakKeyComparer");
NEED_NO_BOX(System::ComponentModel::WeakHashtable);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::WeakHashtable, "System.ComponentModel", "WeakHashtable");
