#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_Permissions;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmType;
}
namespace HoudiniEngineUnity {
struct HAPI_ChoiceListType;
}
namespace HoudiniEngineUnity {
struct HAPI_RampType;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeFlags;
}
namespace HoudiniEngineUnity {
struct HAPI_PrmScriptType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Type: HoudiniEngineUnity::HAPI_ParmInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9675))
// CS Name: HoudiniEngineUnity.HAPI_ParmInfo
struct CORDL_TYPE HAPI_ParmInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_ParmType", modifiers: "", def_value: None }, CppParam { name: "scriptType", ty: "HoudiniEngineUnity::HAPI_PrmScriptType", modifiers: "", def_value: None }, CppParam { name: "typeInfoSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "permissions", ty: "HoudiniEngineUnity::HAPI_Permissions", modifiers: "", def_value: None }, CppParam { name: "tagCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceListType", ty: "HoudiniEngineUnity::HAPI_ChoiceListType", modifiers: "", def_value: None }, CppParam { name: "choiceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "templateNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasMin", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasUIMin", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasUIMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UIMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UIMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "invisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spare", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "joinNext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "labelNone", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "intValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputNodeType", ty: "HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "inputNodeFlag", ty: "HoudiniEngineUnity::HAPI_NodeFlags", modifiers: "", def_value: None }, CppParam { name: "isChildOfMultiParm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instanceNum", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceStartOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rampType", ty: "HoudiniEngineUnity::HAPI_RampType", modifiers: "", def_value: None }, CppParam { name: "visibilityConditionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "disabledConditionSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmInfo(int32_t id, int32_t parentId, int32_t childIndex, HoudiniEngineUnity::HAPI_ParmType type, HoudiniEngineUnity::HAPI_PrmScriptType scriptType, int32_t typeInfoSH, HoudiniEngineUnity::HAPI_Permissions permissions, int32_t tagCount, int32_t size, HoudiniEngineUnity::HAPI_ChoiceListType choiceListType, int32_t choiceCount, int32_t nameSH, int32_t labelSH, int32_t templateNameSH, int32_t helpSH, bool hasMin, bool hasMax, bool hasUIMin, bool hasUIMax, float_t min, float_t max, float_t UIMin, float_t UIMax, bool invisible, bool disabled, bool spare, bool joinNext, bool labelNone, int32_t intValuesIndex, int32_t floatValuesIndex, int32_t stringValuesIndex, int32_t choiceIndex, HoudiniEngineUnity::HAPI_NodeType inputNodeType, HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag, bool isChildOfMultiParm, int32_t instanceNum, int32_t instanceLength, int32_t instanceCount, int32_t instanceStartOffset, HoudiniEngineUnity::HAPI_RampType rampType, int32_t visibilityConditionSH, int32_t disabledConditionSH) noexcept;


                    constexpr HAPI_ParmInfo(HAPI_ParmInfo const&) = default;
                    constexpr HAPI_ParmInfo(HAPI_ParmInfo&&) = default;
                    constexpr HAPI_ParmInfo& operator=(HAPI_ParmInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ParmInfo& operator=(HAPI_ParmInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ParmInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=__get_childIndex, put=__set_childIndex))  childIndex;

constexpr void __set_childIndex(int32_t value) ;

constexpr int32_t __get_childIndex() const;

 HoudiniEngineUnity::HAPI_ParmType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(HoudiniEngineUnity::HAPI_ParmType value) ;

constexpr HoudiniEngineUnity::HAPI_ParmType __get_type() const;

 HoudiniEngineUnity::HAPI_PrmScriptType __declspec(property(get=__get_scriptType, put=__set_scriptType))  scriptType;

constexpr void __set_scriptType(HoudiniEngineUnity::HAPI_PrmScriptType value) ;

constexpr HoudiniEngineUnity::HAPI_PrmScriptType __get_scriptType() const;

 int32_t __declspec(property(get=__get_typeInfoSH, put=__set_typeInfoSH))  typeInfoSH;

constexpr void __set_typeInfoSH(int32_t value) ;

constexpr int32_t __get_typeInfoSH() const;

 HoudiniEngineUnity::HAPI_Permissions __declspec(property(get=__get_permissions, put=__set_permissions))  permissions;

constexpr void __set_permissions(HoudiniEngineUnity::HAPI_Permissions value) ;

constexpr HoudiniEngineUnity::HAPI_Permissions __get_permissions() const;

 int32_t __declspec(property(get=__get_tagCount, put=__set_tagCount))  tagCount;

constexpr void __set_tagCount(int32_t value) ;

constexpr int32_t __get_tagCount() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 HoudiniEngineUnity::HAPI_ChoiceListType __declspec(property(get=__get_choiceListType, put=__set_choiceListType))  choiceListType;

constexpr void __set_choiceListType(HoudiniEngineUnity::HAPI_ChoiceListType value) ;

constexpr HoudiniEngineUnity::HAPI_ChoiceListType __get_choiceListType() const;

 int32_t __declspec(property(get=__get_choiceCount, put=__set_choiceCount))  choiceCount;

constexpr void __set_choiceCount(int32_t value) ;

constexpr int32_t __get_choiceCount() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_labelSH, put=__set_labelSH))  labelSH;

constexpr void __set_labelSH(int32_t value) ;

constexpr int32_t __get_labelSH() const;

 int32_t __declspec(property(get=__get_templateNameSH, put=__set_templateNameSH))  templateNameSH;

constexpr void __set_templateNameSH(int32_t value) ;

constexpr int32_t __get_templateNameSH() const;

 int32_t __declspec(property(get=__get_helpSH, put=__set_helpSH))  helpSH;

constexpr void __set_helpSH(int32_t value) ;

constexpr int32_t __get_helpSH() const;

 bool __declspec(property(get=__get_hasMin, put=__set_hasMin))  hasMin;

constexpr void __set_hasMin(bool value) ;

constexpr bool __get_hasMin() const;

 bool __declspec(property(get=__get_hasMax, put=__set_hasMax))  hasMax;

constexpr void __set_hasMax(bool value) ;

constexpr bool __get_hasMax() const;

 bool __declspec(property(get=__get_hasUIMin, put=__set_hasUIMin))  hasUIMin;

constexpr void __set_hasUIMin(bool value) ;

constexpr bool __get_hasUIMin() const;

 bool __declspec(property(get=__get_hasUIMax, put=__set_hasUIMax))  hasUIMax;

constexpr void __set_hasUIMax(bool value) ;

constexpr bool __get_hasUIMax() const;

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;

 float_t __declspec(property(get=__get_UIMin, put=__set_UIMin))  UIMin;

constexpr void __set_UIMin(float_t value) ;

constexpr float_t __get_UIMin() const;

 float_t __declspec(property(get=__get_UIMax, put=__set_UIMax))  UIMax;

constexpr void __set_UIMax(float_t value) ;

constexpr float_t __get_UIMax() const;

 bool __declspec(property(get=__get_invisible, put=__set_invisible))  invisible;

constexpr void __set_invisible(bool value) ;

constexpr bool __get_invisible() const;

 bool __declspec(property(get=__get_disabled, put=__set_disabled))  disabled;

constexpr void __set_disabled(bool value) ;

constexpr bool __get_disabled() const;

 bool __declspec(property(get=__get_spare, put=__set_spare))  spare;

constexpr void __set_spare(bool value) ;

constexpr bool __get_spare() const;

 bool __declspec(property(get=__get_joinNext, put=__set_joinNext))  joinNext;

constexpr void __set_joinNext(bool value) ;

constexpr bool __get_joinNext() const;

 bool __declspec(property(get=__get_labelNone, put=__set_labelNone))  labelNone;

constexpr void __set_labelNone(bool value) ;

constexpr bool __get_labelNone() const;

 int32_t __declspec(property(get=__get_intValuesIndex, put=__set_intValuesIndex))  intValuesIndex;

constexpr void __set_intValuesIndex(int32_t value) ;

constexpr int32_t __get_intValuesIndex() const;

 int32_t __declspec(property(get=__get_floatValuesIndex, put=__set_floatValuesIndex))  floatValuesIndex;

constexpr void __set_floatValuesIndex(int32_t value) ;

constexpr int32_t __get_floatValuesIndex() const;

 int32_t __declspec(property(get=__get_stringValuesIndex, put=__set_stringValuesIndex))  stringValuesIndex;

constexpr void __set_stringValuesIndex(int32_t value) ;

constexpr int32_t __get_stringValuesIndex() const;

 int32_t __declspec(property(get=__get_choiceIndex, put=__set_choiceIndex))  choiceIndex;

constexpr void __set_choiceIndex(int32_t value) ;

constexpr int32_t __get_choiceIndex() const;

 HoudiniEngineUnity::HAPI_NodeType __declspec(property(get=__get_inputNodeType, put=__set_inputNodeType))  inputNodeType;

constexpr void __set_inputNodeType(HoudiniEngineUnity::HAPI_NodeType value) ;

constexpr HoudiniEngineUnity::HAPI_NodeType __get_inputNodeType() const;

 HoudiniEngineUnity::HAPI_NodeFlags __declspec(property(get=__get_inputNodeFlag, put=__set_inputNodeFlag))  inputNodeFlag;

constexpr void __set_inputNodeFlag(HoudiniEngineUnity::HAPI_NodeFlags value) ;

constexpr HoudiniEngineUnity::HAPI_NodeFlags __get_inputNodeFlag() const;

 bool __declspec(property(get=__get_isChildOfMultiParm, put=__set_isChildOfMultiParm))  isChildOfMultiParm;

constexpr void __set_isChildOfMultiParm(bool value) ;

constexpr bool __get_isChildOfMultiParm() const;

 int32_t __declspec(property(get=__get_instanceNum, put=__set_instanceNum))  instanceNum;

constexpr void __set_instanceNum(int32_t value) ;

constexpr int32_t __get_instanceNum() const;

 int32_t __declspec(property(get=__get_instanceLength, put=__set_instanceLength))  instanceLength;

constexpr void __set_instanceLength(int32_t value) ;

constexpr int32_t __get_instanceLength() const;

 int32_t __declspec(property(get=__get_instanceCount, put=__set_instanceCount))  instanceCount;

constexpr void __set_instanceCount(int32_t value) ;

constexpr int32_t __get_instanceCount() const;

 int32_t __declspec(property(get=__get_instanceStartOffset, put=__set_instanceStartOffset))  instanceStartOffset;

constexpr void __set_instanceStartOffset(int32_t value) ;

constexpr int32_t __get_instanceStartOffset() const;

 HoudiniEngineUnity::HAPI_RampType __declspec(property(get=__get_rampType, put=__set_rampType))  rampType;

constexpr void __set_rampType(HoudiniEngineUnity::HAPI_RampType value) ;

constexpr HoudiniEngineUnity::HAPI_RampType __get_rampType() const;

 int32_t __declspec(property(get=__get_visibilityConditionSH, put=__set_visibilityConditionSH))  visibilityConditionSH;

constexpr void __set_visibilityConditionSH(int32_t value) ;

constexpr int32_t __get_visibilityConditionSH() const;

 int32_t __declspec(property(get=__get_disabledConditionSH, put=__set_disabledConditionSH))  disabledConditionSH;

constexpr void __set_disabledConditionSH(int32_t value) ;

constexpr int32_t __get_disabledConditionSH() const;


// Methods

/// @brief Method isInt addr 0x201f2f4 size 0x20 virtual false final false
 bool isInt() ;

/// @brief Method isFloat addr 0x201f314 size 0x14 virtual false final false
 bool isFloat() ;

/// @brief Method isString addr 0x201f328 size 0x30 virtual false final false
 bool isString() ;

/// @brief Method isPath addr 0x201f358 size 0x20 virtual false final false
 bool isPath() ;

/// @brief Method isNode addr 0x201f378 size 0x10 virtual false final false
 bool isNode() ;

/// @brief Method isNonValue addr 0x201f388 size 0x14 virtual false final false
 bool isNonValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ParmInfo, "HoudiniEngineUnity", "HAPI_ParmInfo");
