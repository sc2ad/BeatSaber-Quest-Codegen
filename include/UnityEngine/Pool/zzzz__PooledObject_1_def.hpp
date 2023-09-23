#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System {
class IDisposable;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type T>
struct PooledObject_1<T>;
}
// Type: UnityEngine.Pool::PooledObject`1
// Type: UnityEngine.Pool::PooledObject`1
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(10381))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10381), inst: 2 })
// CS Name: UnityEngine.Pool.PooledObject`1
struct CORDL_TYPE PooledObject_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Pool", ty: "UnityEngine::Pool::IObjectPool_1<T>", modifiers: "", def_value: None }]
constexpr PooledObject_1(T m_ToReturn, UnityEngine::Pool::IObjectPool_1<T> m_Pool) noexcept;


                    constexpr PooledObject_1(PooledObject_1 const&) = default;
                    constexpr PooledObject_1(PooledObject_1&&) = default;
                    constexpr PooledObject_1& operator=(PooledObject_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PooledObject_1& operator=(PooledObject_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PooledObject_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get_m_ToReturn, put=__set_m_ToReturn))  m_ToReturn;

constexpr void __set_m_ToReturn(T value) ;

constexpr T __get_m_ToReturn() const;

 UnityEngine::Pool::IObjectPool_1<T> __declspec(property(get=__get_m_Pool, put=__set_m_Pool))  m_Pool;

constexpr void __set_m_Pool(UnityEngine::Pool::IObjectPool_1<T> value) ;

constexpr UnityEngine::Pool::IObjectPool_1<T> __get_m_Pool() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T value, UnityEngine::Pool::IObjectPool_1<T> pool) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::Pool::PooledObject_1, "UnityEngine.Pool", "PooledObject`1");
