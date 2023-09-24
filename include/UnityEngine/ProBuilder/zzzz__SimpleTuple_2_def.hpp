#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
struct SimpleTuple_2<T1,T2>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
struct SimpleTuple_2<T1,T2>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
struct SimpleTuple_2<T1,T2>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T1>
struct SimpleTuple_2<T1,UnityEngine::ProBuilder::Edge>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T1>
struct SimpleTuple_2<T1,UnityEngine::Vector3>;
}
namespace UnityEngine::ProBuilder {
template<>
struct SimpleTuple_2<float_t,UnityEngine::Vector2>;
}
// Type: UnityEngine.ProBuilder::SimpleTuple`2
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12143)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 5141 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<T1,UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1 m_Item1, UnityEngine::Vector3 m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Item2() const;


// Properties

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 UnityEngine::Vector3 __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(UnityEngine::Vector3 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, UnityEngine::Vector3 item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12143)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 4821 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<float_t,UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(float_t m_Item1, UnityEngine::Vector2 m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(float_t value) ;

constexpr float_t __get_m_Item1() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Item2() const;


// Properties

 float_t __declspec(property(get=get_item1, put=set_item1))  item1;

 UnityEngine::Vector2 __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(float_t value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(UnityEngine::Vector2 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t item1, UnityEngine::Vector2 item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12143)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 4817 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<T1,UnityEngine::ProBuilder::Edge> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1 m_Item1, UnityEngine::ProBuilder::Edge m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_m_Item1, put=__set_m_Item1))  m_Item1;

constexpr void __set_m_Item1(T1 value) ;

constexpr T1 __get_m_Item1() const;

 UnityEngine::ProBuilder::Edge __declspec(property(get=__get_m_Item2, put=__set_m_Item2))  m_Item2;

constexpr void __set_m_Item2(UnityEngine::ProBuilder::Edge value) ;

constexpr UnityEngine::ProBuilder::Edge __get_m_Item2() const;


// Properties

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 UnityEngine::ProBuilder::Edge __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ProBuilder::Edge get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(UnityEngine::ProBuilder::Edge value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, UnityEngine::ProBuilder::Edge item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12143)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 1548 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1 m_Item1, T2 m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 T2 __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(T2 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12143)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 511 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1 m_Item1, T2 m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 T2 __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(T2 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12143))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12143), inst: 80 })
// CS Name: UnityEngine.ProBuilder.SimpleTuple`2
struct CORDL_TYPE SimpleTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1 m_Item1, T2 m_Item2) noexcept;


                    constexpr SimpleTuple_2(SimpleTuple_2 const&) = default;
                    constexpr SimpleTuple_2(SimpleTuple_2&&) = default;
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SimpleTuple_2& operator=(SimpleTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SimpleTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

 T1 __declspec(property(get=get_item1, put=set_item1))  item1;

 T2 __declspec(property(get=get_item2, put=set_item2))  item2;


// Methods

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item1(T1 value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_item2(T2 value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::SimpleTuple_2, "UnityEngine.ProBuilder", "SimpleTuple`2");
