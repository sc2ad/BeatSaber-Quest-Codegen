#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNetworkData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_TOPNetworkData::*)()>(&HoudiniEngineUnity::HEU_TOPNetworkData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x20290f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNetworkData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__nodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_TOPNetworkData::__get__nodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__nodeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_TOPNetworkData::__get__nodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__topNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> HoudiniEngineUnity::HEU_TOPNetworkData::__get__topNodes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__topNodeNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_TOPNetworkData::__get__topNodeNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__selectedTOPIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_TOPNetworkData::__get__selectedTOPIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__parentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_TOPNetworkData::__get__parentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__set__tags(HoudiniEngineUnity::TOPNodeTags value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::TOPNodeTags, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::TOPNodeTags>(value));
}
constexpr HoudiniEngineUnity::TOPNodeTags HoudiniEngineUnity::HEU_TOPNetworkData::__get__tags() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::TOPNodeTags, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::HEU_TOPNetworkData HoudiniEngineUnity::HEU_TOPNetworkData::New_ctor()  {
HoudiniEngineUnity::HEU_TOPNetworkData o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_TOPNetworkData>())};
return o;
}
 void HoudiniEngineUnity::HEU_TOPNetworkData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNetworkData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
