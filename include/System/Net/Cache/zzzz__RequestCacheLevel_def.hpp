#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Cache {
struct RequestCacheLevel;
}
// Type: System.Net.Cache::RequestCacheLevel
namespace System::Net::Cache {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8172))
// CS Name: System.Net.Cache.RequestCacheLevel
struct CORDL_TYPE RequestCacheLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RequestCacheLevel(int32_t value__) noexcept;


                    constexpr RequestCacheLevel(RequestCacheLevel const&) = default;
                    constexpr RequestCacheLevel(RequestCacheLevel&&) = default;
                    constexpr RequestCacheLevel& operator=(RequestCacheLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RequestCacheLevel& operator=(RequestCacheLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RequestCacheLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RequestCacheLevel_Unwrapped : int32_t {
__Default = 0,
__BypassCache = 1,
__CacheOnly = 2,
__CacheIfAvailable = 3,
__Revalidate = 4,
__Reload = 5,
__NoCacheNoStore = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RequestCacheLevel_Unwrapped () const noexcept {
return std::bit_cast<__RequestCacheLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static System::Net::Cache::RequestCacheLevel const Default;

/// @brief Field BypassCache offset 0
static System::Net::Cache::RequestCacheLevel const BypassCache;

/// @brief Field CacheOnly offset 0
static System::Net::Cache::RequestCacheLevel const CacheOnly;

/// @brief Field CacheIfAvailable offset 0
static System::Net::Cache::RequestCacheLevel const CacheIfAvailable;

/// @brief Field Revalidate offset 0
static System::Net::Cache::RequestCacheLevel const Revalidate;

/// @brief Field Reload offset 0
static System::Net::Cache::RequestCacheLevel const Reload;

/// @brief Field NoCacheNoStore offset 0
static System::Net::Cache::RequestCacheLevel const NoCacheNoStore;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Cache
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cache::RequestCacheLevel, "System.Net.Cache", "RequestCacheLevel");
