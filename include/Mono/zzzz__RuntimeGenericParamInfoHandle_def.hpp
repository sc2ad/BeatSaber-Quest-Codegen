#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
// Forward declare root types
namespace Mono {
struct RuntimeGenericParamInfoHandle;
}
// Type: Mono::RuntimeGenericParamInfoHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2230))
// CS Name: Mono.RuntimeGenericParamInfoHandle
struct CORDL_TYPE RuntimeGenericParamInfoHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
constexpr RuntimeGenericParamInfoHandle(void* value) noexcept;


                    constexpr RuntimeGenericParamInfoHandle(RuntimeGenericParamInfoHandle const&) = default;
                    constexpr RuntimeGenericParamInfoHandle(RuntimeGenericParamInfoHandle&&) = default;
                    constexpr RuntimeGenericParamInfoHandle& operator=(RuntimeGenericParamInfoHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeGenericParamInfoHandle& operator=(RuntimeGenericParamInfoHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeGenericParamInfoHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(void* value) ;

constexpr void* __get_value() const;


// Properties

 ::ArrayW<System::Type> __declspec(property(get=get_Constraints))  Constraints;

 System::Reflection::GenericParameterAttributes __declspec(property(get=get_Attributes))  Attributes;


// Methods

/// @brief Method .ctor addr 0x22a5050 size 0x20 virtual false final false
 void _ctor(::cordl_internals::intptr_t ptr) ;

/// @brief Method get_Constraints addr 0x22a5070 size 0x4 virtual false final false
 ::ArrayW<System::Type> get_Constraints() ;

/// @brief Method get_Attributes addr 0x22a51a0 size 0x1c virtual false final false
 System::Reflection::GenericParameterAttributes get_Attributes() ;

/// @brief Method GetConstraints addr 0x22a5074 size 0x12c virtual false final false
 ::ArrayW<System::Type> GetConstraints() ;

/// @brief Method GetConstraintsCount addr 0x22a51bc size 0x40 virtual false final false
 int32_t GetConstraintsCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
