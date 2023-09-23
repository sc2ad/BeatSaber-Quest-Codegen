#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__SharedVertex____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12141))
// CS Name: UnityEngine.ProBuilder.SharedVertex::<>c
class CORDL_TYPE UnityEngine__ProBuilder__SharedVertex____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__SharedVertex____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__SharedVertex____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__SharedVertex____c(UnityEngine__ProBuilder__SharedVertex____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__SharedVertex____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__SharedVertex____c(UnityEngine__ProBuilder__SharedVertex____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__SharedVertex____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__SharedVertex____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__SharedVertex____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__SharedVertex____c& operator=(UnityEngine__ProBuilder__SharedVertex____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__SharedVertex____c& operator=(UnityEngine__ProBuilder__SharedVertex____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c __get___9() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,bool> __declspec(property(get=__get___9__26_0, put=__set___9__26_0))  __9__26_0;

static void __set___9__26_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,bool> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,bool> __get___9__26_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__SharedVertex____c() ;

/// @brief Method .ctor addr 0x29e3b70 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortedRemoveAndShift>b__26_0 addr 0x29e3b78 size 0x40 virtual false final false
 bool _SortedRemoveAndShift_b__26_0(System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SharedVertex
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12142))
// CS Name: UnityEngine.ProBuilder.SharedVertex
class CORDL_TYPE SharedVertex : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<int32_t>
constexpr operator  System::Collections::Generic::ICollection_1<int32_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SharedVertex() = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: " const&", def_value: None }]
constexpr SharedVertex(SharedVertex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: "&&", def_value: None }]
constexpr SharedVertex(SharedVertex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SharedVertex(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SharedVertex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SharedVertex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SharedVertex& operator=(SharedVertex&& o) noexcept = default;
  constexpr SharedVertex& operator=(SharedVertex const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_m_Vertices, put=__set_m_Vertices))  m_Vertices;

constexpr void __set_m_Vertices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_Vertices() const;


// Properties

 ::ArrayW<int32_t> __declspec(property(get=get_arrayInternal))  arrayInternal;

 int32_t __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method get_arrayInternal addr 0x29e2320 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_arrayInternal() ;

// Ctor Parameters [CppParam { name: "indexes", ty: "System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }]
explicit SharedVertex(System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

/// @brief Method .ctor addr 0x29e1618 size 0xb0 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

// Ctor Parameters [CppParam { name: "sharedVertex", ty: "UnityEngine::ProBuilder::SharedVertex", modifiers: "", def_value: None }]
explicit SharedVertex(UnityEngine::ProBuilder::SharedVertex sharedVertex) ;

/// @brief Method .ctor addr 0x29e2328 size 0xd0 virtual false final false
 void _ctor(UnityEngine::ProBuilder::SharedVertex sharedVertex) ;

/// @brief Method get_Item addr 0x29d543c size 0x30 virtual false final false
 int32_t get_Item(int32_t i) ;

/// @brief Method set_Item addr 0x29e2414 size 0x30 virtual false final false
 void set_Item(int32_t i, int32_t value) ;

/// @brief Method GetEnumerator addr 0x29e2444 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<int32_t> GetEnumerator() ;

/// @brief Method ToString addr 0x29e24e4 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29e254c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Add addr 0x29e2550 size 0x60 virtual true final true
 void Add(int32_t item) ;

/// @brief Method Clear addr 0x29e25b0 size 0x50 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x29e2600 size 0x64 virtual true final true
 bool Contains(int32_t item) ;

/// @brief Method CopyTo addr 0x29e2664 size 0x1c virtual true final true
 void CopyTo(::ArrayW<int32_t> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x29e2680 size 0x94 virtual true final true
 bool Remove(int32_t item) ;

/// @brief Method get_Count addr 0x29e23f8 size 0x1c virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x29e2714 size 0x1c virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method GetSharedVertexLookup addr 0x29e2730 size 0x414 virtual false final false
static void GetSharedVertexLookup(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> sharedVertices, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method ShiftIndexes addr 0x29e2b44 size 0x40 virtual false final false
 void ShiftIndexes(int32_t offset) ;

/// @brief Method ToSharedVertices addr 0x29e2b84 size 0x6e8 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::SharedVertex> ToSharedVertices(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> lookup) ;

/// @brief Method ToSharedVertices addr 0x29e326c size 0x17c virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::SharedVertex> ToSharedVertices(System::Collections::Generic::List_1<System::Collections::Generic::List_1<int32_t>> list) ;

/// @brief Method GetSharedVerticesWithPositions addr 0x29e16c8 size 0x5d8 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::SharedVertex> GetSharedVerticesWithPositions(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions) ;

/// @brief Method RemoveAndShift addr 0x29e33e8 size 0xa8 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::SharedVertex> RemoveAndShift(System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup, System::Collections::Generic::IEnumerable_1<int32_t> remove) ;

/// @brief Method SortedRemoveAndShift addr 0x29e3490 size 0x350 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::SharedVertex> SortedRemoveAndShift(System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup, System::Collections::Generic::List_1<int32_t> remove) ;

/// @brief Method SetCoincident addr 0x29e37e0 size 0x32c virtual false final false
static void SetCoincident(ByRef<System::Collections::Generic::Dictionary_2<int32_t,int32_t>> lookup, System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::SharedVertex);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex, "UnityEngine.ProBuilder", "SharedVertex");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__SharedVertex____c, "UnityEngine.ProBuilder", "SharedVertex/<>c");
