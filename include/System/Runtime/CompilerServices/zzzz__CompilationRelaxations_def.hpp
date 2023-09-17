#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct CompilationRelaxations;
}
// Type: System.Runtime.CompilerServices::CompilationRelaxations
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3405))
// CS Name: System.Runtime.CompilerServices.CompilationRelaxations
struct CORDL_TYPE CompilationRelaxations : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompilationRelaxations(int32_t value__) noexcept;


                    constexpr CompilationRelaxations(CompilationRelaxations const&) = default;
                    constexpr CompilationRelaxations(CompilationRelaxations&&) = default;
                    constexpr CompilationRelaxations& operator=(CompilationRelaxations const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CompilationRelaxations& operator=(CompilationRelaxations&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CompilationRelaxations(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CompilationRelaxations_Unwrapped : int32_t {
__NoStringInterning = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompilationRelaxations_Unwrapped () const noexcept {
return std::bit_cast<__CompilationRelaxations_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoStringInterning offset 0
static ::System::Runtime::CompilerServices::CompilationRelaxations const NoStringInterning;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilationRelaxations, "System.Runtime.CompilerServices", "CompilationRelaxations");
