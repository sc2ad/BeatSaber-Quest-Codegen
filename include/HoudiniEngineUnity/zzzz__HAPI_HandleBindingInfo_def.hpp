#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleBindingInfo;
}
// Type: HoudiniEngineUnity::HAPI_HandleBindingInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9678))
// CS Name: HoudiniEngineUnity.HAPI_HandleBindingInfo
struct CORDL_TYPE HAPI_HandleBindingInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handleParmNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HandleBindingInfo(int32_t handleParmNameSH, int32_t assetParmNameSH, int32_t assetParmId, int32_t assetParmIndex) noexcept;


                    constexpr HAPI_HandleBindingInfo(HAPI_HandleBindingInfo const&) = default;
                    constexpr HAPI_HandleBindingInfo(HAPI_HandleBindingInfo&&) = default;
                    constexpr HAPI_HandleBindingInfo& operator=(HAPI_HandleBindingInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_HandleBindingInfo& operator=(HAPI_HandleBindingInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_HandleBindingInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_handleParmNameSH, put=__set_handleParmNameSH))  handleParmNameSH;

constexpr void __set_handleParmNameSH(int32_t value) ;

constexpr int32_t __get_handleParmNameSH() const;

 int32_t __declspec(property(get=__get_assetParmNameSH, put=__set_assetParmNameSH))  assetParmNameSH;

constexpr void __set_assetParmNameSH(int32_t value) ;

constexpr int32_t __get_assetParmNameSH() const;

 int32_t __declspec(property(get=__get_assetParmId, put=__set_assetParmId))  assetParmId;

constexpr void __set_assetParmId(int32_t value) ;

constexpr int32_t __get_assetParmId() const;

 int32_t __declspec(property(get=__get_assetParmIndex, put=__set_assetParmIndex))  assetParmIndex;

constexpr void __set_assetParmIndex(int32_t value) ;

constexpr int32_t __get_assetParmIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleBindingInfo, "HoudiniEngineUnity", "HAPI_HandleBindingInfo");
