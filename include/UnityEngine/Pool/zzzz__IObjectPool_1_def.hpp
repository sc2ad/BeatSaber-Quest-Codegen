#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
// Type: UnityEngine.Pool::IObjectPool`1
namespace UnityEngine::Pool {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10378))
// CS Name: UnityEngine.Pool.IObjectPool`1
class CORDL_TYPE IObjectPool_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObjectPool_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObjectPool_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release(T element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Pool::IObjectPool_1, "UnityEngine.Pool", "IObjectPool`1");
