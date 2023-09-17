#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace System::Reflection {
struct ParameterModifier;
}
// Type: System.Reflection::ParameterModifier
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3476))
// CS Name: System.Reflection.ParameterModifier
struct CORDL_TYPE ParameterModifier : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool>", modifiers: "", def_value: None }]
constexpr ParameterModifier(::ArrayW<bool> _byRef) noexcept;


                    constexpr ParameterModifier(ParameterModifier const&) = default;
                    constexpr ParameterModifier(ParameterModifier&&) = default;
                    constexpr ParameterModifier& operator=(ParameterModifier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParameterModifier& operator=(ParameterModifier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParameterModifier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<bool> __declspec(property(get=__get__byRef, put=__set__byRef))  _byRef;

constexpr void __set__byRef(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__byRef() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
