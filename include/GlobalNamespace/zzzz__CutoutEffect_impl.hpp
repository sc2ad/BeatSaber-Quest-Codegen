#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__CutoutEffect_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.get_useRandomCutoutOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x224df14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "get_useRandomCutoutOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::Start)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x224df5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.SetCutout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)(float_t)>(&::GlobalNamespace::CutoutEffect::SetCutout)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x224dcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "SetCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.SetCutout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)(float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::CutoutEffect::SetCutout)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x224df98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "SetCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224e07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::CutoutEffect::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController ::GlobalNamespace::CutoutEffect::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CutoutEffect::__set__useRandomCutoutOffset(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::CutoutEffect::__get__useRandomCutoutOffset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CutoutEffect::__set__cutoutOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::CutoutEffect::__get__cutoutOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CutoutEffect::__set__randomNoiseTexOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::CutoutEffect::__get__randomNoiseTexOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CutoutEffect::__set__cutout(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CutoutEffect::__get__cutout() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::CutoutEffect::__set__cutoutPropertyID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_cutoutPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::CutoutEffect::__get__cutoutPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_cutoutPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get>();
}
 void ::GlobalNamespace::CutoutEffect::__set__cutoutTexOffsetPropertyID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_cutoutTexOffsetPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::CutoutEffect::__get__cutoutTexOffsetPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_cutoutTexOffsetPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get>();
}
 bool ::GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "get_useRandomCutoutOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::CutoutEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::CutoutEffect::SetCutout(float_t cutout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "SetCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutout);
}
 void ::GlobalNamespace::CutoutEffect::SetCutout(float_t cutout, ::UnityEngine::Vector3 cutoutOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            "SetCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutout, cutoutOffset);
}
// Ctor Parameters []
 ::GlobalNamespace::CutoutEffect::CutoutEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CutoutEffect>())) {}
 void ::GlobalNamespace::CutoutEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
