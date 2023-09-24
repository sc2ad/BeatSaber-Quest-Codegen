#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Permissions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PrmScriptType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ChoiceListType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RampType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeFlags_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x201f2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x201f314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x201f328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x201f358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x201f378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_ParmInfo.isNonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isNonValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x201f388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isNonValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_ParmType", modifiers: "", def_value: Some("{}") }, CppParam { name: "scriptType", ty: "HoudiniEngineUnity::HAPI_PrmScriptType", modifiers: "", def_value: Some("{}") }, CppParam { name: "typeInfoSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "permissions", ty: "HoudiniEngineUnity::HAPI_Permissions", modifiers: "", def_value: Some("{}") }, CppParam { name: "tagCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "choiceListType", ty: "HoudiniEngineUnity::HAPI_ChoiceListType", modifiers: "", def_value: Some("{}") }, CppParam { name: "choiceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "templateNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "helpSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMin", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMax", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasUIMin", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasUIMax", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UIMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UIMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "invisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "disabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "spare", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "joinNext", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelNone", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "intValuesIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "floatValuesIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringValuesIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "choiceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputNodeType", ty: "HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputNodeFlag", ty: "HoudiniEngineUnity::HAPI_NodeFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "isChildOfMultiParm", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceNum", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceStartOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rampType", ty: "HoudiniEngineUnity::HAPI_RampType", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibilityConditionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disabledConditionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ParmInfo::HAPI_ParmInfo(int32_t id, int32_t parentId, int32_t childIndex, HoudiniEngineUnity::HAPI_ParmType type, HoudiniEngineUnity::HAPI_PrmScriptType scriptType, int32_t typeInfoSH, HoudiniEngineUnity::HAPI_Permissions permissions, int32_t tagCount, int32_t size, HoudiniEngineUnity::HAPI_ChoiceListType choiceListType, int32_t choiceCount, int32_t nameSH, int32_t labelSH, int32_t templateNameSH, int32_t helpSH, bool hasMin, bool hasMax, bool hasUIMin, bool hasUIMax, float_t min, float_t max, float_t UIMin, float_t UIMax, bool invisible, bool disabled, bool spare, bool joinNext, bool labelNone, int32_t intValuesIndex, int32_t floatValuesIndex, int32_t stringValuesIndex, int32_t choiceIndex, HoudiniEngineUnity::HAPI_NodeType inputNodeType, HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag, bool isChildOfMultiParm, int32_t instanceNum, int32_t instanceLength, int32_t instanceCount, int32_t instanceStartOffset, HoudiniEngineUnity::HAPI_RampType rampType, int32_t visibilityConditionSH, int32_t disabledConditionSH) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->parentId = parentId;
this->childIndex = childIndex;
this->type = type;
this->scriptType = scriptType;
this->typeInfoSH = typeInfoSH;
this->permissions = permissions;
this->tagCount = tagCount;
this->size = size;
this->choiceListType = choiceListType;
this->choiceCount = choiceCount;
this->nameSH = nameSH;
this->labelSH = labelSH;
this->templateNameSH = templateNameSH;
this->helpSH = helpSH;
this->hasMin = hasMin;
this->hasMax = hasMax;
this->hasUIMin = hasUIMin;
this->hasUIMax = hasUIMax;
this->min = min;
this->max = max;
this->UIMin = UIMin;
this->UIMax = UIMax;
this->invisible = invisible;
this->disabled = disabled;
this->spare = spare;
this->joinNext = joinNext;
this->labelNone = labelNone;
this->intValuesIndex = intValuesIndex;
this->floatValuesIndex = floatValuesIndex;
this->stringValuesIndex = stringValuesIndex;
this->choiceIndex = choiceIndex;
this->inputNodeType = inputNodeType;
this->inputNodeFlag = inputNodeFlag;
this->isChildOfMultiParm = isChildOfMultiParm;
this->instanceNum = instanceNum;
this->instanceLength = instanceLength;
this->instanceCount = instanceCount;
this->instanceStartOffset = instanceStartOffset;
this->rampType = rampType;
this->visibilityConditionSH = visibilityConditionSH;
this->disabledConditionSH = disabledConditionSH;
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_parentId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_parentId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_childIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_childIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_type(HoudiniEngineUnity::HAPI_ParmType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_ParmType, 0xc>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_ParmType>(value));
}
constexpr HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmInfo::__get_type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_ParmType, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_scriptType(HoudiniEngineUnity::HAPI_PrmScriptType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_PrmScriptType, 0x10>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_PrmScriptType>(value));
}
constexpr HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_ParmInfo::__get_scriptType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_PrmScriptType, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_typeInfoSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_typeInfoSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_permissions(HoudiniEngineUnity::HAPI_Permissions value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_Permissions, 0x18>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_Permissions>(value));
}
constexpr HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_ParmInfo::__get_permissions() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_Permissions, 0x18>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_tagCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_tagCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_choiceListType(HoudiniEngineUnity::HAPI_ChoiceListType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_ChoiceListType, 0x24>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_ChoiceListType>(value));
}
constexpr HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ParmInfo::__get_choiceListType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_ChoiceListType, 0x24>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_choiceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_choiceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_labelSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_labelSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_templateNameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_templateNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_helpSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_helpSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_hasMin(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_hasMin() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_hasMax(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_hasMax() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_hasUIMin(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3e>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_hasUIMin() const {
return ::cordl_internals::getInstanceField<bool, 0x3e>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_hasUIMax(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3f>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_hasUIMax() const {
return ::cordl_internals::getInstanceField<bool, 0x3f>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_ParmInfo::__get_min() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_ParmInfo::__get_max() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_UIMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_ParmInfo::__get_UIMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_UIMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_ParmInfo::__get_UIMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_invisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_invisible() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_disabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_disabled() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_spare(bool value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_spare() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_joinNext(bool value)  {
::cordl_internals::setInstanceField<bool, 0x53>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_joinNext() const {
return ::cordl_internals::getInstanceField<bool, 0x53>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_labelNone(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_labelNone() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_intValuesIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_intValuesIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_floatValuesIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_floatValuesIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_stringValuesIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_stringValuesIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_choiceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_choiceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_inputNodeType(HoudiniEngineUnity::HAPI_NodeType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_NodeType, 0x68>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_NodeType>(value));
}
constexpr HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_ParmInfo::__get_inputNodeType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_NodeType, 0x68>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_inputNodeFlag(HoudiniEngineUnity::HAPI_NodeFlags value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_NodeFlags, 0x6c>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_NodeFlags>(value));
}
constexpr HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_ParmInfo::__get_inputNodeFlag() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_NodeFlags, 0x6c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_isChildOfMultiParm(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ParmInfo::__get_isChildOfMultiParm() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_instanceNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_instanceNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_instanceLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_instanceLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_instanceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_instanceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_instanceStartOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_instanceStartOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_rampType(HoudiniEngineUnity::HAPI_RampType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_RampType, 0x84>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_RampType>(value));
}
constexpr HoudiniEngineUnity::HAPI_RampType HoudiniEngineUnity::HAPI_ParmInfo::__get_rampType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_RampType, 0x84>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_visibilityConditionSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_visibilityConditionSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmInfo::__set_disabledConditionSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmInfo::__get_disabledConditionSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->__instance);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isFloat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HAPI_ParmInfo::isNonValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_ParmInfo>::get(),
                            "isNonValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
