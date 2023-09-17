#pragma once
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_impl.hpp"
namespace {
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::EventSystems::EventSystem)>(&::UnityEngine::EventSystems::BaseEventData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c1c240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_currentInputModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInputModule (::UnityEngine::EventSystems::BaseEventData::*)()>(&::UnityEngine::EventSystems::BaseEventData::get_currentInputModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c1c28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_selectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::UnityEngine::EventSystems::BaseEventData::*)()>(&::UnityEngine::EventSystems::BaseEventData::get_selectedObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c1c2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "get_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.set_selectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::GameObject)>(&::UnityEngine::EventSystems::BaseEventData::set_selectedObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c1c2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "set_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::EventSystems::BaseEventData::__set_m_EventSystem(::UnityEngine::EventSystems::EventSystem value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::EventSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::EventSystems::EventSystem>(value));
}
constexpr ::UnityEngine::EventSystems::EventSystem ::UnityEngine::EventSystems::BaseEventData::__get_m_EventSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "eventSystem", ty: "::UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
 ::UnityEngine::EventSystems::BaseEventData::BaseEventData(::UnityEngine::EventSystems::EventSystem eventSystem)  : ::UnityEngine::EventSystems::AbstractEventData(THROW_UNLESS(::il2cpp_utils::New<BaseEventData>(eventSystem))) {}
 void ::UnityEngine::EventSystems::BaseEventData::_ctor(::UnityEngine::EventSystems::EventSystem eventSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventSystem);
}
 ::UnityEngine::EventSystems::BaseInputModule ::UnityEngine::EventSystems::BaseEventData::get_currentInputModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseInputModule, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::UnityEngine::EventSystems::BaseEventData::get_selectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "get_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::EventSystems::BaseEventData::set_selectedObject(::UnityEngine::GameObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData>::get(),
                            "set_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
