#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace ModestTree::Util {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class ValuePair_2<T1,T2>;
}
namespace ModestTree::Util {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class ValuePair_2<T1,T2>;
}
// Type: ModestTree.Util::ValuePair`2
// Type: ModestTree.Util::ValuePair`2
namespace ModestTree::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10568))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10568), inst: 1548 })
// CS Name: ModestTree.Util.ValuePair`2
class CORDL_TYPE ValuePair_2<T1,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValuePair_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: " const&", def_value: None }]
constexpr ValuePair_2(ValuePair_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "&&", def_value: None }]
constexpr ValuePair_2(ValuePair_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValuePair_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValuePair_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValuePair_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValuePair_2& operator=(ValuePair_2&& o) noexcept = default;
  constexpr ValuePair_2& operator=(ValuePair_2 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_First, put=__set_First))  First;

constexpr void __set_First(T1 value) ;

constexpr T1 __get_First() const;

 T2 __declspec(property(get=__get_Second, put=__set_Second))  Second;

constexpr void __set_Second(T2 value) ;

constexpr T2 __get_Second() const;


// Methods

static ModestTree::Util::ValuePair_2<T1,T2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static ModestTree::Util::ValuePair_2<T1,T2> New_ctor(T1 first, T2 second) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 first, T2 second) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ModestTree::Util::ValuePair_2<T1,T2> that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ModestTree.Util::ValuePair`2
namespace ModestTree::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10568))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10568), inst: 80 })
// CS Name: ModestTree.Util.ValuePair`2
class CORDL_TYPE ValuePair_2<T1,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValuePair_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: " const&", def_value: None }]
constexpr ValuePair_2(ValuePair_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "&&", def_value: None }]
constexpr ValuePair_2(ValuePair_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValuePair_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValuePair_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValuePair_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValuePair_2& operator=(ValuePair_2&& o) noexcept = default;
  constexpr ValuePair_2& operator=(ValuePair_2 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_First, put=__set_First))  First;

constexpr void __set_First(T1 value) ;

constexpr T1 __get_First() const;

 T2 __declspec(property(get=__get_Second, put=__set_Second))  Second;

constexpr void __set_Second(T2 value) ;

constexpr T2 __get_Second() const;


// Methods

static ModestTree::Util::ValuePair_2<T1,T2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static ModestTree::Util::ValuePair_2<T1,T2> New_ctor(T1 first, T2 second) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 first, T2 second) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ModestTree::Util::ValuePair_2<T1,T2> that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_2, "ModestTree.Util", "ValuePair`2");
