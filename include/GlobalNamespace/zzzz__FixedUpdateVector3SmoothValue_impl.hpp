#pragma once
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::FixedUpdateVector3SmoothValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateVector3SmoothValue::*)(float_t)>(&GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f71f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateVector3SmoothValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateVector3SmoothValue.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::FixedUpdateVector3SmoothValue::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f71f9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FixedUpdateVector3SmoothValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateVector3SmoothValue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::FixedUpdateVector3SmoothValue GlobalNamespace::FixedUpdateVector3SmoothValue::New_ctor(float_t smooth)  {
GlobalNamespace::FixedUpdateVector3SmoothValue o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::FixedUpdateVector3SmoothValue>(smooth))};
return o;
}
 void GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor(float_t smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateVector3SmoothValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, smooth);
}
 UnityEngine::Vector3 GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate(UnityEngine::Vector3 value0, UnityEngine::Vector3 value1, float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateVector3SmoothValue>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, value0, value1, t);
}
