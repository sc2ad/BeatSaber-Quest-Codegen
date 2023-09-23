#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class ITupleInternal;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class IComparable;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
class Tuple_4<T1,T2,T3,T4>;
}
namespace System {
template<>
class Tuple_4<int32_t,int32_t,int32_t,bool>;
}
// Type: System::Tuple`4
// Type: System::Tuple`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2491), inst: 5023 })
// CS Name: System.Tuple`4
class CORDL_TYPE Tuple_4<int32_t,int32_t,int32_t,bool> : public ::bs_hook::Il2CppWrapperType {
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

virtual ~Tuple_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_4", modifiers: " const&", def_value: None }]
constexpr Tuple_4(Tuple_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_4", modifiers: "&&", def_value: None }]
constexpr Tuple_4(Tuple_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_4& operator=(Tuple_4&& o) noexcept = default;
  constexpr Tuple_4& operator=(Tuple_4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(int32_t value) ;

constexpr int32_t __get_m_Item1() const;

 int32_t __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(int32_t value) ;

constexpr int32_t __get_m_Item2() const;

 int32_t __declspec(property(get=__get_m_Item3, put=__set_m_Item3))  m_Item3;

constexpr void __set_m_Item3(int32_t value) ;

constexpr int32_t __get_m_Item3() const;

 bool __declspec(property(get=__get_m_Item4, put=__set_m_Item4))  m_Item4;

constexpr void __set_m_Item4(bool value) ;

constexpr bool __get_m_Item4() const;


// Properties

 int32_t __declspec(property(get=get_Item1))  Item1;

 int32_t __declspec(property(get=get_Item2))  Item2;

 int32_t __declspec(property(get=get_Item3))  Item3;

 bool __declspec(property(get=get_Item4))  Item4;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item2() ;

/// @brief Method get_Item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item3() ;

/// @brief Method get_Item4 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Item4() ;

// Ctor Parameters [CppParam { name: "item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item4", ty: "bool", modifiers: "", def_value: None }]
explicit Tuple_4(int32_t item1, int32_t item2, int32_t item3, bool item4) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t item1, int32_t item2, int32_t item3, bool item4) ;

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
// Type: System::Tuple`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2491), inst: 5937 })
// CS Name: System.Tuple`4
class CORDL_TYPE Tuple_4<T1,T2,T3,T4> : public ::bs_hook::Il2CppWrapperType {
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

virtual ~Tuple_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_4", modifiers: " const&", def_value: None }]
constexpr Tuple_4(Tuple_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_4", modifiers: "&&", def_value: None }]
constexpr Tuple_4(Tuple_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple_4& operator=(Tuple_4&& o) noexcept = default;
  constexpr Tuple_4& operator=(Tuple_4 const& o) noexcept = default;
                


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

 T4 __declspec(property(get=__get_m_Item4, put=__set_m_Item4))  m_Item4;

constexpr void __set_m_Item4(T4 value) ;

constexpr T4 __get_m_Item4() const;


// Properties

 T1 __declspec(property(get=get_Item1))  Item1;

 T2 __declspec(property(get=get_Item2))  Item2;

 T3 __declspec(property(get=get_Item3))  Item3;

 T4 __declspec(property(get=get_Item4))  Item4;

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_Item2() ;

/// @brief Method get_Item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_Item3() ;

/// @brief Method get_Item4 addr 0x0 size 0xffffffffffffffff virtual false final false
 T4 get_Item4() ;

// Ctor Parameters [CppParam { name: "item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "item3", ty: "T3", modifiers: "", def_value: None }, CppParam { name: "item4", ty: "T4", modifiers: "", def_value: None }]
explicit Tuple_4(T1 item1, T2 item2, T3 item3, T4 item4) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2, T3 item3, T4 item4) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_4, "System", "Tuple`4");
