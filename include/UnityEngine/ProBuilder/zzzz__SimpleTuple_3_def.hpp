#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2,typename T3>
struct SimpleTuple_3;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
struct SimpleTuple_3<T1,T2,T3>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T3>
struct SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,T3>;
}
// Type: UnityEngine.ProBuilder::SimpleTuple`3
// Type: UnityEngine.ProBuilder::SimpleTuple`3
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12144)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12144), inst: 5155 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`3
struct CORDL_TYPE SimpleTuple_3<T1,T2,T3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "m_Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr SimpleTuple_3(T1 m_Item1, T2 m_Item2, T3 m_Item3) noexcept;


                    constexpr SimpleTuple_3(SimpleTuple_3 const&) = default;
                    constexpr SimpleTuple_3(SimpleTuple_3&&) = default;
                    constexpr SimpleTuple_3& operator=(SimpleTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_3& operator=(SimpleTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


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

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 T2 __declspec(property(get=get_item2, put=set_item2))  item2;

 T3 __declspec(property(get=get_item3, put=set_item3))  item3;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(T2 value) ;

/// @brief Method get_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_item3() ;

/// @brief Method set_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item3(T3 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2, T3 item3) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`3
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12144)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12144), inst: 4823 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`3
struct CORDL_TYPE SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,T3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr SimpleTuple_3(UnityEngine::Vector3 m_Item1, UnityEngine::Vector3 m_Item2, T3 m_Item3) noexcept;


                    constexpr SimpleTuple_3(SimpleTuple_3 const&) = default;
                    constexpr SimpleTuple_3(SimpleTuple_3&&) = default;
                    constexpr SimpleTuple_3& operator=(SimpleTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_3& operator=(SimpleTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Item1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Item2() const;

 T3 __declspec(property(get=__get_m_Item3, put=__set_m_Item3))  m_Item3;

constexpr void __set_m_Item3(T3 value) ;

constexpr T3 __get_m_Item3() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_item1, put=set_item1))  item1;

 UnityEngine::Vector3 __declspec(property(get=get_item2, put=set_item2))  item2;

 T3 __declspec(property(get=get_item3, put=set_item3))  item3;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(UnityEngine::Vector3 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(UnityEngine::Vector3 value) ;

/// @brief Method get_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_item3() ;

/// @brief Method set_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item3(T3 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Vector3 item1, UnityEngine::Vector3 item2, T3 item3) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::SimpleTuple_3, "UnityEngine.ProBuilder", "SimpleTuple`3");
