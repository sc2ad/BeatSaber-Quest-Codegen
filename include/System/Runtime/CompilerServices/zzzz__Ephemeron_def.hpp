#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
// Type: System.Runtime.CompilerServices::Ephemeron
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3411))
// CS Name: System.Runtime.CompilerServices.Ephemeron
struct CORDL_TYPE Ephemeron : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr Ephemeron(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) noexcept;


                    constexpr Ephemeron(Ephemeron const&) = default;
                    constexpr Ephemeron(Ephemeron&&) = default;
                    constexpr Ephemeron& operator=(Ephemeron const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Ephemeron& operator=(Ephemeron&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Ephemeron(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::Ephemeron, "System.Runtime.CompilerServices", "Ephemeron");
