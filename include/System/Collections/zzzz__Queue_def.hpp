#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Collections {
class Queue;
}
namespace System::Collections {
class ____System__Collections__Queue__QueueDebugView;
}
namespace System::Collections {
class ____System__Collections__Queue__QueueEnumerator;
}
// Type: ::QueueEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3759))
// CS Name: System.Collections.Queue::QueueEnumerator
class CORDL_TYPE ____System__Collections__Queue__QueueEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Collections__Queue__QueueEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Queue__QueueEnumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Queue__QueueEnumerator(____System__Collections__Queue__QueueEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Queue__QueueEnumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Queue__QueueEnumerator(____System__Collections__Queue__QueueEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Queue__QueueEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Queue__QueueEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Queue__QueueEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Queue__QueueEnumerator& operator=(____System__Collections__Queue__QueueEnumerator&& o) noexcept = default;
  constexpr ____System__Collections__Queue__QueueEnumerator& operator=(____System__Collections__Queue__QueueEnumerator const& o) noexcept = default;
                


// Fields

 ::System::Collections::Queue __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Queue value) ;

constexpr ::System::Collections::Queue __get__q() const;

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

// Ctor Parameters [CppParam { name: "q", ty: "::System::Collections::Queue", modifiers: "", def_value: None }]
explicit ____System__Collections__Queue__QueueEnumerator(::System::Collections::Queue q) ;

/// @brief Method .ctor addr 0x2411a64 size 0x50 virtual false final false
 void _ctor(::System::Collections::Queue q) ;

/// @brief Method Clone addr 0x2411c54 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method MoveNext addr 0x2411c5c size 0xc8 virtual true final false
 bool MoveNext() ;

/// @brief Method get_Current addr 0x2411d24 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method Reset addr 0x2411db8 size 0x8c virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::QueueDebugView
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3760))
// CS Name: System.Collections.Queue::QueueDebugView
class CORDL_TYPE ____System__Collections__Queue__QueueDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Collections__Queue__QueueDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Queue__QueueDebugView", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Queue__QueueDebugView(____System__Collections__Queue__QueueDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Queue__QueueDebugView", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Queue__QueueDebugView(____System__Collections__Queue__QueueDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Queue__QueueDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Queue__QueueDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Queue__QueueDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Queue__QueueDebugView& operator=(____System__Collections__Queue__QueueDebugView&& o) noexcept = default;
  constexpr ____System__Collections__Queue__QueueDebugView& operator=(____System__Collections__Queue__QueueDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: System.Collections::Queue
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3761))
// CS Name: System.Collections.Queue
class CORDL_TYPE Queue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using QueueDebugView = ::System::Collections::____System__Collections__Queue__QueueDebugView;

using QueueEnumerator = ::System::Collections::____System__Collections__Queue__QueueEnumerator;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Queue() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue", modifiers: " const&", def_value: None }]
constexpr Queue(Queue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue", modifiers: "&&", def_value: None }]
constexpr Queue(Queue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue& operator=(Queue&& o) noexcept = default;
  constexpr Queue& operator=(Queue const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__growFactor, put=__set__growFactor))  _growFactor;

constexpr void __set__growFactor(int32_t value) ;

constexpr int32_t __get__growFactor() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue() ;

/// @brief Method .ctor addr 0x2411078 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue(int32_t capacity) ;

/// @brief Method .ctor addr 0x2411244 size 0x8 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "growFactor", ty: "float_t", modifiers: "", def_value: None }]
explicit Queue(int32_t capacity, float_t growFactor) ;

/// @brief Method .ctor addr 0x2411084 size 0x1c0 virtual false final false
 void _ctor(int32_t capacity, float_t growFactor) ;

// Ctor Parameters [CppParam { name: "col", ty: "::System::Collections::ICollection", modifiers: "", def_value: None }]
explicit Queue(::System::Collections::ICollection col) ;

/// @brief Method .ctor addr 0x241124c size 0x26c virtual false final false
 void _ctor(::System::Collections::ICollection col) ;

/// @brief Method get_Count addr 0x24114b8 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method Clone addr 0x24114c0 size 0xe4 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_IsSynchronized addr 0x24115a4 size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x24115ac size 0x7c virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x2411628 size 0x1f4 virtual true final false
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x241181c size 0xfc virtual true final false
 void Enqueue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetEnumerator addr 0x2411a04 size 0x60 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method Dequeue addr 0x2411ab4 size 0xcc virtual true final false
 ::bs_hook::Il2CppWrapperType Dequeue() ;

/// @brief Method Peek addr 0x2411b80 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType Peek() ;

/// @brief Method GetElement addr 0x2411c14 size 0x40 virtual false final false
 ::bs_hook::Il2CppWrapperType GetElement(int32_t i) ;

/// @brief Method SetCapacity addr 0x2411918 size 0xec virtual false final false
 void SetCapacity(int32_t capacity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Queue, "System.Collections", "Queue");
NEED_NO_BOX(::System::Collections::____System__Collections__Queue__QueueDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::____System__Collections__Queue__QueueDebugView, "System.Collections", "Queue/QueueDebugView");
NEED_NO_BOX(::System::Collections::____System__Collections__Queue__QueueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::____System__Collections__Queue__QueueEnumerator, "System.Collections", "Queue/QueueEnumerator");
