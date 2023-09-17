#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
// Type: HoudiniEngineUnity::HAPI_HandleInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9677))
// CS Name: HoudiniEngineUnity.HAPI_HandleInfo
struct CORDL_TYPE HAPI_HandleInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingsCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HandleInfo(int32_t nameSH, int32_t typeNameSH, int32_t bindingsCount) noexcept;


                    constexpr HAPI_HandleInfo(HAPI_HandleInfo const&) = default;
                    constexpr HAPI_HandleInfo(HAPI_HandleInfo&&) = default;
                    constexpr HAPI_HandleInfo& operator=(HAPI_HandleInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_HandleInfo& operator=(HAPI_HandleInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_HandleInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_typeNameSH, put=__set_typeNameSH))  typeNameSH;

constexpr void __set_typeNameSH(int32_t value) ;

constexpr int32_t __get_typeNameSH() const;

 int32_t __declspec(property(get=__get_bindingsCount, put=__set_bindingsCount))  bindingsCount;

constexpr void __set_bindingsCount(int32_t value) ;

constexpr int32_t __get_bindingsCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleInfo, "HoudiniEngineUnity", "HAPI_HandleInfo");
