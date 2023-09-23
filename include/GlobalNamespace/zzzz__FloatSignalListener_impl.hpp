#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FloatSignalListener_def.hpp"
#include "GlobalNamespace/zzzz__FloatUnityEvent_def.hpp"
#include "GlobalNamespace/zzzz__FloatSignal_def.hpp"
//  Writing Method size for method: GlobalNamespace::FloatSignalListener.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1f831bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FloatSignalListener.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1f8325c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FloatSignalListener.HandleEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)(float_t)>(&GlobalNamespace::FloatSignalListener::HandleEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1f832fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "HandleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FloatSignalListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8335c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FloatSignalListener::__set__floatSignal(GlobalNamespace::FloatSignal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FloatSignal, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FloatSignal>(value));
}
constexpr GlobalNamespace::FloatSignal GlobalNamespace::FloatSignalListener::__get__floatSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FloatSignal, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FloatSignalListener::__set__unityEvent(GlobalNamespace::FloatUnityEvent value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FloatUnityEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FloatUnityEvent>(value));
}
constexpr GlobalNamespace::FloatUnityEvent GlobalNamespace::FloatSignalListener::__get__unityEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FloatUnityEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FloatSignalListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FloatSignalListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FloatSignalListener::HandleEvent(float_t f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            "HandleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, f);
}
// Ctor Parameters []
 GlobalNamespace::FloatSignalListener::FloatSignalListener()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FloatSignalListener>())) {}
 void GlobalNamespace::FloatSignalListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatSignalListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
