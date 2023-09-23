#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class IComparable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IComparer;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
class ITupleInternal;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class Tuple_3<T1,T2,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
class Tuple_3<T1,System::Memory_1<uint8_t>,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3>
class Tuple_3<System::Int32Enum,System::Int32Enum,T3>;
}
// Type: System::Tuple`3
// Type: System::Tuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 5152 })
// CS Name: System.Tuple`3
class CORDL_TYPE Tuple_3<System::Int32Enum,System::Int32Enum,T3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief Convert operator to System::ITupleInternal
constexpr operator  System::ITupleInternal() const noexcept;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Tuple_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: " const&", def_value: None }]
constexpr Tuple_3(Tuple_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: "&&", def_value: None }]
constexpr Tuple_3(Tuple_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_3& operator=(Tuple_3&& o) noexcept = default;
  constexpr Tuple_3& operator=(Tuple_3 const& o) noexcept = default;
                


// Fields

 System::Int32Enum __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(System::Int32Enum value) ;

constexpr System::Int32Enum __get_m_Item1() const;

 System::Int32Enum __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(System::Int32Enum value) ;

constexpr System::Int32Enum __get_m_Item2() const;

 T3 __declspec(property(get=__get_m_Item3, put=__set_m_Item3))  m_Item3;

constexpr void __set_m_Item3(T3 value) ;

constexpr T3 __get_m_Item3() const;


// Properties

 System::Int32Enum __declspec(property(get=get_Item1))  Item1;

 System::Int32Enum __declspec(property(get=get_Item2))  Item2;

 T3 __declspec(property(get=get_Item3))  Item3;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum get_Item2() ;

/// @brief Method get_Item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_Item3() ;

// Ctor Parameters [CppParam { name: "item1", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "item3", ty: "T3", modifiers: "", def_value: None }]
explicit Tuple_3(System::Int32Enum item1, System::Int32Enum item2, T3 item3) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Int32Enum item1, System::Int32Enum item2, T3 item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 5155 })
// CS Name: System.Tuple`3
class CORDL_TYPE Tuple_3<T1,T2,T3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief Convert operator to System::ITupleInternal
constexpr operator  System::ITupleInternal() const noexcept;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Tuple_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: " const&", def_value: None }]
constexpr Tuple_3(Tuple_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: "&&", def_value: None }]
constexpr Tuple_3(Tuple_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_3& operator=(Tuple_3&& o) noexcept = default;
  constexpr Tuple_3& operator=(Tuple_3 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 T2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(T2 value) ;

constexpr T2 __get_m_Item2() const;

 T3 __declspec(property(get=__get_m_Item3, put=__set_m_Item3))  m_Item3;

constexpr void __set_m_Item3(T3 value) ;

constexpr T3 __get_m_Item3() const;


// Properties

 T1 __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 T3 __declspec(property(get=get_Item3))  Item3;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

/// @brief Method get_Item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_Item3() ;

// Ctor Parameters [CppParam { name: "item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "item3", ty: "T3", modifiers: "", def_value: None }]
explicit Tuple_3(T1 item1, T2 item2, T3 item3) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2, T3 item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 7508 })
// CS Name: System.Tuple`3
class CORDL_TYPE Tuple_3<T1,System::Memory_1<uint8_t>,T3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const noexcept;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief Convert operator to System::ITupleInternal
constexpr operator  System::ITupleInternal() const noexcept;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Tuple_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: " const&", def_value: None }]
constexpr Tuple_3(Tuple_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: "&&", def_value: None }]
constexpr Tuple_3(Tuple_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_3& operator=(Tuple_3&& o) noexcept = default;
  constexpr Tuple_3& operator=(Tuple_3 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 System::Memory_1<uint8_t> __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(System::Memory_1<uint8_t> value) ;

constexpr System::Memory_1<uint8_t> __get_m_Item2() const;

 T3 __declspec(property(get=__get_m_Item3, put=__set_m_Item3))  m_Item3;

constexpr void __set_m_Item3(T3 value) ;

constexpr T3 __get_m_Item3() const;


// Properties

 T1 __declspec(property(get=get_Item1))  Item1;

 System::Memory_1<uint8_t> __declspec(property(get=get_Item2))  Item2;

 T3 __declspec(property(get=get_Item3))  Item3;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Memory_1<uint8_t> get_Item2() ;

/// @brief Method get_Item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_Item3() ;

// Ctor Parameters [CppParam { name: "item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "item3", ty: "T3", modifiers: "", def_value: None }]
explicit Tuple_3(T1 item1, System::Memory_1<uint8_t> item2, T3 item3) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, System::Memory_1<uint8_t> item2, T3 item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_ITupleInternal_ToString(System::Text::StringBuilder sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_3, "System", "Tuple`3");
