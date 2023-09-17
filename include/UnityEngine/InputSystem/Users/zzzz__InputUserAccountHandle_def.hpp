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
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
// Type: UnityEngine.InputSystem.Users::InputUserAccountHandle
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6448))
// CS Name: UnityEngine.InputSystem.Users.InputUserAccountHandle
struct CORDL_TYPE InputUserAccountHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() const;

// Ctor Parameters [CppParam { name: "m_ApiName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InputUserAccountHandle(::StringW m_ApiName, uint64_t m_Handle) noexcept;


                    constexpr InputUserAccountHandle(InputUserAccountHandle const&) = default;
                    constexpr InputUserAccountHandle(InputUserAccountHandle&&) = default;
                    constexpr InputUserAccountHandle& operator=(InputUserAccountHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputUserAccountHandle& operator=(InputUserAccountHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputUserAccountHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_ApiName, put=__set_m_ApiName))  m_ApiName;

constexpr void __set_m_ApiName(::StringW value) ;

constexpr ::StringW __get_m_ApiName() const;

 uint64_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(uint64_t value) ;

constexpr uint64_t __get_m_Handle() const;


// Properties

 ::StringW __declspec(property(get=get_apiName))  apiName;

 uint64_t __declspec(property(get=get_handle))  handle;


// Methods

/// @brief Method get_apiName addr 0x293b9c8 size 0x8 virtual false final false
 ::StringW get_apiName() ;

/// @brief Method get_handle addr 0x293b9d0 size 0x8 virtual false final false
 uint64_t get_handle() ;

/// @brief Method .ctor addr 0x293b9d8 size 0x80 virtual false final false
 void _ctor(::StringW apiName, uint64_t handle) ;

/// @brief Method ToString addr 0x293ba58 size 0xc4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x293bb1c size 0xb0 virtual true final true
 bool Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle other) ;

/// @brief Method Equals addr 0x293bbcc size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x293b8b4 size 0x2c virtual false final false
static bool op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right) ;

/// @brief Method op_Inequality addr 0x293bc44 size 0x30 virtual false final false
static bool op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right) ;

/// @brief Method GetHashCode addr 0x293bc74 size 0x58 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserAccountHandle, "UnityEngine.InputSystem.Users", "InputUserAccountHandle");
