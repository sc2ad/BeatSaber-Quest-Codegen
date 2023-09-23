#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IBitMask_1;
}
// Type: ::IBitMask`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15098))
// CS Name: IBitMask`1
class CORDL_TYPE IBitMask_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<T>
constexpr operator  System::IEquatable_1<T>() const noexcept;

~IBitMask_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBitMask_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_bitCount))  bitCount;


// Methods

/// @brief Method get_bitCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_bitCount() ;

/// @brief Method SetBits addr 0x0 size 0xffffffffffffffff virtual true final false
 T SetBits(int32_t offset, uint64_t bits) ;

/// @brief Method GetBits addr 0x0 size 0xffffffffffffffff virtual true final false
 uint64_t GetBits(int32_t offset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IBitMask_1, "", "IBitMask`1");
