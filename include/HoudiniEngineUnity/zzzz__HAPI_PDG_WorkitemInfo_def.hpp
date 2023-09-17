#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9694))
// CS Name: HoudiniEngineUnity.HAPI_PDG_WorkitemInfo
struct CORDL_TYPE HAPI_PDG_WorkitemInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numResults", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemInfo(int32_t index, int32_t numResults, int32_t nameSH) noexcept;


                    constexpr HAPI_PDG_WorkitemInfo(HAPI_PDG_WorkitemInfo const&) = default;
                    constexpr HAPI_PDG_WorkitemInfo(HAPI_PDG_WorkitemInfo&&) = default;
                    constexpr HAPI_PDG_WorkitemInfo& operator=(HAPI_PDG_WorkitemInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_WorkitemInfo& operator=(HAPI_PDG_WorkitemInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_WorkitemInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_numResults, put=__set_numResults))  numResults;

constexpr void __set_numResults(int32_t value) ;

constexpr int32_t __get_numResults() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemInfo");
