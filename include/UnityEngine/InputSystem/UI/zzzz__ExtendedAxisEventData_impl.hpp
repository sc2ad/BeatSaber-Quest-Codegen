#pragma once
#include "UnityEngine/EventSystems/zzzz__AxisEventData_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedAxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::UI::ExtendedAxisEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedAxisEventData::*)(UnityEngine::EventSystems::EventSystem)>(&UnityEngine::InputSystem::UI::ExtendedAxisEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293bdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::ExtendedAxisEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::ExtendedAxisEventData.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::UI::ExtendedAxisEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedAxisEventData::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x293bdd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::UI::ExtendedAxisEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::ExtendedAxisEventData>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "eventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::UI::ExtendedAxisEventData::ExtendedAxisEventData(UnityEngine::EventSystems::EventSystem eventSystem)  : UnityEngine::EventSystems::AxisEventData(THROW_UNLESS(::il2cpp_utils::New<ExtendedAxisEventData>(eventSystem))) {}
 void UnityEngine::InputSystem::UI::ExtendedAxisEventData::_ctor(UnityEngine::EventSystems::EventSystem eventSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::ExtendedAxisEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventSystem);
}
 ::StringW UnityEngine::InputSystem::UI::ExtendedAxisEventData::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::ExtendedAxisEventData>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
