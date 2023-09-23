#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class TreeWalkPredicate_1;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
struct NodeColor;
}
namespace System::Collections::Generic {
struct TreeRotation;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class SortedSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class System__Collections__Generic__SortedSet_1__Node;
}
namespace System::Collections::Generic {
template<typename T>
class System__Collections__Generic__SortedSet_1____c__DisplayClass52_0;
}
namespace System::Collections::Generic {
template<typename T>
class System__Collections__Generic__SortedSet_1____c__DisplayClass53_0;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class SortedSet_1<T>;
}
namespace System::Collections::Generic {
template<>
class SortedSet_1<uint32_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class System__Collections__Generic__SortedSet_1__Node<T>;
}
namespace System::Collections::Generic {
template<>
class System__Collections__Generic__SortedSet_1__Node<uint32_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>;
}
namespace System::Collections::Generic {
template<>
class System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>;
}
namespace System::Collections::Generic {
template<>
class System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__SortedSet_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__SortedSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Collections__Generic__SortedSet_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>;
}
// Type: ::Node
// Type: ::Enumerator
// Type: ::ElementCount
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8389))
// CS Name: System.Collections.Generic.SortedSet`1::ElementCount
struct CORDL_TYPE System__Collections__Generic__SortedSet_1__ElementCount : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__ElementCount(int32_t UniqueCount, int32_t UnfoundCount) noexcept;


                    constexpr System__Collections__Generic__SortedSet_1__ElementCount(System__Collections__Generic__SortedSet_1__ElementCount const&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__ElementCount(System__Collections__Generic__SortedSet_1__ElementCount&&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__ElementCount& operator=(System__Collections__Generic__SortedSet_1__ElementCount const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__SortedSet_1__ElementCount& operator=(System__Collections__Generic__SortedSet_1__ElementCount&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1__ElementCount(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_UniqueCount, put=__set_UniqueCount))  UniqueCount;

constexpr void __set_UniqueCount(int32_t value) ;

constexpr int32_t __get_UniqueCount() const;

 int32_t __declspec(property(get=__get_UnfoundCount, put=__set_UnfoundCount))  UnfoundCount;

constexpr void __set_UnfoundCount(int32_t value) ;

constexpr int32_t __get_UnfoundCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
// Type: ::<>c__DisplayClass53_0
// Type: System.Collections.Generic::SortedSet`1
// Type: ::Node
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8387))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8387), inst: 2 })
// CS Name: System.Collections.Generic.SortedSet`1::Node
class CORDL_TYPE System__Collections__Generic__SortedSet_1__Node<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__SortedSet_1__Node() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1__Node", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Node(System__Collections__Generic__SortedSet_1__Node const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1__Node", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Node(System__Collections__Generic__SortedSet_1__Node&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1__Node(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(System__Collections__Generic__SortedSet_1__Node&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(System__Collections__Generic__SortedSet_1__Node const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__Item_k__BackingField, put=__set__Item_k__BackingField))  _Item_k__BackingField;

constexpr void __set__Item_k__BackingField(T value) ;

constexpr T __get__Item_k__BackingField() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=__get__Left_k__BackingField, put=__set__Left_k__BackingField))  _Left_k__BackingField;

constexpr void __set__Left_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __get__Left_k__BackingField() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=__get__Right_k__BackingField, put=__set__Right_k__BackingField))  _Right_k__BackingField;

constexpr void __set__Right_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __get__Right_k__BackingField() const;

 System::Collections::Generic::NodeColor __declspec(property(get=__get__Color_k__BackingField, put=__set__Color_k__BackingField))  _Color_k__BackingField;

constexpr void __set__Color_k__BackingField(System::Collections::Generic::NodeColor value) ;

constexpr System::Collections::Generic::NodeColor __get__Color_k__BackingField() const;


// Properties

 T __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=get_Left, put=set_Left))  Left;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=get_Right, put=set_Right))  Right;

 System::Collections::Generic::NodeColor __declspec(property(get=get_Color, put=set_Color))  Color;

 bool __declspec(property(get=get_IsBlack))  IsBlack;

 bool __declspec(property(get=get_IsRed))  IsRed;

 bool __declspec(property(get=get_Is2Node))  Is2Node;

 bool __declspec(property(get=get_Is4Node))  Is4Node;


// Methods

// Ctor Parameters [CppParam { name: "item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "color", ty: "System::Collections::Generic::NodeColor", modifiers: "", def_value: None }]
explicit System__Collections__Generic__SortedSet_1__Node(T item, System::Collections::Generic::NodeColor color) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T item, System::Collections::Generic::NodeColor color) ;

/// @brief Method IsNonNullRed addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsNonNullRed(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

/// @brief Method IsNullOrBlack addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsNullOrBlack(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item() ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(T value) ;

/// @brief Method get_Left addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> get_Left() ;

/// @brief Method set_Left addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Left(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

/// @brief Method get_Right addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> get_Right() ;

/// @brief Method set_Right addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Right(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

/// @brief Method get_Color addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::NodeColor get_Color() ;

/// @brief Method set_Color addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Color(System::Collections::Generic::NodeColor value) ;

/// @brief Method get_IsBlack addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsBlack() ;

/// @brief Method get_IsRed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsRed() ;

/// @brief Method get_Is2Node addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Is2Node() ;

/// @brief Method get_Is4Node addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Is4Node() ;

/// @brief Method ColorBlack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ColorBlack() ;

/// @brief Method ColorRed addr 0x0 size 0xffffffffffffffff virtual false final false
 void ColorRed() ;

/// @brief Method GetRotation addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::TreeRotation GetRotation(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> sibling) ;

/// @brief Method GetSibling addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> GetSibling(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

/// @brief Method Split4Node addr 0x0 size 0xffffffffffffffff virtual false final false
 void Split4Node() ;

/// @brief Method Rotate addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> Rotate(System::Collections::Generic::TreeRotation rotation) ;

/// @brief Method RotateLeft addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> RotateLeft() ;

/// @brief Method RotateLeftRight addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> RotateLeftRight() ;

/// @brief Method RotateRight addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> RotateRight() ;

/// @brief Method RotateRightLeft addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> RotateRightLeft() ;

/// @brief Method Merge2Nodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge2Nodes() ;

/// @brief Method ReplaceChild addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceChild(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Node
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8387))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8387), inst: 729 })
// CS Name: System.Collections.Generic.SortedSet`1::Node
class CORDL_TYPE System__Collections__Generic__SortedSet_1__Node<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__SortedSet_1__Node() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1__Node", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Node(System__Collections__Generic__SortedSet_1__Node const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1__Node", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Node(System__Collections__Generic__SortedSet_1__Node&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1__Node(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(System__Collections__Generic__SortedSet_1__Node&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1__Node& operator=(System__Collections__Generic__SortedSet_1__Node const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__Item_k__BackingField, put=__set__Item_k__BackingField))  _Item_k__BackingField;

constexpr void __set__Item_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__Item_k__BackingField() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=__get__Left_k__BackingField, put=__set__Left_k__BackingField))  _Left_k__BackingField;

constexpr void __set__Left_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __get__Left_k__BackingField() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=__get__Right_k__BackingField, put=__set__Right_k__BackingField))  _Right_k__BackingField;

constexpr void __set__Right_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __get__Right_k__BackingField() const;

 System::Collections::Generic::NodeColor __declspec(property(get=__get__Color_k__BackingField, put=__set__Color_k__BackingField))  _Color_k__BackingField;

constexpr void __set__Color_k__BackingField(System::Collections::Generic::NodeColor value) ;

constexpr System::Collections::Generic::NodeColor __get__Color_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=get_Left, put=set_Left))  Left;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=get_Right, put=set_Right))  Right;

 System::Collections::Generic::NodeColor __declspec(property(get=get_Color, put=set_Color))  Color;

 bool __declspec(property(get=get_IsBlack))  IsBlack;

 bool __declspec(property(get=get_IsRed))  IsRed;

 bool __declspec(property(get=get_Is2Node))  Is2Node;

 bool __declspec(property(get=get_Is4Node))  Is4Node;


// Methods

// Ctor Parameters [CppParam { name: "item", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "System::Collections::Generic::NodeColor", modifiers: "", def_value: None }]
explicit System__Collections__Generic__SortedSet_1__Node(uint32_t item, System::Collections::Generic::NodeColor color) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint32_t item, System::Collections::Generic::NodeColor color) ;

/// @brief Method IsNonNullRed addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsNonNullRed(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

/// @brief Method IsNullOrBlack addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsNullOrBlack(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t get_Item() ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(uint32_t value) ;

/// @brief Method get_Left addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> get_Left() ;

/// @brief Method set_Left addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Left(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

/// @brief Method get_Right addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> get_Right() ;

/// @brief Method set_Right addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Right(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

/// @brief Method get_Color addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::NodeColor get_Color() ;

/// @brief Method set_Color addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Color(System::Collections::Generic::NodeColor value) ;

/// @brief Method get_IsBlack addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsBlack() ;

/// @brief Method get_IsRed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsRed() ;

/// @brief Method get_Is2Node addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Is2Node() ;

/// @brief Method get_Is4Node addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Is4Node() ;

/// @brief Method ColorBlack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ColorBlack() ;

/// @brief Method ColorRed addr 0x0 size 0xffffffffffffffff virtual false final false
 void ColorRed() ;

/// @brief Method GetRotation addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::TreeRotation GetRotation(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> current, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> sibling) ;

/// @brief Method GetSibling addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> GetSibling(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

/// @brief Method Split4Node addr 0x0 size 0xffffffffffffffff virtual false final false
 void Split4Node() ;

/// @brief Method Rotate addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> Rotate(System::Collections::Generic::TreeRotation rotation) ;

/// @brief Method RotateLeft addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> RotateLeft() ;

/// @brief Method RotateLeftRight addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> RotateLeftRight() ;

/// @brief Method RotateRight addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> RotateRight() ;

/// @brief Method RotateRightLeft addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> RotateRightLeft() ;

/// @brief Method Merge2Nodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge2Nodes() ;

/// @brief Method ReplaceChild addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceChild(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> newChild) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8388)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8388), inst: 2 })
// CS Name: System.Collections.Generic.SortedSet`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__SortedSet_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_tree", ty: "System::Collections::Generic::SortedSet_1<T>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>", modifiers: "", def_value: None }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Enumerator(System::Collections::Generic::SortedSet_1<T> _tree, int32_t _version, System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> _stack, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> _current, bool _reverse) noexcept;


                    constexpr System__Collections__Generic__SortedSet_1__Enumerator(System__Collections__Generic__SortedSet_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator(System__Collections__Generic__SortedSet_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator& operator=(System__Collections__Generic__SortedSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator& operator=(System__Collections__Generic__SortedSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=__get_s_dummyNode, put=__set_s_dummyNode))  s_dummyNode;

static void __set_s_dummyNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

static System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __get_s_dummyNode() ;

 System::Collections::Generic::SortedSet_1<T> __declspec(property(get=__get__tree, put=__set__tree))  _tree;

constexpr void __set__tree(System::Collections::Generic::SortedSet_1<T> value) ;

constexpr System::Collections::Generic::SortedSet_1<T> __get__tree() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> value) ;

constexpr System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> __get__stack() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __get__current() const;

 bool __declspec(property(get=__get__reverse, put=__set__reverse))  _reverse;

constexpr void __set__reverse(bool value) ;

constexpr bool __get__reverse() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::SortedSet_1<T> set) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::SortedSet_1<T> set, bool reverse) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Initialize() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
 void Reset() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8388), inst: 729 })
// CS Name: System.Collections.Generic.SortedSet`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__SortedSet_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint32_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint32_t>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_tree", ty: "System::Collections::Generic::SortedSet_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>>", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1__Enumerator(System::Collections::Generic::SortedSet_1<uint32_t> _tree, int32_t _version, System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>> _stack, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> _current, bool _reverse) noexcept;


                    constexpr System__Collections__Generic__SortedSet_1__Enumerator(System__Collections__Generic__SortedSet_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator(System__Collections__Generic__SortedSet_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator& operator=(System__Collections__Generic__SortedSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__SortedSet_1__Enumerator& operator=(System__Collections__Generic__SortedSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=__get_s_dummyNode, put=__set_s_dummyNode))  s_dummyNode;

static void __set_s_dummyNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

static System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __get_s_dummyNode() ;

 System::Collections::Generic::SortedSet_1<uint32_t> __declspec(property(get=__get__tree, put=__set__tree))  _tree;

constexpr void __set__tree(System::Collections::Generic::SortedSet_1<uint32_t> value) ;

constexpr System::Collections::Generic::SortedSet_1<uint32_t> __get__tree() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>> value) ;

constexpr System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>> __get__stack() const;

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __get__current() const;

 bool __declspec(property(get=__get__reverse, put=__set__reverse))  _reverse;

constexpr void __set__reverse(bool value) ;

constexpr bool __get__reverse() const;


// Properties

 uint32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::SortedSet_1<uint32_t> set) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::SortedSet_1<uint32_t> set, bool reverse) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Initialize() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
 void Reset() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8390))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8390), inst: 2 })
// CS Name: System.Collections.Generic.SortedSet`1::<>c__DisplayClass52_0
class CORDL_TYPE System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__SortedSet_1____c__DisplayClass52_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass52_0", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::ArrayW<T> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get_array() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__SortedSet_1____c__DisplayClass52_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8390))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8390), inst: 729 })
// CS Name: System.Collections.Generic.SortedSet`1::<>c__DisplayClass52_0
class CORDL_TYPE System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__SortedSet_1____c__DisplayClass52_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass52_0", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1____c__DisplayClass52_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass52_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass52_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_array() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__SortedSet_1____c__DisplayClass52_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass53_0
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8391))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8391), inst: 2 })
// CS Name: System.Collections.Generic.SortedSet`1::<>c__DisplayClass53_0
class CORDL_TYPE System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__Generic__SortedSet_1____c__DisplayClass53_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass53_0", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_objects, put=__set_objects))  objects;

constexpr void __set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_objects() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__SortedSet_1____c__DisplayClass53_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <System.Collections.ICollection.CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _System_Collections_ICollection_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass53_0
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8391))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8391), inst: 729 })
// CS Name: System.Collections.Generic.SortedSet`1::<>c__DisplayClass53_0
class CORDL_TYPE System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__Generic__SortedSet_1____c__DisplayClass53_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass53_0", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__SortedSet_1____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__SortedSet_1____c__DisplayClass53_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0&& o) noexcept = default;
  constexpr System__Collections__Generic__SortedSet_1____c__DisplayClass53_0& operator=(System__Collections__Generic__SortedSet_1____c__DisplayClass53_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_objects, put=__set_objects))  objects;

constexpr void __set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_objects() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__SortedSet_1____c__DisplayClass53_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <System.Collections.ICollection.CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _System_Collections_ICollection_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::SortedSet`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8392))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8392), inst: 2 })
// CS Name: System.Collections.Generic.SortedSet`1
class CORDL_TYPE SortedSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass53_0 = System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>;

using __c__DisplayClass52_0 = System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>;

using ElementCount = System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T>;

using Enumerator = System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>;

using Node = System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SortedSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: " const&", def_value: None }]
constexpr SortedSet_1(SortedSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "&&", def_value: None }]
constexpr SortedSet_1(SortedSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortedSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortedSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortedSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortedSet_1& operator=(SortedSet_1&& o) noexcept = default;
  constexpr SortedSet_1& operator=(SortedSet_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> __get_root() const;

 System::Collections::Generic::IComparer_1<T> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<T> value) ;

constexpr System::Collections::Generic::IComparer_1<T> __get_comparer() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_siInfo, put=__set_siInfo))  siInfo;

constexpr void __set_siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get_siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IComparer_1<T> __declspec(property(get=get_Comparer))  Comparer;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit SortedSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SortedSet_1(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InOrderTreeWalk addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InOrderTreeWalk(System::Collections::Generic::TreeWalkPredicate_1<T> action) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IComparer_1<T> get_Comparer() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method VersionCheck addr 0x0 size 0xffffffffffffffff virtual true final false
 void VersionCheck() ;

/// @brief Method IsWithinRange addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsWithinRange(T item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(T item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(T item) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AddIfNotPresent(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method DoRemove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool DoRemove(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<T> array, int32_t index, int32_t count) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method InsertionBalance addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertionBalance(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> grandParent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> greatGrandParent) ;

/// @brief Method ReplaceChildOrRoot addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceChildOrRoot(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild) ;

/// @brief Method ReplaceNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> match, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfMatch, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> successor, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfSuccessor) ;

/// @brief Method FindNode addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> FindNode(T item) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t InternalIndexOf(T item) ;

/// @brief Method HasEqualComparer addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasEqualComparer(System::Collections::Generic::SortedSet_1<T> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(System::Collections::Generic::IEnumerable_1<T> other, bool returnIfUnfound) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Log2 addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t Log2(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::SortedSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8392))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8392), inst: 729 })
// CS Name: System.Collections.Generic.SortedSet`1
class CORDL_TYPE SortedSet_1<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass53_0 = System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>;

using __c__DisplayClass52_0 = System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>;

using ElementCount = System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<uint32_t>;

using Enumerator = System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>;

using Node = System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<uint32_t>
constexpr operator  System::Collections::Generic::ICollection_1<uint32_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint32_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint32_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<uint32_t>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<uint32_t>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SortedSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: " const&", def_value: None }]
constexpr SortedSet_1(SortedSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "&&", def_value: None }]
constexpr SortedSet_1(SortedSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortedSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortedSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortedSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortedSet_1& operator=(SortedSet_1&& o) noexcept = default;
  constexpr SortedSet_1& operator=(SortedSet_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> __get_root() const;

 System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<uint32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<uint32_t> __get_comparer() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_siInfo, put=__set_siInfo))  siInfo;

constexpr void __set_siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get_siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=get_Comparer))  Comparer;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit SortedSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SortedSet_1(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InOrderTreeWalk addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InOrderTreeWalk(System::Collections::Generic::TreeWalkPredicate_1<uint32_t> action) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IComparer_1<uint32_t> get_Comparer() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method VersionCheck addr 0x0 size 0xffffffffffffffff virtual true final false
 void VersionCheck() ;

/// @brief Method IsWithinRange addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsWithinRange(uint32_t item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(uint32_t item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(uint32_t item) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AddIfNotPresent(uint32_t item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(uint32_t item) ;

/// @brief Method DoRemove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool DoRemove(uint32_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(uint32_t item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<uint32_t> array, int32_t index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<uint32_t> array, int32_t index, int32_t count) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method InsertionBalance addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertionBalance(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> current, ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t>> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> grandParent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> greatGrandParent) ;

/// @brief Method ReplaceChildOrRoot addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceChildOrRoot(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> newChild) ;

/// @brief Method ReplaceNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReplaceNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> match, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> parentOfMatch, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> successor, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> parentOfSuccessor) ;

/// @brief Method FindNode addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> FindNode(uint32_t item) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t InternalIndexOf(uint32_t item) ;

/// @brief Method HasEqualComparer addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasEqualComparer(System::Collections::Generic::SortedSet_1<uint32_t> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<uint32_t> CheckUniqueAndUnfoundElements(System::Collections::Generic::IEnumerable_1<uint32_t> other, bool returnIfUnfound) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Log2 addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t Log2(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::SortedSet_1, "System.Collections.Generic", "SortedSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node, "System.Collections.Generic", "SortedSet`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator, "System.Collections.Generic", "SortedSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount, "System.Collections.Generic", "SortedSet`1/ElementCount");
