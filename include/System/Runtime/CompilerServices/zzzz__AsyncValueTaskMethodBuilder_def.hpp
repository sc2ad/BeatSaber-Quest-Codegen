#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3350))
// CS Name: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder
struct CORDL_TYPE AsyncValueTaskMethodBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult, bool _useBuilder) noexcept;


                    constexpr AsyncValueTaskMethodBuilder(AsyncValueTaskMethodBuilder const&) = default;
                    constexpr AsyncValueTaskMethodBuilder(AsyncValueTaskMethodBuilder&&) = default;
                    constexpr AsyncValueTaskMethodBuilder& operator=(AsyncValueTaskMethodBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncValueTaskMethodBuilder& operator=(AsyncValueTaskMethodBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncValueTaskMethodBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder))  _methodBuilder;

constexpr void __set__methodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get__methodBuilder() const;

 bool __declspec(property(get=__get__haveResult, put=__set__haveResult))  _haveResult;

constexpr void __set__haveResult(bool value) ;

constexpr bool __get__haveResult() const;

 bool __declspec(property(get=__get__useBuilder, put=__set__useBuilder))  _useBuilder;

constexpr void __set__useBuilder(bool value) ;

constexpr bool __get__useBuilder() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder");
