#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Type: UnityEngine.InputSystem.Utilities::FourCC
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6750))
// CS Name: UnityEngine.InputSystem.Utilities.FourCC
struct CORDL_TYPE FourCC : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>() const;

// Ctor Parameters [CppParam { name: "m_Code", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FourCC(int32_t m_Code) noexcept;


                    constexpr FourCC(FourCC const&) = default;
                    constexpr FourCC(FourCC&&) = default;
                    constexpr FourCC& operator=(FourCC const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FourCC& operator=(FourCC&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FourCC(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Code, put=__set_m_Code))  m_Code;

constexpr void __set_m_Code(int32_t value) ;

constexpr int32_t __get_m_Code() const;


// Methods

/// @brief Method .ctor addr 0x297d160 size 0x8 virtual false final false
 void _ctor(int32_t code) ;

/// @brief Method .ctor addr 0x2978ee0 size 0x20 virtual false final false
 void _ctor(char16_t a, char16_t b, char16_t c, char16_t d) ;

/// @brief Method .ctor addr 0x297d168 size 0x170 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method op_Implicit addr 0x297d2d8 size 0x4 virtual false final false
static int32_t op_Implicit_int32_t(::UnityEngine::InputSystem::Utilities::FourCC fourCC) ;

/// @brief Method op_Implicit addr 0x297d2dc size 0x8 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC op_Implicit___UnityEngine__InputSystem__Utilities__FourCC(int32_t i) ;

/// @brief Method ToString addr 0x297d2e4 size 0x1b0 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x297d494 size 0x10 virtual true final true
 bool Equals(::UnityEngine::InputSystem::Utilities::FourCC other) ;

/// @brief Method Equals addr 0x297d4a4 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x297d51c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x297d524 size 0xc virtual false final false
static bool op_Equality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right) ;

/// @brief Method op_Inequality addr 0x297d530 size 0xc virtual false final false
static bool op_Inequality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right) ;

/// @brief Method FromInt32 addr 0x297d53c size 0x8 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC FromInt32(int32_t i) ;

/// @brief Method ToInt32 addr 0x297d544 size 0x4 virtual false final false
static int32_t ToInt32(::UnityEngine::InputSystem::Utilities::FourCC fourCC) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::FourCC, "UnityEngine.InputSystem.Utilities", "FourCC");
