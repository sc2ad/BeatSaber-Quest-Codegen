#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
//  Writing Method size for method: UnityEngine::WaitForSecondsRealtime.get_waitTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::WaitForSecondsRealtime::*)()>(&UnityEngine::WaitForSecondsRealtime::get_waitTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5c1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "get_waitTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitForSecondsRealtime.set_waitTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitForSecondsRealtime::*)(float_t)>(&UnityEngine::WaitForSecondsRealtime::set_waitTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5c1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "set_waitTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitForSecondsRealtime.get_keepWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WaitForSecondsRealtime::*)()>(&UnityEngine::WaitForSecondsRealtime::get_keepWaiting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b5c200;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::WaitForSecondsRealtime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitForSecondsRealtime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitForSecondsRealtime::*)(float_t)>(&UnityEngine::WaitForSecondsRealtime::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b5c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitForSecondsRealtime.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitForSecondsRealtime::*)()>(&UnityEngine::WaitForSecondsRealtime::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b5c2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::WaitForSecondsRealtime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::WaitForSecondsRealtime::__set__waitTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::WaitForSecondsRealtime::__get__waitTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::WaitForSecondsRealtime::__set_m_WaitUntilTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::WaitForSecondsRealtime::__get_m_WaitUntilTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::WaitForSecondsRealtime::get_waitTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "get_waitTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::WaitForSecondsRealtime::set_waitTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "set_waitTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::WaitForSecondsRealtime::get_keepWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "get_keepWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
 UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime(float_t time)  : UnityEngine::CustomYieldInstruction(THROW_UNLESS(::il2cpp_utils::New<WaitForSecondsRealtime>(time))) {}
 void UnityEngine::WaitForSecondsRealtime::_ctor(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void UnityEngine::WaitForSecondsRealtime::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitForSecondsRealtime>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
