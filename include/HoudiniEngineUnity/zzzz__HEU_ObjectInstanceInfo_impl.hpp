#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstancedInput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_ObjectInstanceInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectInstanceInfo::*)(HoudiniEngineUnity::HEU_ObjectInstanceInfo)>(&HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1ffee08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_ObjectInstanceInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectInstanceInfo::*)()>(&HoudiniEngineUnity::HEU_ObjectInstanceInfo::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1ffef50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo>
constexpr  HoudiniEngineUnity::HEU_ObjectInstanceInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedInputs(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InstancedInput> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InstancedInput>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InstancedInput>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InstancedInput> HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedInputs() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InstancedInput>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__partTarget(HoudiniEngineUnity::HEU_PartData value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_PartData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_PartData>(value));
}
constexpr HoudiniEngineUnity::HEU_PartData HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__partTarget() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_PartData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedObjectNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedObjectPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instances(System::Collections::Generic::List_1<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::GameObject>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instances() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo(HoudiniEngineUnity::HEU_ObjectInstanceInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 HoudiniEngineUnity::HEU_ObjectInstanceInfo HoudiniEngineUnity::HEU_ObjectInstanceInfo::New_ctor()  {
HoudiniEngineUnity::HEU_ObjectInstanceInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_ObjectInstanceInfo>())};
return o;
}
 void HoudiniEngineUnity::HEU_ObjectInstanceInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ObjectInstanceInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
