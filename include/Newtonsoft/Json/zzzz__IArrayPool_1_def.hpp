#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Type: Newtonsoft.Json::IArrayPool`1
namespace Newtonsoft::Json {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11743))
// CS Name: Newtonsoft.Json.IArrayPool`1
class CORDL_TYPE IArrayPool_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IArrayPool_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<T> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<T> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::IArrayPool_1, "Newtonsoft.Json", "IArrayPool`1");
