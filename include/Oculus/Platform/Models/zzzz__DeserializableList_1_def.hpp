#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Oculus::Platform::Models {
template<typename T>
class DeserializableList_1;
}
namespace Oculus::Platform::Models {
template<::cordl_internals::il2cpp_reference_type T>
class DeserializableList_1<T>;
}
// Type: Oculus.Platform.Models::DeserializableList`1
// Type: Oculus.Platform.Models::DeserializableList`1
namespace Oculus::Platform::Models {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 2 })
// CS Name: Oculus.Platform.Models.DeserializableList`1
class CORDL_TYPE DeserializableList_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IList_1<T>
constexpr operator  ::System::Collections::Generic::IList_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<T>
constexpr operator  ::System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DeserializableList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeserializableList_1", modifiers: " const&", def_value: None }]
constexpr DeserializableList_1(DeserializableList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeserializableList_1", modifiers: "&&", def_value: None }]
constexpr DeserializableList_1(DeserializableList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeserializableList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DeserializableList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeserializableList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeserializableList_1& operator=(DeserializableList_1&& o) noexcept = default;
  constexpr DeserializableList_1& operator=(DeserializableList_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<T> __declspec(property(get=__get__Data, put=__set__Data))  _Data;

constexpr void __set__Data(::System::Collections::Generic::List_1<T> value) ;

constexpr ::System::Collections::Generic::List_1<T> __get__Data() const;

 ::StringW __declspec(property(get=__get__NextUrl, put=__set__NextUrl))  _NextUrl;

constexpr void __set__NextUrl(::StringW value) ;

constexpr ::StringW __get__NextUrl() const;

 ::StringW __declspec(property(get=__get__PreviousUrl, put=__set__PreviousUrl))  _PreviousUrl;

constexpr void __set__PreviousUrl(::StringW value) ;

constexpr ::StringW __get__PreviousUrl() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 T __declspec(property(get=get_Item, put=set_Item))  Item;

 ::System::Collections::Generic::List_1<T> __declspec(property(get=get_Data))  Data;

 bool __declspec(property(get=get_HasNextPage))  HasNextPage;

 bool __declspec(property(get=get_HasPreviousPage))  HasPreviousPage;

 ::StringW __declspec(property(get=get_NextUrl))  NextUrl;

 ::StringW __declspec(property(get=get_PreviousUrl))  PreviousUrl;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(T obj) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, T value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method GetEnumerator1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::IEnumerator GetEnumerator1() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<T> get_Data() ;

/// @brief Method get_HasNextPage addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasNextPage() ;

/// @brief Method get_HasPreviousPage addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasPreviousPage() ;

/// @brief Method get_NextUrl addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_NextUrl() ;

/// @brief Method get_PreviousUrl addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_PreviousUrl() ;

// Ctor Parameters []
explicit DeserializableList_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Models::DeserializableList_1, "Oculus.Platform.Models", "DeserializableList`1");
