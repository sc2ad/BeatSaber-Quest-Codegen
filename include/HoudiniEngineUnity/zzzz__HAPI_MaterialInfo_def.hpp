#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
// Type: HoudiniEngineUnity::HAPI_MaterialInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9683))
// CS Name: HoudiniEngineUnity.HAPI_MaterialInfo
struct CORDL_TYPE HAPI_MaterialInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_MaterialInfo(int32_t nodeId, bool exists, bool hasChanged) noexcept;


                    constexpr HAPI_MaterialInfo(HAPI_MaterialInfo const&) = default;
                    constexpr HAPI_MaterialInfo(HAPI_MaterialInfo&&) = default;
                    constexpr HAPI_MaterialInfo& operator=(HAPI_MaterialInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_MaterialInfo& operator=(HAPI_MaterialInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_MaterialInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nodeId, put=__set_nodeId))  nodeId;

constexpr void __set_nodeId(int32_t value) ;

constexpr int32_t __get_nodeId() const;

 bool __declspec(property(get=__get_exists, put=__set_exists))  exists;

constexpr void __set_exists(bool value) ;

constexpr bool __get_exists() const;

 bool __declspec(property(get=__get_hasChanged, put=__set_hasChanged))  hasChanged;

constexpr void __set_hasChanged(bool value) ;

constexpr bool __get_hasChanged() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_MaterialInfo, "HoudiniEngineUnity", "HAPI_MaterialInfo");
