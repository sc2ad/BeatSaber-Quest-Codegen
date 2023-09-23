#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::ResourceManagement::Util {
struct UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class LinkedListNode_1<T>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>;
}
// Type: System.Collections.Generic::LinkedListNode`1
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8386), inst: 2 })
// CS Name: System.Collections.Generic.LinkedListNode`1
class CORDL_TYPE LinkedListNode_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedListNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(LinkedListNode_1&& o) noexcept = default;
  constexpr LinkedListNode_1& operator=(LinkedListNode_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<T> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::LinkedList_1<T> value) ;

constexpr System::Collections::Generic::LinkedList_1<T> __get_list() const;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Generic::LinkedListNode_1<T> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<T> __get_next() const;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Collections::Generic::LinkedListNode_1<T> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<T> __get_prev() const;

 T __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(T value) ;

constexpr T __get_item() const;


// Properties

 System::Collections::Generic::LinkedList_1<T> __declspec(property(get=get_List))  List;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=get_Next))  Next;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=get_Previous))  Previous;

 T __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
explicit LinkedListNode_1(T value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T value) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::LinkedList_1<T>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::Collections::Generic::LinkedList_1<T> list, T value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<T> list, T value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedList_1<T> get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(T value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invalidate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8386), inst: 3829 })
// CS Name: System.Collections.Generic.LinkedListNode`1
class CORDL_TYPE LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedListNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(LinkedListNode_1&& o) noexcept = default;
  constexpr LinkedListNode_1& operator=(LinkedListNode_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get_list() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get_next() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get_prev() const;

 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

constexpr UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __get_item() const;


// Properties

 System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=get_List))  List;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=get_Next))  Next;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=get_Previous))  Previous;

 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo", modifiers: "", def_value: None }]
explicit LinkedListNode_1(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> list, UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> list, UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invalidate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8386), inst: 3836 })
// CS Name: System.Collections.Generic.LinkedListNode`1
class CORDL_TYPE LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedListNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(LinkedListNode_1&& o) noexcept = default;
  constexpr LinkedListNode_1& operator=(LinkedListNode_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get_list() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get_next() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get_prev() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __get_item() const;


// Properties

 System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=get_List))  List;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=get_Next))  Next;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=get_Previous))  Previous;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree", modifiers: "", def_value: None }]
explicit LinkedListNode_1(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> list, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> list, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invalidate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8386), inst: 6250 })
// CS Name: System.Collections.Generic.LinkedListNode`1
class CORDL_TYPE LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedListNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(LinkedListNode_1&& o) noexcept = default;
  constexpr LinkedListNode_1& operator=(LinkedListNode_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_list() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_next() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_prev() const;

 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get_item() const;


// Properties

 System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_List))  List;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Next))  Next;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Previous))  Previous;

 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invalidate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8386), inst: 6973 })
// CS Name: System.Collections.Generic.LinkedListNode`1
class CORDL_TYPE LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedListNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNode_1(LinkedListNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNode_1& operator=(LinkedListNode_1&& o) noexcept = default;
  constexpr LinkedListNode_1& operator=(LinkedListNode_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_list() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_next() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_prev() const;

 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get_item() const;


// Properties

 System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_List))  List;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Next))  Next;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Previous))  Previous;

 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit LinkedListNode_1(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invalidate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LinkedListNode_1, "System.Collections.Generic", "LinkedListNode`1");
