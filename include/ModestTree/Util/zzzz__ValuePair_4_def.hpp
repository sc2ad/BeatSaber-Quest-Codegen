#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace ModestTree::Util {
template<typename T1,typename T2,typename T3,typename T4>
class ValuePair_4;
}
namespace ModestTree::Util {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
class ValuePair_4<T1,T2,T3,T4>;
}
// Type: ModestTree.Util::ValuePair`4
// Type: ModestTree.Util::ValuePair`4
namespace ModestTree::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10570))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10570), inst: 5937 })
// CS Name: ModestTree.Util.ValuePair`4
class CORDL_TYPE ValuePair_4<T1,T2,T3,T4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ValuePair_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: " const&", def_value: None }]
constexpr ValuePair_4(ValuePair_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: "&&", def_value: None }]
constexpr ValuePair_4(ValuePair_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValuePair_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValuePair_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValuePair_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValuePair_4& operator=(ValuePair_4&& o) noexcept = default;
  constexpr ValuePair_4& operator=(ValuePair_4 const& o) noexcept = default;
                


// Fields

 T1 __declspec(property(get=__get_First, put=__set_First))  First;

constexpr void __set_First(T1 value) ;

constexpr T1 __get_First() const;

 T2 __declspec(property(get=__get_Second, put=__set_Second))  Second;

constexpr void __set_Second(T2 value) ;

constexpr T2 __get_Second() const;

 T3 __declspec(property(get=__get_Third, put=__set_Third))  Third;

constexpr void __set_Third(T3 value) ;

constexpr T3 __get_Third() const;

 T4 __declspec(property(get=__get_Fourth, put=__set_Fourth))  Fourth;

constexpr void __set_Fourth(T4 value) ;

constexpr T4 __get_Fourth() const;


// Methods

static ModestTree::Util::ValuePair_4<T1,T2,T3,T4> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static ModestTree::Util::ValuePair_4<T1,T2,T3,T4> New_ctor(T1 first, T2 second, T3 third, T4 fourth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 first, T2 second, T3 third, T4 fourth) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ModestTree::Util::ValuePair_4<T1,T2,T3,T4> that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_4, "ModestTree.Util", "ValuePair`4");
