#pragma once
#include "Unity/XR/Oculus/zzzz__Utils_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
//  Writing Method size for method: Unity::XR::Oculus::Utils.SetColorScaleAndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector4, UnityEngine::Vector4)>(&Unity::XR::Oculus::Utils::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ade738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Utils.GetSystemHeadsetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::XR::Oculus::SystemHeadset (*)()>(&Unity::XR::Oculus::Utils::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Utils.SetFoveationLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&Unity::XR::Oculus::Utils::SetFoveationLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ade788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "SetFoveationLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Utils.EnableDynamicFFR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&Unity::XR::Oculus::Utils::EnableDynamicFFR)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ade81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "EnableDynamicFFR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Utils.GetFoveationLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&Unity::XR::Oculus::Utils::GetFoveationLevel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ade8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "GetFoveationLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Unity::XR::Oculus::Utils::SetColorScaleAndOffset(UnityEngine::Vector4 colorScale, UnityEngine::Vector4 colorOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorScale, colorOffset);
}
 Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::Utils::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Utils::SetFoveationLevel(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "SetFoveationLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level);
}
 bool Unity::XR::Oculus::Utils::EnableDynamicFFR(bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "EnableDynamicFFR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enable);
}
 int32_t Unity::XR::Oculus::Utils::GetFoveationLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Utils>::get(),
                            "GetFoveationLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
