#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Cache;
}
// Type: UnityEngine::Cache
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10087))
// CS Name: UnityEngine.Cache
struct CORDL_TYPE Cache : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Cache>
constexpr operator  System::IEquatable_1<UnityEngine::Cache>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Cache(int32_t m_Handle) noexcept;


                    constexpr Cache(Cache const&) = default;
                    constexpr Cache(Cache&&) = default;
                    constexpr Cache& operator=(Cache const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Cache& operator=(Cache&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Cache(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(int32_t value) ;

constexpr int32_t __get_m_Handle() const;


// Properties

 int32_t __declspec(property(get=get_handle))  handle;

 bool __declspec(property(get=get_valid))  valid;

 ::StringW __declspec(property(get=get_path))  path;

 int64_t __declspec(property(put=set_maximumAvailableStorageSpace))  maximumAvailableStorageSpace;

 int32_t __declspec(property(put=set_expirationDelay))  expirationDelay;


// Methods

/// @brief Method get_handle addr 0x2b4f310 size 0x8 virtual false final false
 int32_t get_handle() ;

/// @brief Method GetHashCode addr 0x2b4f318 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b4f320 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b4f398 size 0x10 virtual true final true
 bool Equals(UnityEngine::Cache other) ;

/// @brief Method get_valid addr 0x2b4f058 size 0x3c virtual false final false
 bool get_valid() ;

/// @brief Method Cache_IsValid addr 0x2b4f3a8 size 0x3c virtual false final false
static bool Cache_IsValid(int32_t handle) ;

/// @brief Method get_path addr 0x2b4f3e4 size 0x3c virtual false final false
 ::StringW get_path() ;

/// @brief Method Cache_GetPath addr 0x2b4f420 size 0x3c virtual false final false
static ::StringW Cache_GetPath(int32_t handle) ;

/// @brief Method set_maximumAvailableStorageSpace addr 0x2b4f45c size 0x44 virtual false final false
 void set_maximumAvailableStorageSpace(int64_t value) ;

/// @brief Method Cache_SetMaximumDiskSpaceAvailable addr 0x2b4f4a0 size 0x44 virtual false final false
static void Cache_SetMaximumDiskSpaceAvailable(int32_t handle, int64_t value) ;

/// @brief Method set_expirationDelay addr 0x2b4f4e4 size 0x44 virtual false final false
 void set_expirationDelay(int32_t value) ;

/// @brief Method Cache_SetExpirationDelay addr 0x2b4f528 size 0x44 virtual false final false
static void Cache_SetExpirationDelay(int32_t handle, int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cache, "UnityEngine", "Cache");
