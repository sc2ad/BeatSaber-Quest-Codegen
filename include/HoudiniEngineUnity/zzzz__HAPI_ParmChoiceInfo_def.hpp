#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
// Type: HoudiniEngineUnity::HAPI_ParmChoiceInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9676))
// CS Name: HoudiniEngineUnity.HAPI_ParmChoiceInfo
struct CORDL_TYPE HAPI_ParmChoiceInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmChoiceInfo(int32_t parentParmId, int32_t labelSH, int32_t valueSH) noexcept;


                    constexpr HAPI_ParmChoiceInfo(HAPI_ParmChoiceInfo const&) = default;
                    constexpr HAPI_ParmChoiceInfo(HAPI_ParmChoiceInfo&&) = default;
                    constexpr HAPI_ParmChoiceInfo& operator=(HAPI_ParmChoiceInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ParmChoiceInfo& operator=(HAPI_ParmChoiceInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ParmChoiceInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_parentParmId, put=__set_parentParmId))  parentParmId;

constexpr void __set_parentParmId(int32_t value) ;

constexpr int32_t __get_parentParmId() const;

 int32_t __declspec(property(get=__get_labelSH, put=__set_labelSH))  labelSH;

constexpr void __set_labelSH(int32_t value) ;

constexpr int32_t __get_labelSH() const;

 int32_t __declspec(property(get=__get_valueSH, put=__set_valueSH))  valueSH;

constexpr void __set_valueSH(int32_t value) ;

constexpr int32_t __get_valueSH() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ParmChoiceInfo, "HoudiniEngineUnity", "HAPI_ParmChoiceInfo");
