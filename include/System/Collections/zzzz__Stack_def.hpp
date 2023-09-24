#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class System__Collections__Stack__StackDebugView;
}
namespace System::Collections {
class System__Collections__Stack__StackEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class ICloneable;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Collections {
class Stack;
}
namespace System::Collections {
class System__Collections__Stack__StackDebugView;
}
namespace System::Collections {
class System__Collections__Stack__StackEnumerator;
}
// Type: ::StackEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3769))
// CS Name: System.Collections.Stack::StackEnumerator
class CORDL_TYPE System__Collections__Stack__StackEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__Stack__StackEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Stack__StackEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Stack__StackEnumerator(System__Collections__Stack__StackEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Stack__StackEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Stack__StackEnumerator(System__Collections__Stack__StackEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Stack__StackEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Stack__StackEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Stack__StackEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Stack__StackEnumerator& operator=(System__Collections__Stack__StackEnumerator&& o) noexcept = default;
  constexpr System__Collections__Stack__StackEnumerator& operator=(System__Collections__Stack__StackEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::Stack __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get__stack() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__currentElement() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

static System::Collections::System__Collections__Stack__StackEnumerator New_ctor(System::Collections::Stack stack) ;

/// @brief Method .ctor addr 0x2415804 size 0x40 virtual false final false
 void _ctor(System::Collections::Stack stack) ;

/// @brief Method Clone addr 0x2415a68 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method MoveNext addr 0x2415a70 size 0xe4 virtual true final false
 bool MoveNext() ;

/// @brief Method get_Current addr 0x2415b54 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method Reset addr 0x2415be8 size 0x80 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::StackDebugView
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3770))
// CS Name: System.Collections.Stack::StackDebugView
class CORDL_TYPE System__Collections__Stack__StackDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__Stack__StackDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Stack__StackDebugView", modifiers: " const&", def_value: None }]
constexpr System__Collections__Stack__StackDebugView(System__Collections__Stack__StackDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Stack__StackDebugView", modifiers: "&&", def_value: None }]
constexpr System__Collections__Stack__StackDebugView(System__Collections__Stack__StackDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Stack__StackDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Stack__StackDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Stack__StackDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Stack__StackDebugView& operator=(System__Collections__Stack__StackDebugView&& o) noexcept = default;
  constexpr System__Collections__Stack__StackDebugView& operator=(System__Collections__Stack__StackDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: System.Collections::Stack
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3771))
// CS Name: System.Collections.Stack
class CORDL_TYPE Stack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StackDebugView = System::Collections::System__Collections__Stack__StackDebugView;

using StackEnumerator = System::Collections::System__Collections__Stack__StackEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Stack() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: " const&", def_value: None }]
constexpr Stack(Stack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: "&&", def_value: None }]
constexpr Stack(Stack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack& operator=(Stack&& o) noexcept = default;
  constexpr Stack& operator=(Stack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field _defaultCapacity offset 0
static constexpr int32_t  _defaultCapacity{10};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static System::Collections::Stack New_ctor() ;

/// @brief Method .ctor addr 0x241527c size 0x5c virtual false final false
 void _ctor() ;

static System::Collections::Stack New_ctor(int32_t initialCapacity) ;

/// @brief Method .ctor addr 0x24152d8 size 0xcc virtual false final false
 void _ctor(int32_t initialCapacity) ;

/// @brief Method get_Count addr 0x24153a4 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x24153ac size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x24153b4 size 0x78 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Clear addr 0x241542c size 0x30 virtual true final false
 void Clear() ;

/// @brief Method Clone addr 0x241545c size 0x90 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method CopyTo addr 0x24154ec size 0x2b8 virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x24157a4 size 0x60 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method Peek addr 0x2415844 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType Peek() ;

/// @brief Method Pop addr 0x24158cc size 0x98 virtual true final false
 ::bs_hook::Il2CppWrapperType Pop() ;

/// @brief Method Push addr 0x2415964 size 0x104 virtual true final false
 void Push(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::Stack);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Stack, "System.Collections", "Stack");
NEED_NO_BOX(System::Collections::System__Collections__Stack__StackDebugView);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Stack__StackDebugView, "System.Collections", "Stack/StackDebugView");
NEED_NO_BOX(System::Collections::System__Collections__Stack__StackEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Stack__StackEnumerator, "System.Collections", "Stack/StackEnumerator");
