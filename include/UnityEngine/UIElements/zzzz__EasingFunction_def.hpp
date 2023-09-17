#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EasingFunction;
}
// Type: UnityEngine.UIElements::EasingFunction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7385))
// CS Name: UnityEngine.UIElements.EasingFunction
struct CORDL_TYPE EasingFunction : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>() const;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UIElements::EasingMode", modifiers: "", def_value: None }]
constexpr EasingFunction(::UnityEngine::UIElements::EasingMode m_Mode) noexcept;


                    constexpr EasingFunction(EasingFunction const&) = default;
                    constexpr EasingFunction(EasingFunction&&) = default;
                    constexpr EasingFunction& operator=(EasingFunction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EasingFunction& operator=(EasingFunction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EasingFunction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::EasingMode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(::UnityEngine::UIElements::EasingMode value) ;

constexpr ::UnityEngine::UIElements::EasingMode __get_m_Mode() const;


// Properties

 ::UnityEngine::UIElements::EasingMode __declspec(property(get=get_mode))  mode;


// Methods

/// @brief Method get_mode addr 0x2cf5d2c size 0x8 virtual false final false
 ::UnityEngine::UIElements::EasingMode get_mode() ;

/// @brief Method .ctor addr 0x2cf5d34 size 0x8 virtual false final false
 void _ctor(::UnityEngine::UIElements::EasingMode mode) ;

/// @brief Method op_Implicit addr 0x2cf5d3c size 0x8 virtual false final false
static ::UnityEngine::UIElements::EasingFunction op_Implicit___UnityEngine__UIElements__EasingFunction(::UnityEngine::UIElements::EasingMode easingMode) ;

/// @brief Method op_Equality addr 0x2cf5d44 size 0xc virtual false final false
static bool op_Equality(::UnityEngine::UIElements::EasingFunction lhs, ::UnityEngine::UIElements::EasingFunction rhs) ;

/// @brief Method Equals addr 0x2cf5d50 size 0x10 virtual true final true
 bool Equals(::UnityEngine::UIElements::EasingFunction other) ;

/// @brief Method Equals addr 0x2cf5d60 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToString addr 0x2cf5dd8 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2cf5e40 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingFunction, "UnityEngine.UIElements", "EasingFunction");
