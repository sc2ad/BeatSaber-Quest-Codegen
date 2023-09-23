#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Type: System.Runtime.Serialization::StreamingContext
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3231))
// CS Name: System.Runtime.Serialization.StreamingContext
struct CORDL_TYPE StreamingContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_additionalContext", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "m_state", ty: "System::Runtime::Serialization::StreamingContextStates", modifiers: "", def_value: None }]
constexpr StreamingContext(::bs_hook::Il2CppWrapperType m_additionalContext, System::Runtime::Serialization::StreamingContextStates m_state) noexcept;


                    constexpr StreamingContext(StreamingContext const&) = default;
                    constexpr StreamingContext(StreamingContext&&) = default;
                    constexpr StreamingContext& operator=(StreamingContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StreamingContext& operator=(StreamingContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StreamingContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_additionalContext, put=__set_m_additionalContext))  m_additionalContext;

constexpr void __set_m_additionalContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_additionalContext() const;

 System::Runtime::Serialization::StreamingContextStates __declspec(property(get=__get_m_state, put=__set_m_state))  m_state;

constexpr void __set_m_state(System::Runtime::Serialization::StreamingContextStates value) ;

constexpr System::Runtime::Serialization::StreamingContextStates __get_m_state() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Context))  Context;

 System::Runtime::Serialization::StreamingContextStates __declspec(property(get=get_State))  State;


// Methods

/// @brief Method .ctor addr 0x23536b4 size 0xc virtual false final false
 void _ctor(System::Runtime::Serialization::StreamingContextStates state) ;

/// @brief Method .ctor addr 0x23536c0 size 0xc virtual false final false
 void _ctor(System::Runtime::Serialization::StreamingContextStates state, ::bs_hook::Il2CppWrapperType additional) ;

/// @brief Method get_Context addr 0x23536cc size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Context() ;

/// @brief Method Equals addr 0x23536d4 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2353784 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_State addr 0x235378c size 0x8 virtual false final false
 System::Runtime::Serialization::StreamingContextStates get_State() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");
