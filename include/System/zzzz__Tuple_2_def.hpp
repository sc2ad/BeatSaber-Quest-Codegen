#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
class IComparable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class ITupleInternal;
}
namespace System {
struct Guid;
}
namespace System {
struct Int32Enum;
}
namespace System {
struct ByteEnum;
}
namespace System {
struct UInt16Enum;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<float_t,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<::System::Guid,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<::System::Int32Enum,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<::System::ByteEnum,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Tuple_2<T1,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Tuple_2<::System::UInt16Enum,T2>;
}
namespace System {
template<>
class Tuple_2<::System::Int32Enum,::System::Int32Enum>;
}
namespace System {
template<>
class Tuple_2<int32_t,int32_t>;
}
// Type: System::Tuple`2
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 80 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<T1,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 T1 __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(T1 item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 511 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<int32_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(int32_t value) ;

constexpr int32_t __get_m_Item1() const;

 int32_t __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(int32_t value) ;

constexpr int32_t __get_m_Item2() const;


// Properties

 int32_t __declspec(property(get=get_Item1))  Item1;

 int32_t __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "int32_t", modifiers: "", def_value: None }]
explicit Tuple_2(int32_t item1, int32_t item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t item1, int32_t item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 1529 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<::System::Guid,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 ::System::Guid __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(::System::Guid value) ;

constexpr ::System::Guid __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 ::System::Guid __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Guid get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(::System::Guid item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Guid item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 1535 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<::System::Int32Enum,::System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 ::System::Int32Enum __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_m_Item1() const;

 ::System::Int32Enum __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_m_Item2() const;


// Properties

 ::System::Int32Enum __declspec(property(get=get_Item1))  Item1;

 ::System::Int32Enum __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "::System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "::System::Int32Enum", modifiers: "", def_value: None }]
explicit Tuple_2(::System::Int32Enum item1, ::System::Int32Enum item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Int32Enum item1, ::System::Int32Enum item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 1536 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<::System::Int32Enum,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 ::System::Int32Enum __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 ::System::Int32Enum __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "::System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(::System::Int32Enum item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Int32Enum item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 1553 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<T1,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 float_t __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(float_t value) ;

constexpr float_t __get_m_Item2() const;


// Properties

 T1 __declspec(property(get=get_Item1))  Item1;

 float_t __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "float_t", modifiers: "", def_value: None }]
explicit Tuple_2(T1 item1, float_t item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, float_t item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 1568 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<float_t,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(float_t value) ;

constexpr float_t __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 float_t __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(float_t item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 5944 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<::System::ByteEnum,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 ::System::ByteEnum __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(::System::ByteEnum value) ;

constexpr ::System::ByteEnum __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 ::System::ByteEnum __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ByteEnum get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "::System::ByteEnum", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(::System::ByteEnum item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ByteEnum item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2489))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2489), inst: 7353 })
// CS Name: System.Tuple`2
class CORDL_TYPE Tuple_2<::System::UInt16Enum,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IStructuralEquatable
constexpr operator  ::System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to ::System::Collections::IStructuralComparable
constexpr operator  ::System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::ITupleInternal
constexpr operator  ::System::ITupleInternal() const noexcept;

/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr operator  ::System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tuple_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: " const&", def_value: None }]
constexpr Tuple_2(Tuple_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
constexpr Tuple_2(Tuple_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_2& operator=(Tuple_2&& o) noexcept = default;
  constexpr Tuple_2& operator=(Tuple_2 const& o) noexcept = default;
                


// Fields

 ::System::UInt16Enum __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(::System::UInt16Enum value) ;

constexpr ::System::UInt16Enum __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;


// Properties

 ::System::UInt16Enum __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::UInt16Enum get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

// Ctor Parameters [CppParam { name: "item1", ty: "::System::UInt16Enum", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }]
explicit Tuple_2(::System::UInt16Enum item1, T2 item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::UInt16Enum item1, T2 item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Tuple_2, "System", "Tuple`2");
