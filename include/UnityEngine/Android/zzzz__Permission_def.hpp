#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Forward declare root types
namespace UnityEngine::Android {
struct Permission;
}
// Type: UnityEngine.Android::Permission
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14898))
// CS Name: UnityEngine.Android.Permission
struct CORDL_TYPE Permission : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Permission(Permission const&) = default;
                    constexpr Permission(Permission&&) = default;
                    constexpr Permission& operator=(Permission const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Permission& operator=(Permission&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Permission(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::AndroidJavaObject __declspec(property(get=__get_m_UnityPermissions, put=__set_m_UnityPermissions))  m_UnityPermissions;

static void __set_m_UnityPermissions(::UnityEngine::AndroidJavaObject value) ;

static ::UnityEngine::AndroidJavaObject __get_m_UnityPermissions() ;

static ::UnityEngine::AndroidJavaObject __declspec(property(get=__get_m_Activity, put=__set_m_Activity))  m_Activity;

static void __set_m_Activity(::UnityEngine::AndroidJavaObject value) ;

static ::UnityEngine::AndroidJavaObject __get_m_Activity() ;


// Methods

/// @brief Method GetActivity addr 0x2b17d84 size 0x218 virtual false final false
static ::UnityEngine::AndroidJavaObject GetActivity() ;

/// @brief Method GetUnityPermissions addr 0x2b17f9c size 0xb8 virtual false final false
static ::UnityEngine::AndroidJavaObject GetUnityPermissions() ;

/// @brief Method HasUserAuthorizedPermission addr 0x2b18054 size 0x120 virtual false final false
static bool HasUserAuthorizedPermission(::StringW permission) ;

/// @brief Method RequestUserPermission addr 0x2b18174 size 0xa4 virtual false final false
static void RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks callbacks) ;

/// @brief Method RequestUserPermissions addr 0x2b18218 size 0x1138 virtual false final false
static void RequestUserPermissions(::ArrayW<::StringW> permissions, ::UnityEngine::Android::PermissionCallbacks callbacks) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::Permission, "UnityEngine.Android", "Permission");
