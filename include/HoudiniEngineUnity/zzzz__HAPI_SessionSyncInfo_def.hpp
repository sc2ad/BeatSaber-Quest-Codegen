#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
// Type: HoudiniEngineUnity::HAPI_SessionSyncInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9697))
// CS Name: HoudiniEngineUnity.HAPI_SessionSyncInfo
struct CORDL_TYPE HAPI_SessionSyncInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_SessionSyncInfo(bool cookUsingHoudiniTime, bool syncViewport) noexcept;


                    constexpr HAPI_SessionSyncInfo(HAPI_SessionSyncInfo const&) = default;
                    constexpr HAPI_SessionSyncInfo(HAPI_SessionSyncInfo&&) = default;
                    constexpr HAPI_SessionSyncInfo& operator=(HAPI_SessionSyncInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_SessionSyncInfo& operator=(HAPI_SessionSyncInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_SessionSyncInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_cookUsingHoudiniTime, put=__set_cookUsingHoudiniTime))  cookUsingHoudiniTime;

constexpr void __set_cookUsingHoudiniTime(bool value) ;

constexpr bool __get_cookUsingHoudiniTime() const;

 bool __declspec(property(get=__get_syncViewport, put=__set_syncViewport))  syncViewport;

constexpr void __set_syncViewport(bool value) ;

constexpr bool __get_syncViewport() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionSyncInfo, "HoudiniEngineUnity", "HAPI_SessionSyncInfo");
