#pragma once
#include "UnityEngine/ProBuilder/zzzz__MaterialUtility_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::MaterialUtility.GetMaterialCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Renderer)>(&UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29b4554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get(),
                            "GetMaterialCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Renderer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MaterialUtility.GetSharedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (*)(UnityEngine::Renderer, int32_t)>(&UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x29b4624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get(),
                            "GetSharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Renderer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::MaterialUtility::__set_s_MaterialArray(System::Collections::Generic::List_1<UnityEngine::Material> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::Material>, "s_MaterialArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::Material>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::Material> UnityEngine::ProBuilder::MaterialUtility::__get_s_MaterialArray()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::Material>, "s_MaterialArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get>();
}
 int32_t UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount(UnityEngine::Renderer renderer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get(),
                            "GetMaterialCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Renderer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderer);
}
 UnityEngine::Material UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial(UnityEngine::Renderer renderer, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MaterialUtility>::get(),
                            "GetSharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Renderer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(nullptr, ___internal_method, renderer, index);
}
