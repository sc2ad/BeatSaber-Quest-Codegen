#pragma once
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: Zenject::IPrefabProvider.GetPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (Zenject::IPrefabProvider::*)()>(&Zenject::IPrefabProvider::GetPrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IPrefabProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPrefabProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Object Zenject::IPrefabProvider::GetPrefab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPrefabProvider>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
