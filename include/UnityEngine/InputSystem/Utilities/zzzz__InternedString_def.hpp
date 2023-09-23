#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Type: UnityEngine.InputSystem.Utilities::InternedString
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6754))
// CS Name: UnityEngine.InputSystem.Utilities.InternedString
struct CORDL_TYPE InternedString : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to System::IComparable_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::IComparable_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

// Ctor Parameters [CppParam { name: "m_StringOriginalCase", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StringLowerCase", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InternedString(::StringW m_StringOriginalCase, ::StringW m_StringLowerCase) noexcept;


                    constexpr InternedString(InternedString const&) = default;
                    constexpr InternedString(InternedString&&) = default;
                    constexpr InternedString& operator=(InternedString const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternedString& operator=(InternedString&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternedString(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_StringOriginalCase, put=__set_m_StringOriginalCase))  m_StringOriginalCase;

constexpr void __set_m_StringOriginalCase(::StringW value) ;

constexpr ::StringW __get_m_StringOriginalCase() const;

 ::StringW __declspec(property(get=__get_m_StringLowerCase, put=__set_m_StringLowerCase))  m_StringLowerCase;

constexpr void __set_m_StringLowerCase(::StringW value) ;

constexpr ::StringW __get_m_StringLowerCase() const;


// Properties

 int32_t __declspec(property(get=get_length))  length;


// Methods

/// @brief Method get_length addr 0x297d548 size 0x18 virtual false final false
 int32_t get_length() ;

/// @brief Method .ctor addr 0x297d560 size 0xa8 virtual false final false
 void _ctor(::StringW text) ;

/// @brief Method IsEmpty addr 0x297d608 size 0x10 virtual false final false
 bool IsEmpty() ;

/// @brief Method ToLower addr 0x297d618 size 0x8 virtual false final false
 ::StringW ToLower() ;

/// @brief Method Equals addr 0x297d620 size 0x114 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x297d734 size 0x10 virtual true final true
 bool Equals(UnityEngine::InputSystem::Utilities::InternedString other) ;

/// @brief Method CompareTo addr 0x297d744 size 0x14 virtual true final true
 int32_t CompareTo(UnityEngine::InputSystem::Utilities::InternedString other) ;

/// @brief Method GetHashCode addr 0x297d758 size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2976d80 size 0x54 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2976890 size 0xc virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::InternedString a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_Inequality addr 0x297d770 size 0xc virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::InternedString a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_Equality addr 0x297d77c size 0x98 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::InternedString a, ::StringW b) ;

/// @brief Method op_Inequality addr 0x297d814 size 0x98 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::InternedString a, ::StringW b) ;

/// @brief Method op_Equality addr 0x297d8ac size 0x94 virtual false final false
static bool op_Equality(::StringW a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_Inequality addr 0x297d940 size 0x94 virtual false final false
static bool op_Inequality(::StringW a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_LessThan addr 0x297d9d4 size 0x24 virtual false final false
static bool op_LessThan(UnityEngine::InputSystem::Utilities::InternedString left, UnityEngine::InputSystem::Utilities::InternedString right) ;

/// @brief Method op_GreaterThan addr 0x297d9f8 size 0x28 virtual false final false
static bool op_GreaterThan(UnityEngine::InputSystem::Utilities::InternedString left, UnityEngine::InputSystem::Utilities::InternedString right) ;

/// @brief Method op_Implicit addr 0x297689c size 0x54 virtual false final false
static ::StringW op_Implicit___StringW(UnityEngine::InputSystem::Utilities::InternedString str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::InternedString, "UnityEngine.InputSystem.Utilities", "InternedString");
