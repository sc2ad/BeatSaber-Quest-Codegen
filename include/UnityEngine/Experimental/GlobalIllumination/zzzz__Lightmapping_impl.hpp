#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Lightmapping_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightDataGI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b7a3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::*)(::ArrayW<::UnityEngine::Light>, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(&::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b7a484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>(object, method))) {}
 void ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate::Invoke(::ArrayW<::UnityEngine::Light> requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Light>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requests, lightsOutput);
}
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::*)()>(&::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7a4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c.__cctor_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::*)(::ArrayW<::UnityEngine::Light>, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(&::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::__cctor_b__7_0)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2b7a504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get(),
                            "<.cctor>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Light>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::__set___9(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c value)  {
::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get>(std::forward<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>(value));
}
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>())) {}
 void ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c::__cctor_b__7_0(::ArrayW<::UnityEngine::Light> requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping____c>::get(),
                            "<.cctor>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Light>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requests, lightsOutput);
}
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.SetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate)>(&::UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b7a0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "SetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.GetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate (*)()>(&::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b7a15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.ResetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b7a1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "ResetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.RequestLights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Light>, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b7a210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "RequestLights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Light>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::__set_s_DefaultDelegate(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate value)  {
::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, "s_DefaultDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get>(std::forward<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>(value));
}
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::__get_s_DefaultDelegate()  {
return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, "s_DefaultDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get>();
}
 void ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::__set_s_RequestLightsDelegate(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate value)  {
::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, "s_RequestLightsDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get>(std::forward<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>(value));
}
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::__get_s_RequestLightsDelegate()  {
return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, "s_RequestLightsDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get>();
}
 void ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate(::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate del)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "SetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, del);
}
 ::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::____UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "ResetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights(::ArrayW<::UnityEngine::Light> lights, ::cordl_internals::intptr_t outLightsPtr, int32_t outLightsCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Lightmapping>::get(),
                            "RequestLights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Light>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lights, outLightsPtr, outLightsCount);
}
} // end anonymous namespace
