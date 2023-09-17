#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Type: HoudiniEngineUnity::HAPI_NodeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9674))
// CS Name: HoudiniEngineUnity.HAPI_NodeInfo
struct CORDL_TYPE HAPI_NodeInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "totalCookCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uniqueHoudiniNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "internalNodePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmIntValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmFloatValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmStringValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmChoiceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childNodeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createdPostAssetLoad", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTimeDependent", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_NodeInfo(int32_t id, int32_t parentId, int32_t nameSH, ::HoudiniEngineUnity::HAPI_NodeType type, bool isValid, int32_t totalCookCount, int32_t uniqueHoudiniNodeId, int32_t internalNodePathSH, int32_t parmCount, int32_t parmIntValueCount, int32_t parmFloatValueCount, int32_t parmStringValueCount, int32_t parmChoiceCount, int32_t childNodeCount, int32_t inputCount, int32_t outputCount, bool createdPostAssetLoad, bool isTimeDependent) noexcept;


                    constexpr HAPI_NodeInfo(HAPI_NodeInfo const&) = default;
                    constexpr HAPI_NodeInfo(HAPI_NodeInfo&&) = default;
                    constexpr HAPI_NodeInfo& operator=(HAPI_NodeInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_NodeInfo& operator=(HAPI_NodeInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x44};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_NodeInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int32_t value) ;

constexpr int32_t __get_id() const;

 int32_t __declspec(property(get=__get_parentId, put=__set_parentId))  parentId;

constexpr void __set_parentId(int32_t value) ;

constexpr int32_t __get_parentId() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 ::HoudiniEngineUnity::HAPI_NodeType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_NodeType value) ;

constexpr ::HoudiniEngineUnity::HAPI_NodeType __get_type() const;

 bool __declspec(property(get=__get_isValid, put=__set_isValid))  isValid;

constexpr void __set_isValid(bool value) ;

constexpr bool __get_isValid() const;

 int32_t __declspec(property(get=__get_totalCookCount, put=__set_totalCookCount))  totalCookCount;

constexpr void __set_totalCookCount(int32_t value) ;

constexpr int32_t __get_totalCookCount() const;

 int32_t __declspec(property(get=__get_uniqueHoudiniNodeId, put=__set_uniqueHoudiniNodeId))  uniqueHoudiniNodeId;

constexpr void __set_uniqueHoudiniNodeId(int32_t value) ;

constexpr int32_t __get_uniqueHoudiniNodeId() const;

 int32_t __declspec(property(get=__get_internalNodePathSH, put=__set_internalNodePathSH))  internalNodePathSH;

constexpr void __set_internalNodePathSH(int32_t value) ;

constexpr int32_t __get_internalNodePathSH() const;

 int32_t __declspec(property(get=__get_parmCount, put=__set_parmCount))  parmCount;

constexpr void __set_parmCount(int32_t value) ;

constexpr int32_t __get_parmCount() const;

 int32_t __declspec(property(get=__get_parmIntValueCount, put=__set_parmIntValueCount))  parmIntValueCount;

constexpr void __set_parmIntValueCount(int32_t value) ;

constexpr int32_t __get_parmIntValueCount() const;

 int32_t __declspec(property(get=__get_parmFloatValueCount, put=__set_parmFloatValueCount))  parmFloatValueCount;

constexpr void __set_parmFloatValueCount(int32_t value) ;

constexpr int32_t __get_parmFloatValueCount() const;

 int32_t __declspec(property(get=__get_parmStringValueCount, put=__set_parmStringValueCount))  parmStringValueCount;

constexpr void __set_parmStringValueCount(int32_t value) ;

constexpr int32_t __get_parmStringValueCount() const;

 int32_t __declspec(property(get=__get_parmChoiceCount, put=__set_parmChoiceCount))  parmChoiceCount;

constexpr void __set_parmChoiceCount(int32_t value) ;

constexpr int32_t __get_parmChoiceCount() const;

 int32_t __declspec(property(get=__get_childNodeCount, put=__set_childNodeCount))  childNodeCount;

constexpr void __set_childNodeCount(int32_t value) ;

constexpr int32_t __get_childNodeCount() const;

 int32_t __declspec(property(get=__get_inputCount, put=__set_inputCount))  inputCount;

constexpr void __set_inputCount(int32_t value) ;

constexpr int32_t __get_inputCount() const;

 int32_t __declspec(property(get=__get_outputCount, put=__set_outputCount))  outputCount;

constexpr void __set_outputCount(int32_t value) ;

constexpr int32_t __get_outputCount() const;

 bool __declspec(property(get=__get_createdPostAssetLoad, put=__set_createdPostAssetLoad))  createdPostAssetLoad;

constexpr void __set_createdPostAssetLoad(bool value) ;

constexpr bool __get_createdPostAssetLoad() const;

 bool __declspec(property(get=__get_isTimeDependent, put=__set_isTimeDependent))  isTimeDependent;

constexpr void __set_isTimeDependent(bool value) ;

constexpr bool __get_isTimeDependent() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeInfo, "HoudiniEngineUnity", "HAPI_NodeInfo");
