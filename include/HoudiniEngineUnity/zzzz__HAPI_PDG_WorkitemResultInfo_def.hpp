#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9695))
// CS Name: HoudiniEngineUnity.HAPI_PDG_WorkitemResultInfo
struct CORDL_TYPE HAPI_PDG_WorkitemResultInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultHash", ty: "int64_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemResultInfo(int32_t resultSH, int32_t resultTagSH, int64_t resultHash) noexcept;


                    constexpr HAPI_PDG_WorkitemResultInfo(HAPI_PDG_WorkitemResultInfo const&) = default;
                    constexpr HAPI_PDG_WorkitemResultInfo(HAPI_PDG_WorkitemResultInfo&&) = default;
                    constexpr HAPI_PDG_WorkitemResultInfo& operator=(HAPI_PDG_WorkitemResultInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_WorkitemResultInfo& operator=(HAPI_PDG_WorkitemResultInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_WorkitemResultInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_resultSH, put=__set_resultSH))  resultSH;

constexpr void __set_resultSH(int32_t value) ;

constexpr int32_t __get_resultSH() const;

 int32_t __declspec(property(get=__get_resultTagSH, put=__set_resultTagSH))  resultTagSH;

constexpr void __set_resultTagSH(int32_t value) ;

constexpr int32_t __get_resultTagSH() const;

 int64_t __declspec(property(get=__get_resultHash, put=__set_resultHash))  resultHash;

constexpr void __set_resultHash(int64_t value) ;

constexpr int64_t __get_resultHash() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemResultInfo");
