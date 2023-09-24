#pragma once
#include "UnityEngine/EventSystems/zzzz__RaycasterManager_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: UnityEngine::EventSystems::RaycasterManager.AddRaycaster
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::EventSystems::BaseRaycaster)>(&UnityEngine::EventSystems::RaycasterManager::AddRaycaster)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c26c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "AddRaycaster",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseRaycaster>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycasterManager.GetRaycasters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster> (*)()>(&UnityEngine::EventSystems::RaycasterManager::GetRaycasters)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c26d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "GetRaycasters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycasterManager.RemoveRaycasters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::EventSystems::BaseRaycaster)>(&UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c26d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "RemoveRaycasters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseRaycaster>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::EventSystems::RaycasterManager::__set_s_Raycasters(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster>, "s_Raycasters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster> UnityEngine::EventSystems::RaycasterManager::__get_s_Raycasters()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster>, "s_Raycasters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get>();
}
 void UnityEngine::EventSystems::RaycasterManager::AddRaycaster(UnityEngine::EventSystems::BaseRaycaster baseRaycaster)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "AddRaycaster",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseRaycaster>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseRaycaster);
}
 System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster> UnityEngine::EventSystems::RaycasterManager::GetRaycasters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "GetRaycasters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster>, false>(nullptr, ___internal_method);
}
 void UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters(UnityEngine::EventSystems::BaseRaycaster baseRaycaster)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycasterManager>::get(),
                            "RemoveRaycasters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseRaycaster>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseRaycaster);
}
