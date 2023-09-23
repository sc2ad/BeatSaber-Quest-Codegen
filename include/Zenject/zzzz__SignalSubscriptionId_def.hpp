#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace Zenject {
struct BindingId;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Zenject {
struct SignalSubscriptionId;
}
// Type: Zenject::SignalSubscriptionId
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10604))
// CS Name: Zenject.SignalSubscriptionId
struct CORDL_TYPE SignalSubscriptionId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<Zenject::SignalSubscriptionId>
constexpr operator  System::IEquatable_1<Zenject::SignalSubscriptionId>() const;

// Ctor Parameters [CppParam { name: "_signalId", ty: "Zenject::BindingId", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr SignalSubscriptionId(Zenject::BindingId _signalId, ::bs_hook::Il2CppWrapperType _callback) noexcept;


                    constexpr SignalSubscriptionId(SignalSubscriptionId const&) = default;
                    constexpr SignalSubscriptionId(SignalSubscriptionId&&) = default;
                    constexpr SignalSubscriptionId& operator=(SignalSubscriptionId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SignalSubscriptionId& operator=(SignalSubscriptionId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SignalSubscriptionId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Zenject::BindingId __declspec(property(get=__get__signalId, put=__set__signalId))  _signalId;

constexpr void __set__signalId(Zenject::BindingId value) ;

constexpr Zenject::BindingId __get__signalId() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__callback() const;


// Properties

 Zenject::BindingId __declspec(property(get=get_SignalId))  SignalId;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Callback))  Callback;


// Methods

/// @brief Method .ctor addr 0x2d4ad9c size 0xc virtual false final false
 void _ctor(Zenject::BindingId signalId, ::bs_hook::Il2CppWrapperType callback) ;

/// @brief Method get_SignalId addr 0x2d4ada8 size 0xc virtual false final false
 Zenject::BindingId get_SignalId() ;

/// @brief Method get_Callback addr 0x2d4adb4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Callback() ;

/// @brief Method GetHashCode addr 0x2d4adbc size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d4ae04 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType that) ;

/// @brief Method Equals addr 0x2d4ae94 size 0xb0 virtual true final true
 bool Equals(Zenject::SignalSubscriptionId that) ;

/// @brief Method op_Equality addr 0x2d4af44 size 0x30 virtual false final false
static bool op_Equality(Zenject::SignalSubscriptionId left, Zenject::SignalSubscriptionId right) ;

/// @brief Method op_Inequality addr 0x2d4af74 size 0x34 virtual false final false
static bool op_Inequality(Zenject::SignalSubscriptionId left, Zenject::SignalSubscriptionId right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalSubscriptionId, "Zenject", "SignalSubscriptionId");
