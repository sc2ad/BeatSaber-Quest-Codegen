#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class CollectionUtils;
}
// Type: Newtonsoft.Json.Utilities::CollectionUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11833))
// CS Name: Newtonsoft.Json.Utilities.CollectionUtils
class CORDL_TYPE CollectionUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: " const&", def_value: None }]
constexpr CollectionUtils(CollectionUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: "&&", def_value: None }]
constexpr CollectionUtils(CollectionUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionUtils& operator=(CollectionUtils&& o) noexcept = default;
  constexpr CollectionUtils& operator=(CollectionUtils const& o) noexcept = default;
                


// Methods

/// @brief Method IsNullOrEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsNullOrEmpty(System::Collections::Generic::ICollection_1<T> collection) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AddRange(System::Collections::Generic::IList_1<T> initial, System::Collections::Generic::IEnumerable_1<T> collection) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AddRange(System::Collections::Generic::IList_1<T> initial, System::Collections::IEnumerable collection) ;

/// @brief Method IsDictionaryType addr 0x24ec3f8 size 0x138 virtual false final false
static bool IsDictionaryType(System::Type type) ;

/// @brief Method ResolveEnumerableCollectionConstructor addr 0x24ec5a4 size 0x110 virtual false final false
static System::Reflection::ConstructorInfo ResolveEnumerableCollectionConstructor(System::Type collectionType, System::Type collectionItemType) ;

/// @brief Method ResolveEnumerableCollectionConstructor addr 0x24ec6b4 size 0x2c4 virtual false final false
static System::Reflection::ConstructorInfo ResolveEnumerableCollectionConstructor(System::Type collectionType, System::Type collectionItemType, System::Type constructorArgumentType) ;

/// @brief Method AddDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AddDistinct(System::Collections::Generic::IList_1<T> list, T value) ;

/// @brief Method AddDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AddDistinct(System::Collections::Generic::IList_1<T> list, T value, System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method ContainsValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static bool ContainsValue(System::Collections::Generic::IEnumerable_1<TSource> source, TSource value, System::Collections::Generic::IEqualityComparer_1<TSource> comparer) ;

/// @brief Method AddRangeDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AddRangeDistinct(System::Collections::Generic::IList_1<T> list, System::Collections::Generic::IEnumerable_1<T> values, System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(System::Collections::Generic::IEnumerable_1<T> collection, System::Func_2<T,bool> predicate) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool Contains(System::Collections::Generic::List_1<T> list, T value, System::Collections::IEqualityComparer comparer) ;

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOfReference(System::Collections::Generic::List_1<T> list, T item) ;

/// @brief Method GetDimensions addr 0x24ec978 size 0x2e4 virtual false final false
static System::Collections::Generic::IList_1<int32_t> GetDimensions(System::Collections::IList values, int32_t dimensionsCount) ;

/// @brief Method CopyFromJaggedToMultidimensionalArray addr 0x24ecc5c size 0x2c0 virtual false final false
static void CopyFromJaggedToMultidimensionalArray(System::Collections::IList values, System::Array multidimensionalArray, ::ArrayW<int32_t> indices) ;

/// @brief Method JaggedArrayGetValue addr 0x24ecf1c size 0x13c virtual false final false
static ::bs_hook::Il2CppWrapperType JaggedArrayGetValue(System::Collections::IList values, ::ArrayW<int32_t> indices) ;

/// @brief Method ToMultidimensionalArray addr 0x24ed058 size 0x1a0 virtual false final false
static System::Array ToMultidimensionalArray(System::Collections::IList values, System::Type type, int32_t rank) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::CollectionUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::CollectionUtils, "Newtonsoft.Json.Utilities", "CollectionUtils");
