#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneratedOutputData.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_GeneratedOutputData::*)(HoudiniEngineUnity::HEU_GeneratedOutputData)>(&HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1fe38e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneratedOutputData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeneratedOutputData::*)()>(&HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fe3864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeneratedOutputData>
constexpr  HoudiniEngineUnity::HEU_GeneratedOutputData::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeneratedOutputData>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeneratedOutputData>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__gameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_GeneratedOutputData::__get__gameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__renderMaterials(::ArrayW<UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Material>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Material>>(value));
}
constexpr ::ArrayW<UnityEngine::Material> HoudiniEngineUnity::HEU_GeneratedOutputData::__get__renderMaterials() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Material>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__colliders(System::Collections::Generic::List_1<UnityEngine::Collider> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Collider>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Collider>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Collider> HoudiniEngineUnity::HEU_GeneratedOutputData::__get__colliders() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Collider>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo(HoudiniEngineUnity::HEU_GeneratedOutputData other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_GeneratedOutputData::HEU_GeneratedOutputData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_GeneratedOutputData>())) {}
 void HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
