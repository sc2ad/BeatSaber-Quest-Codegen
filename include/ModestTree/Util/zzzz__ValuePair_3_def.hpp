#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace ModestTree::Util {
template<typename T1,typename T2,typename T3>
class ValuePair_3;
}
namespace ModestTree::Util {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class ValuePair_3<T1,T2,T3>;
}
// Type: ModestTree.Util::ValuePair`3
// Type: ModestTree.Util::ValuePair`3
namespace ModestTree::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10569), inst: 5155 })
// CS Name: ModestTree.Util.ValuePair`3
class CORDL_TYPE ValuePair_3<T1,T2,T3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ValuePair_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_3", modifiers: " const&", def_value: None }]
constexpr ValuePair_3(ValuePair_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_3", modifiers: "&&", def_value: None }]
constexpr ValuePair_3(ValuePair_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValuePair_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValuePair_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValuePair_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValuePair_3& operator=(ValuePair_3&& o) noexcept = default;
  constexpr ValuePair_3& operator=(ValuePair_3 const& o) noexcept = default;
                


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


// Methods

// Ctor Parameters []
explicit ValuePair_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "first", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "second", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "third", ty: "T3", modifiers: "", def_value: None }]
explicit ValuePair_3(T1 first, T2 second, T3 third) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 first, T2 second, T3 third) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ModestTree::Util::ValuePair_3<T1,T2,T3> that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_3, "ModestTree.Util", "ValuePair`3");
