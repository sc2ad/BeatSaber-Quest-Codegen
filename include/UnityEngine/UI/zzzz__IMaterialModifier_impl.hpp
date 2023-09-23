#pragma once
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: UnityEngine::UI::IMaterialModifier.GetModifiedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (UnityEngine::UI::IMaterialModifier::*)(UnityEngine::Material)>(&UnityEngine::UI::IMaterialModifier::GetModifiedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::IMaterialModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::IMaterialModifier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Material UnityEngine::UI::IMaterialModifier::GetModifiedMaterial(UnityEngine::Material baseMaterial)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::IMaterialModifier>::get(),
                            "GetModifiedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, baseMaterial);
}
